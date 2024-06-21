#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    // push operations
    s.push(4);
    s.push(2);
    
    // s.push(6);
    // pop opertion
    // s.pop();
    // check if stack is empty
    cout<<"empty : " <<  s.empty() << endl;
    // priniting top element
    cout<< s.top() << endl;
    cout << s.size()<< endl;
}