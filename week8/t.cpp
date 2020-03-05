/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Node
{
private:
  int data;
  Node *next;
public:
  void insert (int value);
  bool contains (int value);
    Node (int value);


};

Node::Node (int value)
{
  data = value;
  next = NULL;
}

void
Node::insert (int value)
{
  if (next != NULL)
    {
      next->insert (value);
    }
  else
    {
      next = new Node (value);
    }
}

bool
Node::contains (int value)
{
  // return false;
  if (data == value)
    {
      return true;
    }
  else if (next != NULL)
    {
      return next->contains (value);
    }
  return false;
}

int
main ()
{
  Node *head = new Node (0);
  head->insert (5);
  head->insert (10);
  head->insert (15);
  head->insert (20);
  head->insert (25);
  cout << "Contains 10? " << head->contains (10) << endl;
  cout << "Contains 12? " << head->contains (12) << endl;
  cout << "Contains 15? " << head->contains (15) << endl;

  return 0;
}

