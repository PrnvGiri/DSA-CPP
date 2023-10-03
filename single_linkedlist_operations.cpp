#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}; struct node *start=nullptr, *nn,*temp,*loc;

void insert_beg(int v){
    nn=new node;
    nn->data=v;
    if(start==nullptr){
        nn->next=nullptr;
        start=nn;
    }
    else{
        nn->next=start;
        start=nn;
    }
}

void insert_end(int v){
    nn = new node;
    nn->data=v;
    nn->next=nullptr;
    if(start==nullptr){
        start=nn;
    }
    else{
        temp = start;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=nn;
    }
}

void insert_mid(int x, int v){
    nn = new node;
    nn->data=v;
    if(start==nullptr){
        start=nn;
    }
    else{
        temp=start;
        while(temp!=nullptr){
            if(temp->data==x){
            nn->next=temp->next;
            temp->next=nn;
        }
        temp=temp->next;
    }
    }
}

void delete_mid(int x){
    if(start==nullptr){
        cout<<"Empty linked list"<<endl;
    }
    else{
        temp = start;
        while(temp->next==nullptr){
            if(temp->data==x){
                temp->next=temp->next->next;
                loc = temp->next;
            temp->next= loc->next;
            delete loc;
            }
            temp=temp->next;
        }
    }
}

void delete_end(){
    if(start == nullptr){
        cout<<"There's is no element"<<endl;
    }
    else{
        temp=start;
       while(temp->next->next!=nullptr){
        temp=temp->next;
       }
       delete temp->next;
       temp->next=nullptr;
    }
}


void display(){
    temp=start;
    while(temp!=nullptr){
        cout<<"address of : "<<temp->data<<" is: "<<temp<<endl;
        cout<<"address of next node: "<<temp->next<<endl;
        temp=temp->next;
    }
}

int main(){

    insert_beg(10);
    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    insert_end(50);
    insert_mid(30,99);
    display();
}
