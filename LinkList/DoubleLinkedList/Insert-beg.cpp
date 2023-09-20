#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next, *prev;
};
node *head=nullptr ,*temp,*n,*tail=nullptr;

void insert_beg(int value){
    n = new node;
    n->data=value;
    n->prev= nullptr;
    n->next=nullptr;
    if(head==nullptr){
        head=n;
        tail=n;
    }
    else{
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void display(){
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    insert_beg(9);
    insert_beg(6);
    insert_beg(8);
    display();
    return 0;
}
