#include<iostream>
using namespace std;
int pivot(int arr[], int n){
        int s=0,e=n-1;
        for(int mid = s + (e-s)/2;s<e; mid = s + (e-s)/2){
            if(arr[mid]>=arr[0]){
                s = mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
}
int main(){
        int arr[5] = {8,10,17,1,3};
        cout<< "Pivot is "<< pivot(arr,5)<<endl;
}