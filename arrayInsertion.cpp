#include<iostream>
using namespace std;
#define SIZE 100
int main()
{
 int arr[SIZE],n;
 cout<<"Enter the no. of inputs"<<endl;
 cin>>n;
 cout<<"Enter the values"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }   
//    Triverse Array
    for(int i=0; i<n;i++){
     cout<<arr[i]<<"\t";
  }
 // Insertion Array
 int pos,ele;
 cout<<"Enter the position"<<endl;
 cin>>pos;
 cout<<"Enter The value"<<endl;
 cin>>ele;
 for(int i= n; i>pos;i--){
    arr[i]=arr[i-1];
 }
 arr[pos] = ele;
 for(int i=0;i<=n;i++){
    cout<<arr[i]<<"\t";
 }
