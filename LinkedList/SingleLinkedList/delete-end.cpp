#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
node *head=nullptr ,*temp,*n;

void insert_end(int value){
    n = new node;
    n->data=value;
    n->next = nullptr;
    if(head==nullptr){
        head=n;
    }
    else{
        temp=head;
        while(temp->next !=nullptr){
            temp=temp->next;
        }
        temp->next=n;
    }
}

void delete_end(){
    if(head == nullptr){
        cout<<"There's is no element"<<endl;
    }
    else{
        temp=head;
       while(temp->next->next!=nullptr){
        temp=temp->next;
       }
       delete temp->next;
       temp->next=nullptr;
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
    delete_end();
    display();
    return 0;
}
