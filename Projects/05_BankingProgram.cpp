#include <iostream>

void checkBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    int choice = 0;
    double balance = 0;
    do
    {

        std::cout << "\n1.Check Balance" << '\n';
        std::cout << "2.Deposit Money" << '\n';
        std::cout << "3.Withdraw Money" << '\n';
        std::cout << "4.Exit" << '\n';

        std::cout << "\nEnter Your Choice: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            checkBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            checkBalance(balance);
            break;
        case 4:
            std::cout << "Thankyou for using our bank";
            break;
        default:
            std::cout << "Invalid choice"<<'\n';
            break;
        }
    } while (choice != 4);

    return 0;
}
void checkBalance(double balance)
{
    std::cout << "Your Balance is: $" << balance << '\n';
}
double deposit()
{
    double amount = 0;

    std::cout << "Enter The Amount To Deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Thats Not a Valid Amount";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter The Amount To Withdraw: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient Balance";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's Not a Valid Amount";
        return 0;
    }

    return amount;
}
