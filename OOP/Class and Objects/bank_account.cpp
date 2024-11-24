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

    cout << " Name : " << bankAccountOne.name << endl;
    cout << " Current Total : " << "Rs " << bankAccountOne.total << endl;
    cout << "Deposited amount : " << "Rs " << bankAccountOne.deposit(4000) << endl;
    cout << "New Total : " << "Rs" << bankAccountOne.total << endl;

    cout << " Name : " << bankAccountTwo.name << endl;
    cout << " Current Total : " << "Rs " << bankAccountTwo.total << endl;
    cout << "Deposited amount : " << "Rs " << bankAccountTwo.withdraw(9000) << endl;
    cout << "New Total : " << "Rs" << bankAccountTwo.total << endl;

    return 0;
};