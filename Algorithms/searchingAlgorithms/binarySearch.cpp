#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,4,9,6,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            cout<<"element found at "<<mid;
            return 0;
        }
        else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
    }
    cout<<"Element not found"<<endl;
    return 0;
}
