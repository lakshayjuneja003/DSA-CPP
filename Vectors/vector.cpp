#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    // for getting size 
    cout << "Size of vector v : " << v.size(); 
    // this will return the size of array if 2 ///elemnts are present it will return two 
    
    v.push_back(10); // inserting some elements
    v.push_back(20); // inserting some elements

    // printing the values using loops
    for(int i = 0; i<v.size(); i++ ){
        cout << v[i] << endl;
    }
    return 0;
    
    cout << "Capacity of vector v : " << v.capacity(); // this will return the capacity of the vector

    v.resize(5); // this will resize the vector 
    cout << "Size of vector v : " << v.size();
    cout << "Capacity of vector v : " << v.capacity();

    v.pop_back();// it will remove the last element from the vector
    cout << "Size of vector v : " << v.size();

    v.clear(); // it will clear the vector
    cout << "Size of vector v : " << v.size();

}