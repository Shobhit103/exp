#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter char ch"<<" ";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"this is lowercase"<<endl;
    }
    else if(ch>=65 && ch<=90){
        cout<<"this is uppercase"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"this is numeric"<<endl;
    }
    /*int ascii = ch;*/
    // sum of even numbers
    int n;
    int i=0;
    cout<<"enter n"<<endl;
    cin>>n;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum = sum+i;
        }
        i++;
    }
    cout<<sum;
}