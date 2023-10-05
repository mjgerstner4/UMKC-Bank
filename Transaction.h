#pragma once
#include <string>
using namespace std;

class Transaction
{
public:
string transactionType; // Type of transaction
double amount; // Amount of transaction

// setters
void setTransactionType(string t) {
transactionType = t;
}
void setAmount(double a) {
amount = a;
}

// getters
string getTransactionType() {
return transactionType;
}
double getAmount() {
return amount;
}
};