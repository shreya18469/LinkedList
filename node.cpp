#include "node.h"
#include "student.h"

Node::Node(Student *newStu) {
  value = newStudent;
  next = NULL;
}

Node::~Node() {
  delete &value;
  next = NULL;
}

void Node::setStudent(Student *newStu) {
  value = newStudent;
}

char* Node::getStudent() {
  return value->getName();;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}
