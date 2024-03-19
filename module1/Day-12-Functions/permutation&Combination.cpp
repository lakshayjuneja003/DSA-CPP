#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

float combination(int n, int k) {
    int nk = n - k;
    float numerator = factorial(n);
    float denominator = factorial(k) * factorial(nk);
    return numerator / denominator;
}

float permutation(int n, int k) {
    int nk = n - k;
    float numerator = factorial(n);
    float denominator = factorial(nk);
    return numerator / denominator;
}

int main() {
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;

    float combinationResult = combination(n, k);
    float permutationResult = permutation(n, k);

    cout << "Combination of given numbers is : " << combinationResult << endl;
    cout << "Permutation of given numbers is : " << permutationResult << endl;

    return 0;
}
