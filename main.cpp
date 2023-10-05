#include "Customer.h"
#include "Transaction.h"
#include "Stack.h"
using namespace std;

int main() {
  cout << "WELCOME TO UMKC BANK" << endl;
  cout << "-------------------" << endl;
  Customer obj1,obj2,obj3,obj4,obj5; //customer objects
  Transaction t1,t2,t3,t4,t5; //transactions objects
  Stack s1; //stack object

  // Settting information for first person
  t1.setAmount(300);
  t1.setTransactionType("Deposit");
  obj1.setname("Joe");
  obj1.setcurrentBalance(500);
  obj1.setTransaction(t1);
  s1.push(obj1.getName()); //customer added in stack

  // First addition to stack along with bank info
  cout << "First person added in stack:" << endl;
  cout << "Name of person is " << obj1.getName() << endl;
  cout << "Current balance is " << obj1.getcurrentBalance()  << endl;
  cout << "Transaction type is " << t1.getTransactionType() << endl;
  cout << "Transaction amount is " << t1.getAmount() << endl;
  cout << endl;

  // Settting information for second person
  t2.setAmount(400);
  t2.setTransactionType("WithDrawal");
  obj2.setname("Matt");
  obj2.setcurrentBalance(200);
  obj2.setTransaction(t2);
  s1.push(obj2.getName());

  // Second addition to stack along with bank info
  cout << "Second person added in stack:" << endl;
  cout << "Name of person is " << obj2.getName() << endl;
  cout << "Current balance is " << obj2.getcurrentBalance() << endl;
  cout << "Transaction type is " << t2.getTransactionType() << endl;
  cout << "Transaction amount is " << t2.getAmount() << endl;
  cout << endl;

  // Settting information for third person
  t3.setAmount(500);
  t3.setTransactionType("Deposit");
  obj3.setname("Trent");
  obj3.setcurrentBalance(800);
  obj3.setTransaction(t3);
  s1.push(obj3.getName());

  // Third addition to stack along with bank info
  cout << "Third person added in stack:" << endl;
  cout << "Name of person is " << obj3.getName() << endl;
  cout << "Current balance is " << obj3.getcurrentBalance() << endl;
  cout << "Transaction type is " << t3.getTransactionType() << endl;
  cout << "Transaction amount is " << t3.getAmount() << endl;
  cout << endl;

  // Settting information for fourth person
  t4.setAmount(600);
  t4.setTransactionType("WithDrawal");
  obj4.setname("Alex");
  obj4.setcurrentBalance(800);
  obj4.setTransaction(t4);
  s1.push(obj4.getName());

  // Fourth addition to stack along with bank info
  cout << "Fourth person added in stack:" << endl;
  cout << "Name of person is " << obj4.getName() << endl;
  cout << "Current balance is " << obj4.getcurrentBalance() << endl;
  cout << "Transaction type is " << t4.getTransactionType() << endl;
  cout << "Transaction amount is " << t4.getAmount() << endl;
  cout << endl;

  // Settting information for fifth person
  t5.setAmount(800);
  t5.setTransactionType("Deposit");
  obj5.setname("Jim");
  obj5.setcurrentBalance(3000);
  obj5.setTransaction(t1);
  s1.push(obj5.getName());

  // Fifth addition to stack along with bank info
  cout << "Fifth person added in stack:" << endl;
  cout << "Name of person is " << obj5.getName() << endl;
  cout << "Current balance is " << obj5.getcurrentBalance() << endl;
  cout << "Transaction type is " << t5.getTransactionType() << endl;
  cout << "Transaction amount is " << t5.getAmount() << endl;
}