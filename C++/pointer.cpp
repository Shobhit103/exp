#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *p = &num;
    cout << (*p + 1) << endl;
    cout << *p;
    // arr[i] = *(arr+i), i[arr] = *(i+arr)
    // in a char array cout will print whole string in a pointer and first address and it will not stop until it finds Null char.
}