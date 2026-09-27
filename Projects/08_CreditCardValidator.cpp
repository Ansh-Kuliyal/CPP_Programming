#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    // To create this program we need: **Luhn Algorithm**
    // 1. Double every second digit from right to left If doubled number is 2 digits,split them
    // 2. Add all single digits from step 1
    // 3. Add all odd numbered digits from roght to left
    // 4. Sum results from steps 2 & 3
    // 5. If step 4 is divisible bt 10, # is valid

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << "Card Number is Valid";
    }
    else
    {
        std::cout << "Card Number is not Valid";
    }

    return 0;
}
int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}