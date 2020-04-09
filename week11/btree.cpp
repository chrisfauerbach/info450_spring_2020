#include <cstdio>
#define COUNT 10 


class Node{
 public: 
   Node* left;
   Node* right;
   int data;
   Node(){
       data = 0;
       left = right = 0;
   }
   Node(int v){
       data = v;
       left = right = 0;
   }
   void add(Node* n);
   void print();
};

void Node :: add(Node* n){
  if (!left){
    left = n;
  }
  else if (!right){
    right = n;
  }
  else{
     if (n->data < left->data) left->add(n);
     else  right->add(n);
  }
}

void Node :: print(){
   if (left) left->print();
   printf("data = %i\n", data);
   if (right) right->print();
}

// Function to print binary tree in 2D  
// It does reverse inorder traversal  
void print2DUtil(Node *root, int space)  
{  
    // Base case  
    if (root == NULL)  {
        return;  
     }
  
    // Increase distance between levels  
    space += COUNT;  
  
    // Process right child first  
    print2DUtil(root->right, space);  
  
    // Print current node after space  
    // count  
    printf("\n");
    for (int i = COUNT; i < space; i++)  
        printf(" ");  
    printf("%i\n", root->data);
  
    // Process left child  
    print2DUtil(root->left, space);  
}  

// Wrapper over print2DUtil()  
void print2D(Node *root)  
{  
    // Pass initial space count as 0  
    print2DUtil(root, 0);  
}  


int main() {
  Node *root = new Node(0);
  root->add(new Node(20));
  root->add(new Node(10));
  root->add(new Node(30));
  root->add(new Node(5));
  root->add(new Node(15));
  root->print();
  print2D(root);  

  return 0;
}
