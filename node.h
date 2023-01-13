#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

class Node{
 public:
  Node(Student* newStu);
  ~Node();
  void setStudent(Student* newStu);
  char* getStudent();
  void setNext(Node* newnext);
  Node* getNext();
 private:
  Student* value;
  Node* next;
};
#endif
