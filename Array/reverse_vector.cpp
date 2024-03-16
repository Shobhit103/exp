#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> vec ){
    for(int s=0, e=vec.size()-1;s<=e;s++,e--){
        swap(vec[s],vec[e]);
    }
    return vec;
}
int main(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<int> ans = reverse(v);
    for(auto it: ans){
        cout<< it <<" ";
    }
}