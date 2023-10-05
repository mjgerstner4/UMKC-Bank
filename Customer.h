#pragma once
#include <string>
#include "Transaction.h"

using namespace std;

class Customer {
public:
string name; //name of customer
double currentBalance=0; //current balance
Transaction obj;

// setters
void setname(string n) {
name = n;
}
void setcurrentBalance(double b)
{
currentBalance = b;
}
void setTransaction(Transaction t)
{
obj = t;
}

// getters
string getName() {
return name;
}
double getcurrentBalance() {
return currentBalance;
}
};