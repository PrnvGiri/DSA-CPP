#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};node *temp, *nn, *head = nullptr;

void push(int x){
    nn = new node;
    nn->data=x;
    if(head==nullptr){
        nn->next= nullptr;
        head = nn;
    }
    else{
        nn->next=head;
        head=nn; 
    }
}

void pop(){
    if(head==nullptr){
        cout<<"stack is empty"<<endl;
    }
    else{
        temp = head;
        cout<<temp->data<<" is popped out"<<endl;
        head=head->next;
        delete temp;
    }
}

void display(){
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

int main(){
    push(5);
    push(7);
    push(8);
    display();
    pop();
    cout<<"after pop stack"<<endl;
    display();
}
