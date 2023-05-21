#include <iostream>

void interchangeValues(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Before interchange: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    interchangeValues(num1, num2);

    std::cout << "After interchange: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

