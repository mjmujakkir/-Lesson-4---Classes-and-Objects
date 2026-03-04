/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Object Array Example
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Car{
public:
    Car(){
        cout<<"Car created"<<endl;
    }
};

int main(){
    Car cars[3];
}

/*
Reflection:
1. What I understood:
I understood that when we create an array of objects, the constructor runs for every element in the array.

2. Difficulties:
I didn’t realize Car cars[3] creates 3 objects automatically. The output helped me understand it.

3. Research:
I searched “C++ array of objects constructor called” to confirm that the default constructor runs multiple times.

4. AI Usage:
I used ChatGPT to explain why constructors run for each element in the array.

5. What I learned:
I learned object arrays trigger multiple constructor calls and that’s important to remember for larger arrays.
*/
