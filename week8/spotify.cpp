#include <iostream>
#include <string>
#include <curl/curl.h>
using namespace std;

struct MemoryStruct {
  char *memory;
  size_t size;
};

static const string base64_chars = 
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789+/";

string base64_encode(string input, unsigned int in_len);

 
static size_t
WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
  size_t realsize = size * nmemb;
  struct MemoryStruct *mem = (struct MemoryStruct *)userp;
 
  char *ptr = (char *)realloc(mem->memory, mem->size + realsize + 1);
  if(ptr == NULL) {
    /* out of memory! */ 
    printf("not enough memory (realloc returned NULL)\n");
    return 0;
  }
 
  mem->memory = ptr;
  memcpy(&(mem->memory[mem->size]), contents, realsize);
  mem->size += realsize;
  mem->memory[mem->size] = 0;
 
  return realsize;
}

int main(void)
{
  CURL *curl;
  CURLcode res;
  struct curl_slist *list = NULL;
  string encoded_keys;
  struct MemoryStruct chunk;
  chunk.memory = (char *)malloc(1);   
  chunk.size = 0;    /* no data at this point */ 
 
  /* In windows, this will init the winsock stuff */ 
  curl_global_init(CURL_GLOBAL_ALL);
  const char* client_id = getenv("CLIENT_ID");
  const char* client_secret = getenv("CLIENT_SECRET");
  if (!strlen(client_id)){
    printf("Missing client id");
    return -1;
  }
  if (!strlen(client_secret)){
    printf("Missing client_secret");
    return -1;
  }
  /* get a curl handle */ 
  curl = curl_easy_init();
  if(curl) {
    char keys[1024];
    sprintf(keys, "%s:%s", client_id, client_secret);
    cout << "Raw     keys = " << keys << endl;
    encoded_keys = base64_encode(keys, strlen(keys));
    cout << "Encoded keys = " << encoded_keys << endl;
    char auth_key[1024];
    sprintf (auth_key, "Authorization: Basic %s", encoded_keys.c_str());
    printf("Auth : [%s]\n", auth_key);
    list = curl_slist_append(list, auth_key);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);
    
    curl_easy_setopt(curl, CURLOPT_URL, "https://accounts.spotify.com/api/token");
    
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "grant_type=client_credentials&project=curl");

    static const char *parms = "grant_type=client_credentials";
    cout << "Trying to send: ("<<strlen(parms) << ")" << parms << endl;
    curl_easy_setopt(curl, CURLOPT_POST, 1L);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, parms);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, (long)strlen(parms));
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
 
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
     
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
    

    res = curl_easy_perform(curl);
    /* Check for errors */ 
    if(res != CURLE_OK){
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
    }else {
      /*
      * Now, our chunk.memory points to a memory block that is chunk.size
      * bytes big and contains the remote file.
      *
      * Do something nice with it!
      */ 
  
      printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
      printf("%s", chunk.memory);
    }
    /* always cleanup */ 
    curl_easy_cleanup(curl);
    free(chunk.memory);
  }
  curl_global_cleanup();
  return 0;
}

string base64_encode(string input, unsigned int in_len) {
  const char *bytes_to_encode = input.c_str();
  string ret;
  int i = 0;
  int j = 0;
  unsigned char char_array_3[3];
  unsigned char char_array_4[4];

  while (in_len--) {
    char_array_3[i++] = *(bytes_to_encode++);
    if (i == 3) {
      char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
      char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
      char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
      char_array_4[3] = char_array_3[2] & 0x3f;

      for(i = 0; (i <4) ; i++)
        ret += base64_chars[char_array_4[i]];
      i = 0;
    }
  }

  if (i)
  {
    for(j = i; j < 3; j++)
      char_array_3[j] = '\0';

    char_array_4[0] = ( char_array_3[0] & 0xfc) >> 2;
    char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
    char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);

    for (j = 0; (j < i + 1); j++)
      ret += base64_chars[char_array_4[j]];

    while((i++ < 3))
      ret += '=';

  }

  return ret;

}
