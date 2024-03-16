#include<iostream>
#include<math.h>
using namespace std;
void Binary(int a,int b){
     int ans = 0;
    for(int i=0;a!=0;i++){
        int bit = a&1;
        ans = (bit*pow(10,i) + ans);
        a = a>>1;}
        cout<<ans;
         int ans1 = 0;
    for(int i=0;b!=0;i++){
        int bit = b&1;
        ans1 = (bit*pow(10,i) + ans);
        b = b>>1;
 } 
         cout<<ans1;
   }  
int main(){
    int a,b;
    cout<<"Enter value of a and b";
    cin>>a>>b;
    Binary(a,b);
}