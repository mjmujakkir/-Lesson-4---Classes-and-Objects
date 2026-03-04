/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constructor Example
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Car{
public:
    Car(){
        cout<<"Default constructor called"<<endl;
    }
};

int main(){
    Car c1;
}

/*
Reflection:
1. What I understood:
I understood that a constructor runs automatically when the object is created. I don’t call it manually.

2. Difficulties:
I was confused why it prints without calling a function, but now I know the constructor is special.

3. Research:
I reviewed “C++ constructors” examples and notes to see when the constructor runs.

4. AI Usage:
I used ChatGPT to confirm the constructor rules (same name as class, no return type).

5. What I learned:
I learned the constructor is used to initialize an object right at creation time.
*/
