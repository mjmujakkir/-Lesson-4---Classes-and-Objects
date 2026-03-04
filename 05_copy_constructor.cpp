/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Car{
public:
    string brand;

    Car(string b){
        brand=b;
    }

    Car(const Car &obj){
        brand=obj.brand;
        cout<<"Copy constructor called"<<endl;
    }
};

int main(){
    Car c1("Tesla");
    Car c2(c1);
}

/*
Reflection:
1. What I understood:
I understood the copy constructor runs when we create a new object from an existing object (like Car c2(c1)).

2. Difficulties:
I didn’t understand why it uses & (reference) at first. Now I know it avoids extra copying and prevents problems.

3. Research:
I searched “why copy constructor uses const reference” and read a short explanation.

4. AI Usage:
I used ChatGPT to explain when copy constructor is triggered and how to test it.

5. What I learned:
I learned copy constructor is part of the object lifecycle and is important when duplicating objects.
*/
