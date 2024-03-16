#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
   // cout<< arr.size() << endl;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    arr.pop_back();
    cout<< arr.size();
    // vec.clear() --> clears out whole vector
    // vector<int> vec(4,0) --> {0,0,0,0}
    // vector<int> vec1(vec) --> copies vector
    // arr.emplace_back() takes less time than push_back()
    // 2D vector --> vector<vector<int>> vec; it stores vectors
    // vec.push_back(arr), vec.push_back(vec1)
    // for(auto it: vec){
         // for(auto it: vec){
            // cout<< it <<" ";
         //}
         // cout<<endl;
    //} --> printing a 2d vector
    // vector<vector<int>> vec(10,vector<int> (20,0));
    // vector<int> arr[4]; --> an array of 4 dynamic vectors
}