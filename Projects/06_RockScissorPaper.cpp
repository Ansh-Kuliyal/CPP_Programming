#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void checkWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer Choice: ";
    showChoice(computer);

    checkWinner(player, computer);

    return 0;
}
char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        std::cout << "Choose One Of The Following\n";
        std::cout << "*************************\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissor\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissor\n";
        break;
    }
}
void checkWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Tie";
        }
        else if (computer == 'p')
        {
            std::cout << "You Lose";
        }
        else
        {
            std::cout << "You Win";
        }
        break;

    case 'p':
        if (computer == 'p')
        {
            std::cout << "Tie";
        }
        else if (computer == 's')
        {
            std::cout << "You Lose";
        }
        else
        {
            std::cout << "You Win";
        }
        break;

    case 's':
        if (computer == 's')
        {
            std::cout << "Tie";
        }
        else if (computer == 'r')
        {
            std::cout << "You Lose";
        }
        else
        {
            std::cout << "You Win";
        }
        break;
    }
}