#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int s , int e, int key){
    if(s>e){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] < key){
       return BinarySearch(arr,mid+1,e , key);
    }
    else{
        return BinarySearch(arr,s, mid+1, key);
    }
}
int main(){
    int arr[6] = {12,13,14,17,18,20};
    
    int key = 17;

    BinarySearch(arr,0,6,key);
}