#include <iostream>

using namespace std;

class Node
{
public: 
  Node* Link; //Pointer to a node. We use this to link a node to the next node. 
              //Needs to be a pointer because new keyword uses heap memory and returns pointer to the allocated memory
              //NOTE: Paste code into https://pythontutor.com/cpp.html#mode=display and run visualization for better comprehension
  
  int Data;   //The data that each node contains
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
  Node* head = new Node;  //Initializing our nodes
  Node* second = new Node;
  Node* third = new Node;

  head -> Data = 1;       //Declaring what data each node will hold
  second -> Data = 2;
  third -> Data = 3;

  head -> Link = second;  //Declaring where each node will point to
  second -> Link = third;
  third -> Link = NULL;

  printLinkedList(head); //Checking if our nodes are linked together
                         //Since we only give the head node as input
                         //If all data (1,2,3) gets printed our nodes are linked a.k.a Linked List
  
  return 0;
}
