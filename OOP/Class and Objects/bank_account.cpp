#include <iostream>

using namespace std;

class BankAccount
{
public:
    string name;
    int total;

    BankAccount(string name, int total) : name(name), total(total) {};

    int deposit(int amount)
    {
        total += amount;
        return amount;
    };

    int withdraw(int amount)
    {
        if (amount > total)
        {
            cout << "Insufficient Balance";
            return 0;
        }
        else
        {

            total -= amount;
        }
        return amount;
    }
};

int main()
{
    BankAccount bankAccountOne("Jane", 7000);
    BankAccount bankAccountTwo("John", 9000);

    cout << bankAccountOne.name << " has  " << bankAccountOne.total << " amount in total " << endl;
    cout << bankAccountOne.name << " deposited  " << bankAccountOne.deposit(3000) << " total " << endl;
    cout << bankAccountOne.name << " now has  " << bankAccountOne.total << " amount in total " << endl;
    cout << bankAccountOne.name << " withdrew " << bankAccountOne.withdraw(5000) << " amount " << endl;
    cout << bankAccountOne.name << " has " << bankAccountOne.total << " left " << endl;

    cout << bankAccountTwo.name << " has  " << bankAccountTwo.total << " amount in total " << endl;
    cout << bankAccountTwo.name << " deposited " << bankAccountTwo.deposit(8000) << " total " << endl;
    cout << bankAccountTwo.name << " now has  " << bankAccountTwo.total << " amount in total " << endl;
    cout << bankAccountTwo.name << " withdrew " << bankAccountTwo.withdraw(9000) << " amount " << endl;
    cout << bankAccountTwo.name << " has " << bankAccountTwo.total << " left " << endl;

    return 0;
};