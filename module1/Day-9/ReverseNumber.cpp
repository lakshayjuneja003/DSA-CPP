#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int reversenum = 0 , remainder;

    while (n !=0){
        remainder = n%10;
        reversenum = reversenum*10 + remainder;
        n/=10;
    }
    cout << reversenum;
    return 0;
}