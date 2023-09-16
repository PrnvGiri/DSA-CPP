#include<iostream>
#define MAX 100
using namespace std;
int main(){
    int arr[MAX],n,loc;
 cout<<"Enter the no. of inputs"<<endl;
 cin>>n;
 cout<<"Enter the values"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int search;
 cout<<"Enter the value you want to Search"<<endl;
 cin>>search;
 for(int i = 0;i<n;i++){
    if(arr[i]==search){
      loc=i;
        cout<<"the position : "<<i<<endl;
    }
 }
 for(int i=loc;i<n;i++){
   arr[i]=arr[i+1];
 }
  for(int i = 0;i<n;i++){
        cout<<arr[i]<<"\ts";
    }

}
