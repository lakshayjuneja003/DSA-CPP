#include <iostream>
#include <vector>


using namespace std;

int main() {

    vector <int> x(6);
    for(int i = 0; i<x.size(); i++){
        cin >> x[i];
    }
    cout << "Enter a : " ;
    int a;
    cin >> a;
    int occurance = -1;
    for(int i = 0; i<x.size(); i++){
        if(x[i] == a){
            occurance = i;
        }
        occurance = -1;
    }
    if(occurance != -1){
        cout << "The last occuarnce of the elemnt at index : " << occurance << endl;
    }
    else{
        cout << "The element is not present in the array" << endl;
    }
    return 0;
}