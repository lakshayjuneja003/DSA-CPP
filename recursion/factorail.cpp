#include <iostream>
using namespace std;
// recursive function
int fact(int n){
    // base case
    if(n == 0)
        return 1;
    // recursive relation 
    return n * fact(n-1);
}
int main(){

    int n ;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;
}