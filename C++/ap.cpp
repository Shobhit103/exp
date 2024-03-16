#include<iostream>
using namespace std;
void ap(int a, int d,int n){
    for(int i=1;i<n;i++){
        a = a+d;
    }
    cout<<"Value of nth term is "<<a;
}
int main(){
    int a,d,n;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"Enter value of d "<<endl;
    cin>>d;
    cout<<"Enter value of n "<<endl;
    cin>>n;
    ap(a,d,n);
}