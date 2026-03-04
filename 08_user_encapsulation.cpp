/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Encapsulation Example User
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class User{
private:
    string username="admin";
    string password="1234";

public:
    bool login(string u,string p){
        return u==username && p==password;
    }
};

int main(){
    User u1;
    if(u1.login("admin","1234"))
        cout<<"Login success"<<endl;
}

/*
Reflection:
1. What I understood:
I understood encapsulation means keeping data private (like username/password) and only using public functions to interact with it.

2. Difficulties:
The slides showed a single & for the login check. I learned that for logical conditions it should be &&. Using && makes the condition correct.

3. Research:
I searched “difference between & and && in C++” and saw that && is for logical AND.

4. AI Usage:
I used ChatGPT to help me understand the operator difference and to keep the example working in OnlineGDB.

5. What I learned:
I learned private members protect the data, and methods provide controlled access.
*/
