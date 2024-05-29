#include<iostream>
#include <vector>
#include <string>
using namespace std;

void Sequences(string str , int index , string output , vector<string> & ans)
{
    // base case
    if(output.length() >0){
        ans.push_back(output);
        return ;
    }

    // exclude call
    Sequences(str, index+1, output , ans);\
    // include call
    char element = str[index];
    output.push_back(element);
    Sequences(str,index+1 , output, ans);
}


int main(){
    string str =  "abc";
    vector<string> ans;

    string output;
    int index = 0;
    Sequences(str , index , output ,ans );
    
    return 0;
}