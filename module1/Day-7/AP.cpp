#include <iostream>
using namespace std;

int main() {
    int lastTerm, lastSecondTerm, commonDifference;
    
    cout << "Enter the last term: ";
    cin >> lastTerm;
    
    cout << "Enter the last second term: ";
    cin >> lastSecondTerm;
    
    commonDifference = lastTerm - lastSecondTerm;

    cout << "Geometric progression up to positive N numbers: ";
    cout << lastSecondTerm << " " << lastTerm << " ";
    
    int nextTerm = lastTerm;
    int limit = 100; // Setting a limit to avoid an infinite loop
    
    while (nextTerm > 0 && limit > 0) {
        nextTerm = lastTerm * commonDifference / lastSecondTerm;
        if (nextTerm <= 0) break;
        cout << nextTerm << " ";
        lastSecondTerm = lastTerm;
        lastTerm = nextTerm;
        limit--; // Decrease the limit counter
    }
    
    cout << endl;
    
    return 0;
}
