#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "*** NUMBER GUESSING GAME ***\n";

    do
    {
        std::cout << "Enter a guess between (1 - 100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "TOO HIGH!!\n";
        }
        else if (guess < num)
        {
            std::cout << "TOO LOW!!\n";
        }
        else
        {
            std::cout << "CORRECTT!! Number of tries: " << tries;
        }

    } while (guess != num);

    return 0;
}