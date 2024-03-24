#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "enter a digit ";
    cin >> n;
    int ans = 0;
    while (n>0){
        int digit = n %10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            ans = 0;
        }
        ans = (ans *10) + digit;
        n /= 10;
    }
    cout<<"Reverse of the number is : " <<  ans ;
    return 0;
}