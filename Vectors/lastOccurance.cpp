#include <iostream>
#include <vector>

using namespace std;
int lastOccurance(vector<int> v , int x ){
    int occurance = -1;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == x){
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
}
int main() {

    vector <int> x(6);
    for(int i = 0; i<x.size(); i++){
        cin >> x[i];
    }
    cout << "Enter a : " ;
    int a;
    cin >> a;
    lastOccurance(x,a);
    return 0;
}