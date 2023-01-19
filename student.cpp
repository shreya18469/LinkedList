#include "student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student(char* neww){
  name = new char[30];
  strcpy(name, neww);
}
char* Student::getName(){
  return name;
}
