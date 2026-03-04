/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Basic Class and Object
Date: 02/15/2026
*/

#include <iostream>
using namespace std;

class Car {
public:
    void startEngine(){
        cout<<"start engine"<<endl;
    }
    void accelerate(){
        cout<<"accelerate engine"<<endl;
    }
};

int main(){
    Car car1;
    car1.startEngine();
    car1.accelerate();
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
