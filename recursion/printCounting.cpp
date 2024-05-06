#include <iostream>
using namespace std;
// recursive function
void print(int n){
    // base case
    if(n == 0)
        return ;

    // this type of funs are called as head recursive fns
    cout << n << "/n" ;
     // recursive relation 
    print(n-1);
}
int main(){

    int n ;
    cin >> n;

    print(n);
    
}