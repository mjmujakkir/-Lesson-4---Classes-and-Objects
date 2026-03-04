/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Bank Account Encapsulation
Date: 02/15/2026
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
This example helped me understand how classes and objects work in C++. I saw how attributes and functions are grouped together inside a class.

2. Difficulties:
At first I was confused about how constructors and destructors are automatically called when objects are created and destroyed.

3. Research:
I reviewed the C++ constructor and destructor concept from the textbook and online examples.

4. AI Usage:
I used ChatGPT to clarify syntax and ensure the code compiles correctly.

5. What I learned:
I learned how objects are created from classes and how constructors, copy constructors, and destructors work in the object lifecycle.
*/
