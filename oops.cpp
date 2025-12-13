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


