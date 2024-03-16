#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Decimal number n"<<" ";
    cin>>n;
    int ans = 0;
    for(int i=0;n!=0;i++){
        int bit = n&1;
        ans = (bit*pow(10,i) + ans);
        n = n>>1;
    }
    cout<<"Binary representation of n is "<< ans<<endl;
    // Binary to Decimal
    int m;
    cout<<"enter Binary number m"<<" ";
    cin>>m;
    int answer = 0;
    for(int i=0;m!=0;i++){
        int digit = m%10;
        if(digit == 1){
            answer = answer + pow(2,i);
        }
        m = m/10;
    }
    cout<<"Decimal representation of m is "<< answer;
}