/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Bank Account Encapsulation
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class BankAccount{
private:
    double balance=0;

public:
    void deposit(double amount){
        balance+=amount;
    }

    void withdraw(double amount){
        if(amount<=balance)
            balance-=amount;
    }

    void show(){
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount b;
    b.deposit(200);
    b.withdraw(50);
    b.show();
}

/*
Reflection:
1. What I understood:
I understood that keeping balance private prevents direct changes from outside, and deposit/withdraw control how the balance changes.

2. Difficulties:
I didn’t think about negative deposits or withdrawing too much at first. This example made me realize rules are important.

3. Research:
I searched “encapsulation bank account example C++” to see how people usually structure it.

4. AI Usage:
I used ChatGPT to help me write a simple test in main and to confirm the logic compiles.

5. What I learned:
I learned encapsulation is not just hiding data, it’s also adding rules to protect the object’s state.
*/
