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
