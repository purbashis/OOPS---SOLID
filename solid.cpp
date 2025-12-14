/*
“SOLID… is a set of five principles…
that help us write clean… flexible… and maintainable code.

S — Single Responsibility Principle…
A class should do only one job…
and have one reason to change.

O — Open/Closed Principle…
Code should be open for extension…
but closed for modification.

L — Liskov Substitution Principle…
A child class should work properly…
wherever its parent class is used.

I — Interface Segregation Principle…
Don’t force a class to use methods…
that it does not need.

D — Dependency Inversion Principle…
Depend on abstractions…
not on concrete classes.

Together…
SOLID makes software easier to test… scale… and maintain.

*/





//S — Single Responsibility Principle(SRP)

//👉 One class = one job

//❌ Bad Example(One class doing too much) 


class User
{
public:
    void saveToDatabase()
    {
        // save user
    }

    void sendEmail()
    {
        // send email
    }
};

//❌ Problem : One class is handling database + email

//✅ Good Example
#include <iostream>
using namespace std;
class User

{
public:
    string name;
};

class UserRepository
{
public:
    void save(User user)
    {
        // save user
    }
};

class EmailService
{
public:
    void sendEmail(User user)
    {
        // send email
    }
};

//✔ Each class has one responsibility

//“SRP means one class should have only one reason to change.”







//O — Open / Closed Principle (OCP)

//👉 Open for extension, closed for modification

//❌ Bad Example
class Payment
{
public:
    void pay(string type)
    {
        if (type == "card")
        {
            // card payment
        }
        else if (type == "upi")
        {
            // upi payment
        }
    }
};

//❌ Problem : Every new payment → modify existing code

//✅ Good Example 

class Payment
{
public:
    virtual void pay() = 0;
};

class CardPayment : public Payment
{
public:
    void pay() override
    {
        // card payment
    }
};

class UpiPayment : public Payment
{
public:
    void pay() override
    {
        // upi payment
    }
};

//✔ Add new payment without changing old code

//“We extend behavior using inheritance, not by changing existing code.”







//L — Liskov Substitution Principle(LSP)

//👉 Child should behave like Parent

//❌ Bad Example 

class Bird
{
public:
    virtual void fly()
    {
        cout << "Bird flying";
    }
};

class Penguin : public Bird
{
public:
    void fly()
    {
        throw runtime_error("Penguin can't fly");
    }
};

//❌ Problem : Penguin breaks parent behavior

//✅ Good Example 

class Bird
{
public:
    virtual void move()
    {
        cout << "Bird moving";
    }
};

class Sparrow : public Bird
{
public:
    void move() override
    {
        cout << "Flying";
    }
};

class Penguin : public Bird
{
public:
    void move() override
    {
        cout << "Walking";
    }
};

//✔ Child replaces parent safely

//“If a child class breaks parent behavior, LSP is violated.”







//I — Interface Segregation Principle(ISP)

//👉 Don’t force classes to implement unused methods

//❌ Bad Example 

class Worker
{
public:
    virtual void work() = 0;
    virtual void eat() = 0;
};

class Robot : public Worker
{
public:
    void work() override {}
    void eat() override {} // ❌ Robot doesn’t eat
};

//✅ Good Example 

class Workable
{
public:
    virtual void work() = 0;
};

class Eatable
{
public:
    virtual void eat() = 0;
};

class Human : public Workable, public Eatable
{
public:
    void work() override {}
    void eat() override {}
};

class Robot : public Workable
{
public:
    void work() override {}
};

//✔ Classes only implement what they need
//“Small, specific interfaces are better than large ones.”






// D — Dependency Inversion  Principle(DIP)

//👉 Depend on abstraction,not concrete classes

//❌ Bad Example 
class Keyboard
{
public:
    void type() {}
};

class Computer
{
    Keyboard keyboard;
};

//❌ Tight coupling

//✅ Good Example 
class InputDevice
{
public:
    virtual void input() = 0;
};

class Keyboard : public InputDevice
{
public:
    void input() override {}
};

class Computer
{
    InputDevice *device;

public:
    Computer(InputDevice *d) : device(d) {}
};

//✔ Flexible, testable, scalable
//“High - level modules should not depend on low - level modules.”

/*Overall, SOLID principles help us write cleaner, more maintainable code.

Summary :

SOLID is a set of 5 rules for writing clean code.

S — Single Responsibility: one class should do only one job.

O — Open/Closed: code should be open for extension but closed for modification.

L — Liskov Substitution: a child class should replace the parent
 without breaking the program.

I — Interface Segregation: don't force classes to depend on things they don't use.

D — Dependency Inversion: depend on abstractions, not concrete classes.

SOLID helps build scalable and maintainable systems.

*/