#include <iostream>
using namespace std;
#include <string>
// recursive function
void SayDigit(int n,string arr[]){

    // base case
    if(n == 0)
        return ;
    // processing part
    int digit = n%10;
    n/=10;
    // recursive call
    SayDigit(n,arr);

    cout << arr[digit] << endl;
    
}
int main(){
    string arr[] = {"zero" , "one", "two","three","four", "five","six","seven","eight","nine"};
    int n ;
    cin >> n;
    // fn call
    SayDigit(n,arr);
    
}