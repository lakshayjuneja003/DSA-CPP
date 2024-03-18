#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;

    int first = 0, second = 1 , nexxtterm;
    for ( int i = 0 ; i <=n ; i++ ){
        if(i <= 1){
            nexxtterm = i;
        }
        else{
        nexxtterm = first + second;
        first = second;
        second= nexxtterm;
        }
        cout << nexxtterm << " ";
    }
    return 0;
}