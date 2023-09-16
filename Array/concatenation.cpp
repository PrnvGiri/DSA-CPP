#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5}, arr2[5]={6,7,8,9,10},arr3[10],x=5;
    for(int i=0;i<10;i++){
        arr3[i]=arr[i];
        arr3[x]=arr2[i];
        x++;
        if(x>9){
            break;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<"\t";
    }
    
}
