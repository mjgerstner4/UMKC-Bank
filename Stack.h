#pragma once
#include <string>
#include <iostream>
using namespace std;

class Stack {
public:
int top;
string names[100]; // Hold names of customer
int count=0;

Stack() {
top = -1;
}

// Add customer in stack
void push(string n) {
if (top > 100) {
cout << "Stack Over Flow" << endl;
}
else if (top < 100) {
names[++top] = n;
count++;

if (count==5) {
cout << "Size of stack is " << count << endl;
cout << "Customer served next is " << names[top];
cout << endl;
cout << endl;
}
}
}
};