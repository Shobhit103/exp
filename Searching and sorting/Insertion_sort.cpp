#include<iostream>
using namespace std;
// Inserting each element at right place after comparing it with others, first element is to be considered sorted
// 
int main(){
    int arr[9] = {29,72,98,13,87,66,52,51,36};
     for(int i=1;i<9;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]= temp;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}