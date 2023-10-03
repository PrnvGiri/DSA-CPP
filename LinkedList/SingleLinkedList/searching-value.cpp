#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}; struct node *start=nullptr, *nn,*temp;

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

void search(int value){
    if(start==nullptr){
        cout<<"linked list is empty"<<endl;
    }
    else{
        temp = start;
        while(temp->next!=nullptr){
            if(temp->data == value){
                cout<<value<<" is stored at "<<temp<<" location"<<endl;
                return;
            }
            temp=temp->next;
        }
        cout<<"Not found"<<endl;
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

    cout<<"insert at beg"<<endl;
    insert_beg(10);
    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    insert_beg(50);
    display();
    search(30);

}
