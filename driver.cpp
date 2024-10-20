#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void printReverse(int arr[], int size) {
    if (size == 0) {
        return;
    } else {
        std::cout << arr[size - 1] << " ";
        printReverse(arr, size - 1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int arraySum(int arr[], int size) {
    if (size == 0) {
        return 0;
    } else {
        return arr[size - 1] + arraySum(arr, size - 1);
    }
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

void reverseString(std::string& str, int start, int end) {
    if (start >= end) {
        return;
    } else {
        std::swap(str[start], str[end]);
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Error: Please enter a non-negative integer." << std::endl;
        return 1;
    }

    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements in reverse order: ";
    printReverse(arr, arrSize);
    std::cout << std::endl;

    int fibNum = 7;
    std::cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << std::endl;

    std::cout << "Sum of array elements: " << arraySum(arr, arrSize) << std::endl;

    int base = 2;
    int exponent = 3;
    std::cout << base << " to the power of " << exponent << " is: " << power(base, exponent) << std::endl;

    std::string inputStr = "Recursion";
    std::cout << "Original string: " << inputStr << std::endl;
    reverseString(inputStr, 0, inputStr.length() - 1);
    std::cout << "Reversed string: " << inputStr << std::endl;

    return 0;
}