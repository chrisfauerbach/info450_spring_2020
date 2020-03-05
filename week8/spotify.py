import base64
import requests
import os
import sys

key = os.environ.get("CLIENT_ID")
secret = os.environ.get("CLIENT_SECRET")
if not key:
    print("Missing client id.")
    sys.exit(-1)
if not secret:
    print("Missing client secret.")
    sys.exit(-1)

url = "https://accounts.spotify.com/api/token"
combined = f"{key}:{secret}"
encoded = base64.b64encode(bytes(combined, "utf-8")).decode('utf-8')
auth_header = f"Basic {encoded}"
data = {"grant_type":"client_credentials"}
# print("Current encoded keys: ", auth_header)
headers = { "Authorization": auth_header}
res = requests.post(url, headers=headers, data=data)
print(res)
print(res.text)

