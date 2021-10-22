#include <iostream>

using namespace std;

class Node
{
public: 
  Node* Link;
  int Data;
};

void printLinkedList(Node* n)
  {
    while(n!=NULL)
    {
      cout << n -> Data << endl;
      n = n -> Link;
    }
  }

int main()
{
  Node* head = new Node;
  Node* second = new Node;
  Node* third = new Node;

  head -> Data = 1;
  second -> Data = 2;
  third -> Data = 3;

  head -> Link = second;
  second -> Link = third;
  third -> Link = NULL;

  printLinkedList(head);
  
  return 0;
}
