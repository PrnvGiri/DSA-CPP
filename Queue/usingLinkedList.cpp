#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};node *temp, *nn, *start=nullptr;

void enqueue(int n){
    nn=new node;
    nn->data=n;
    nn->next=nullptr;
    if(start==nullptr){
        start=nn;
    }
    else{
        temp=start;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=nn;
    }
}

void dequeue(){
    if(start==nullptr){
        cout<<"Queue is empty already"<<endl;
    }
    else{
        temp=start;
        start=start->next;
        delete temp;
    }
}

void display(){
    temp = start;
    while(temp!=nullptr){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    enqueue(4);
    enqueue(2);
    display();
    dequeue();
    display();
}
