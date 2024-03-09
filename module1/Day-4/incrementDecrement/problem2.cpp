#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
     if(a-- >0 && ++b >2){
        cout << "inside if" << endl;
     }
     else {
        cout << "outside if" << endl;
     }
     return 0;
}