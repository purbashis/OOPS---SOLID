/*

Object - Oriented Programming… or OOPS…
is a way of writing code using real -
life concepts.

    In OOPS,
    everything is treated as an object…
    with properties… and behaviors.

    We use classes as blueprints…
    and objects as real examples created from them.



    OOPS is built on four key principles.

    Encapsulation… keeps data and functions together… and protects them.

    Inheritance… allows one class to reuse features of another class.

    Polymorphism… lets one function work in different ways… depending on the object.[pause]

    Abstraction… hides complex details… and shows only what is important.

    Overall…
        OOPS makes code clean… reusable… and easy to maintain.

*/

// 1️⃣ Encapsulation Example

class BankAccount
{
private:
    int balance; // hidden data

public:
    void deposit(int amount)
    {
        balance += amount;
    }

    int getBalance()
    {
        return balance;
    }
};

/*
✔ What this shows:

1. balance is protected . 

2. only deposit() & getBalance() can access it
*/

// 2️⃣ Inheritance Example

#include <iostream>
using namespace std;
class Dog
{
public:
    void bark()
    {
        cout << "Bark!";
    }
};

class Puppy : public Dog
{ 
    // Puppy inherits Dog

};

/*
✔ What this shows:
1. Puppy can use bark() from Dog.

2. code reuse through inheritance.
*/


// 3️⃣ Polymorphism Example

class Animal
{
public:
    virtual void sound()
    {
        cout << "Some sound";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Bark";
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow";
    }
};


/*
✔ What this shows:
1. sound() behaves differently for Dog & Cat.

2. same function name, different behaviors.

*/

// 4️⃣ Abstraction Example

class Car
{
public:
    void startCar()
    {
        startEngine(); // hidden function
    }

private:
    void startEngine()
    {
        // complex logic hidden from user
        cout << "Engine started";
    }
};


/*
✔ What this shows:

1. User calls startCar() without knowing engine details.

2. complex details are hidden.

*/

/*
summary: 

Object-Oriented Programming means
 building software by organizing code into objects — 
like real-life things. OOP mainly has four pillars.


First is Encapsulation, which means wrapping data 
and functions together and protecting them.

Second is Inheritance, where one class can reuse properties of another — 
like a Child extending a Parent.

Third is Polymorphism, where the same function behaves differently — 
for example, sound() of a Dog vs a Cat.

Fourth is Abstraction, where we hide complexity and show only important details.

Overall, OOP helps make code cleaner, reusable,
*/