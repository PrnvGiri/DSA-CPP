#include<iostream>
using namespace std;
#define size 100
int main(){
    int arr[size],n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Values are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int c = arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    cout<<endl<<"After sorting into ascending order"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

}
}
