#include<bits/stdc++.h>
using namespace std;

struct node {
    string str;
    int num;
    double doub;
    char x;

    // Corrected constructor definition
    node(string str_, int num_, double doub_, char x_) {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main() {
    // Corrected instance creation using '=' instead of 'new'
    node raj = node("striver", 79, 91.0, 'A');
    // arr.fill(10) --> fills whole arr with 10
    // arr.at(index), begin()--> first,end()--> after last,rbegin()--> last,rend()--> before first, 
}