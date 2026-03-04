/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Parameterized Constructor
Date:03/03/2026 
*/

#include <iostream>
using namespace std;

class Car{
public:
    string brand;
    Car(string b){
        brand=b;
        cout<<"Brand: "<<brand<<endl;
    }
};

int main(){
    Car c1("Tesla");
}

/*
Reflection:
1. What I understood:
I understood that a parameterized constructor lets me set values at the moment I create the object.

2. Difficulties:
I mixed up when to use = and () when creating objects. After running it, I understood the () passes arguments to constructor.

3. Research:
I searched “C++ parameterized constructor example” and practiced one simple example.

4. AI Usage:
I used ChatGPT to check my understanding and keep the code simple for OnlineGDB.

5. What I learned:
I learned how to pass values into the constructor to customize the object.
*/
