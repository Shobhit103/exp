#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,sum=0;
    cout<<"enter value of n";
    cin>>n;
    cout<<"Enter the values of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
      cout<<sum;
}