//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
        void insertAtBottom(stack<int> &st , int x){
            if(st.empty()){
                st.push(x);
                return ;
            }
            
            int num = st.top();
            st.pop();
            insertAtBottom(st , x);
            st.push(num);
        }
        void solve(stack<int> &st){
            if(st.empty()){
                return ;
            }
            int num = st.top();
            st.pop();
            
            solve(st);
            
            insertAtBottom(st , num);
        }
public:
    void Reverse(stack<int> &St){
        solve(St);
        return ;
    }
};

//{ Driver Code Starts.


