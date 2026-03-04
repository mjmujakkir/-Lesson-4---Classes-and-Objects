/*
Name: Md Mujakkir (MJ)
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Person Class Example
Date: 03/03/2026
*/

#include <iostream>
using namespace std;

class Person{
public:
    string name="Maksi";
    int age=29;
    char gender='M';

    void introduce(){
        cout<<"Hello I'm "<<name<<" and I'm "<<age<<" years old"<<endl;
    }
};

int main(){
    Person p1;
    p1.introduce();
}

/*
Reflection:
1. What I understood:
I understood how a class can store related information (name, age, gender) and one function can use them to print a message.

2. Difficulties:
When I copied from slides before, I saw weird quote issues sometimes. I learned that some slide quotes are not normal C++ quotes.

3. Research:
I searched “smart quotes C++ compile error” because code from slides sometimes breaks.

4. AI Usage:
I used ChatGPT to help me check the condition and make sure the quotes are normal.

5. What I learned:
I learned to always re-check code after copying from slides because formatting can cause errors.
*/
