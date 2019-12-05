#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>

using namespace std;
class student
{
 private:
        string first;
        string last;
 public:
       void setName(string input1,string input2);
       string fullName();
};







#endif
