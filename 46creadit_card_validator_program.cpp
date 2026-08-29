// LUHN ALGORITHM 

// 1. DOUBLE EVERY SECOND DIGIT FROM RIGHT TO LEFT IF DOUBLED NUMBER IS 2 DIGITS, SPLIT THEM.
// 2. ADD ALL SINGLE DIGITS FROM STEP 1.
// 3. ADD ALL ODD NUMBERED DIGITS FROM RIGHT TO LEFT
// 4. SUM RESULTS FROM STEP 2 & 3
// 5. IF STEP 4 IS DIVIDED BY 10, #IS VALID

#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid!";
    } else {
        std::cout << cardNumber << " is not valid!";
    }

    return 0;
}

// If number is two digits, return sum of digits
int getDigit(const int number){
    if(number < 10){
        return number;
    }
    return number / 10 + number % 10;
}

// Sum of digits in odd places (from right)
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

// Sum of doubled digits in even places (from right)
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        int digit = (cardNumber[i] - '0') * 2;
        sum += getDigit(digit);
    }
    return sum;
}
