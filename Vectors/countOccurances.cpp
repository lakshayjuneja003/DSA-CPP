#include <iostream>
#include <vector>

using namespace std;
void countOccurance(vector<int> v , int x ){
    int occurances =0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == x){
            occurances++;
        }
        occurances = -1;
    }
    cout << "The total no of occurances of given no in the vector are " << occurances << endl;
    
}
int main() {

    vector <int> x(6);
    for(int i = 0; i<x.size(); i++){
        cin >> x[i];
    }
    cout << "Enter a : " ;
    int a;
    cin >> a;
    countOccurance(x,a);
    return 0;
}