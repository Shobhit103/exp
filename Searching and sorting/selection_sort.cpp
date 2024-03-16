#include<iostream>
using namespace std;
int main(){
    int arr[9] = {29,72,98,13,87,66,52,51,36};
    for(int i=0;i<9;i++){
        int minIndex = i;
        for(int j=i+1;j<9;j++){
              if(arr[j]<arr[minIndex]){
                minIndex = j;
              }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    // we select smallest element for each iteration from remaining array, then swap it.
    // Best case = Worst case = O(n^2)
    // use case = when array size is small
}