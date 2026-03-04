/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Basic Class and Object
Date: 03/03/2026
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
I understood that a class is like a template and the object is the real thing we use in main. The functions inside the class show what the object can do.

2. Difficulties:
My main confusion was private/public. I thought private means the class won’t work, but now I know private just means outside code can’t access it directly.

3. Research:
I searched “C++ class private public” and saw examples of member functions accessing class data.

4. AI Usage:
I used ChatGPT to explain the idea in simple words and to confirm the code compiles in OnlineGDB.

5. What I learned:
I learned how to create an object and call functions using the dot operator.
*/
