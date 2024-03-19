#include <iostream>
using  namespace std;
int square(int digit){
    return  digit * digit;
}
int main(){
    int n;
    cout << "Enter a digit" << endl;
    cin >> n;

    int digits = 0;
    while(n>0){
        int digit = n%10;
        if (digit) digits++;
        n /= 10;
    }
    cout << digits << endl;
    int result = square(digits);
    cout << "The square of the count of digit is : " <<  result << endl;
    return 0;
}