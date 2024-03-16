#include<iostream>
using namespace std;
// continuous swaps for n-1 rounds
// Use case --> In each round ith element gets placed at right position
// TC --> O(n^2), SC --> O(1)
int main(){
     int arr[9] = {29,72,98,13,87,66,52,51,36};
    for(int i=1;i<9;i++){
        for(int j=0;j<9-i;j++){
              if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
              }
        }
       
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}