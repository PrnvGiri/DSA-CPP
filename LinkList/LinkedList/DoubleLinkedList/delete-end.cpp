#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next, *prev;
};
node *head=nullptr ,*temp,*n,*tail=nullptr;

void insert_end(int value){
    n = new node;
    n->data=value;
    n->prev= nullptr;
    n->next=nullptr;
    if(head==nullptr){
        head=n;
        tail=n;
    }
    else{
      tail->next=n;
      n->prev=tail;
      tail=n;
    }
}

void delete_end(){
    if(head==nullptr){
        cout<<"no element"<<endl;
    }
    else{
    temp=head;
    while(temp->next->next!=nullptr){
       temp= temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    temp = tail;
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
    insert_end(9);
    insert_end(6);
    insert_end(8);
    display();
    delete_end();
    display();
    return 0;
}
