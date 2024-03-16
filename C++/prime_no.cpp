#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = 1;
    cout<<"Enter value of n"<<" ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a prime number"<< endl;
    }
    else{
        cout<<"It is a prime number"<< endl;
    }
}