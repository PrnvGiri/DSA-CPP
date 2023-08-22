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
// delete element
nt delpos;
cout<<"Enter the position you want to delete"<<endl;
cin>>delpos;
for(int i=delpos; i<n;i++){
    arr[i]= arr[i+1];
}
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
