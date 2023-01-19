#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

void add(char* name);
void print(Node* next);

Node* head = NULL;

int main() {
  char* name = new char[20];
  strcpy(name, "Tyler");
  Student* stu1 = new Student(name);
  strcpy(name, "Jenna");
  Student* stu2 = new Student(name);

  
  Node* head =  new Node(stu1);
  head->setStudent(stu1);
  cout << "List: ";
  cout << head->getStudent() << endl;

  Node* current = head;
  current->setNext(new Node(stu2));
  current->getNext()->setStudent(stu2);
  cout << "List: ";
  cout << head->getStudent() << "," << head->getNext()->getStudent() << endl;

}
