#include <iostream>

int main()
{

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predeccesor of C++?: ",
                               " 4. Is Earth Flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zukerburg"},
                                {"A. C", "B. C+", "C. C--", "D. D++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "____________________\n";
        std::cout << questions[i] << '\n';
        std::cout << "____________________\n";

        for (int j = 0; j < sizeof(options) / sizeof(options[0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "CORRECT\n";
            score++;
        }
        else
        {
            std::cout << "WRONG\n";
            std::cout << "Answer is: " << answerKey[i] << '\n';
        }
    }
    std::cout << "*******************\n";
    std::cout << "*      RESULT       *\n";
    std::cout << "*******************\n";
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "SCORE: " << (double)(score / size) * 100 << "%";

    return 0;
}