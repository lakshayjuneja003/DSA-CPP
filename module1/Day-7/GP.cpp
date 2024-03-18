#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int firstTerm, commonRatio, numOfTerms;
    
    cout << "Enter the first term: ";
    cin >> firstTerm;
    
    cout << "Enter the common ratio: ";
    cin >> commonRatio;
    
    cout << "Enter the number of terms: ";
    cin >> numOfTerms;
    
    cout << "Geometric progression up to " << numOfTerms << " terms: ";
    cout << firstTerm << " ";
    
    for(int i = 1; i < numOfTerms; i++) {
        cout << firstTerm * pow(commonRatio, i) << " ";
    }
    
    cout << endl;
    
    return 0;
}
