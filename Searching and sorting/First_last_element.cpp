#include<iostream>
using namespace std;
int FirstOcc(int arr[], int n, int k){
    int s=0,e=n-1;
    int ans = -1;
    for(int mid = s+(e-s)/2;s<=e;mid = s+(e-s)/2){
        if(arr[mid] == k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
    }
    return ans;
}
int LastOcc(int arr[], int n, int k){
    int s=0,e=n-1;
    int ans = -1;
    for(int mid = s+(e-s)/2;s<=e;mid = s+(e-s)/2){
        if(arr[mid] == k){
            ans = mid;
            s = mid+1;
        }
       else if(arr[mid]<k){
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
    }
    return ans;
}
int main(){
     int arr[8]={0,0,1,1,2,2,2,2};
     int first = FirstOcc(arr,8,2);
     int last = LastOcc(arr,8,2);
     cout<< first <<endl;
     cout<< last <<endl;
     int total = (last - first) + 1;
     cout<< total; 
     // if arr = {1,2,3,3,3,3,3,3,3,3,4} then total occ = {last-first} + 1
}