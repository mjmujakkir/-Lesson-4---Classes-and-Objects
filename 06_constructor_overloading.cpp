/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constructor Overloading
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Car{
public:
    Car(){
        cout<<"Default constructor"<<endl;
    }
    Car(string b){
        cout<<"Parameterized constructor "<<b<<endl;
    }
};

int main(){
    Car c1;
    Car c2("BMW");
}

/*
Reflection:
1. What I understood:
I understood constructor overloading means we can have more than one constructor with different parameters.

2. Difficulties:
At first I thought two constructors with same name is not allowed, but I learned C++ chooses based on parameters.

3. Research:
I searched “constructor overloading C++” to understand how the compiler decides which one runs.

4. AI Usage:
I used ChatGPT to confirm the example and make sure both constructors compile.

5. What I learned:
I learned the same class can support different ways to create objects (default vs custom).
*/
