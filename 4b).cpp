#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int N;

    cout << "Enter a positive integer: ";
    cin >> N;

    int result = factorial(N);

    cout << "Factorial of " << N << " is " << result << endl;

    return 0;
}
