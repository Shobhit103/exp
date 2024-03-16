#include<iostream>
using namespace std;
int Binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;                                  
   
    for(int mid = start + (end-start)/2; start<=end; mid = start + (end-start)/2){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
       
    }
    return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = Binary_search(even, 6, 12);
    cout<< "Index of 12 is "<< index << endl;
}