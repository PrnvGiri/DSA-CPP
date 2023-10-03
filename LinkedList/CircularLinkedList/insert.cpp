#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}; node *start=nullptr, *tail=nullptr,*nn,*temp;

void insert(int v){
    nn = new node;
    nn->data = v;
    if(start==nullptr){
        nn->next=nullptr;
        start = nn;
        tail = nn;
    }
    else{
        nn->next = start;
        tail->next = nn;
        start = nn;
    }
}
void display(){
    if(start==nullptr){
        cout<<"empty list"<<endl;
    }
    else{
        temp = start;
        do{
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        while(temp!=start);
    }
}

int main(){
    
}
