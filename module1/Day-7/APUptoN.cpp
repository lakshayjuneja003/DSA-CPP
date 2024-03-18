#include <iostream>
using namespace std;

int main() {
    int firstTerm, commonDifference, numOfTerms;
    cout << "Enter first term: ";
    cin >> firstTerm;
    cout << "Enter common difference: ";
    cin >> commonDifference;
    cout << "Enter number of terms: ";
    cin >> numOfTerms;

    cout << "Arithmetic progression: ";
    cout << firstTerm << " ";
    for (int i = 1; i < numOfTerms; i++) {
        cout << firstTerm + (commonDifference * i) << " ";
    }
    cout << endl;

    return 0;
}
