/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructor Example
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Car{
public:
    ~Car(){
        cout<<"Object destroyed"<<endl;
    }
};

int main(){
    Car c1;
}

/*
Reflection:
1. What I understood:
I understood destructor runs automatically when an object is destroyed (usually when it goes out of scope).

2. Difficulties:
I was not sure when exactly it triggers. After running the code, I saw it happens when the program is ending.

3. Research:
I searched “when destructor called C++ scope” to understand “out of scope”.

4. AI Usage:
I used ChatGPT to explain destructor purpose and confirm the syntax with ~ClassName().

5. What I learned:
I learned destructors are used for cleanup and they run automatically.
*/
