#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next,*prev;
}; struct node *start=nullptr, *nn,*temp,*tail=nullptr;

void insert_beg(int v){
    nn = new node;
    nn->data=v;
    nn->prev=nullptr;
    if(start==nullptr){
        nn->next=nullptr;
        start=nn;
        tail=nn;
    }
    else{
        nn->next=start;
        start->prev=nn;
        start=nn;
    }
}


void display(){
    temp=start;
    while(temp!=nullptr){
        cout<<"address of : "<<temp->data<<" is: "<<temp<<endl;
        cout<<"address of prev node: "<<temp->prev<<endl;
        cout<<"address of next node: "<<temp->next<<endl;
        temp=temp->next;
    }
}

void insert_end(int v){
    nn = new node;
    nn->data=v;
    nn->next = nullptr;
    if(start==nullptr){
        start=nn;
        tail=nn;
    }
    else{
        tail->next = nn;
        nn->prev = tail;
        tail= nn;
    }
}

void delete_beg(){
    if(start==nullptr){
        cout<<"there is no list"<<endl;
    }
    else{
        temp = start;
        start = temp->next;
        temp->next->prev=nullptr;
        temp->next = nullptr;
        delete temp;  
    }
}

void insert_mid(int v, int x){
    nn = new node;
    nn->data = v;
    if(start==nullptr){
        start=nn;
        tail=nn;
    }
    else{
        temp=start;
        while(temp!=nullptr){
            if(temp->data==x){
                nn->next=temp->next;
                nn->prev=temp;
                temp->next->prev=nn;
                temp->next= nn;
                
            }
            temp=temp->next;
        }
    }
}

void delete_end(){
 if(start==nullptr){
        cout<<"there is no list"<<endl;
    }
    else{
        temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
    }
}

void delete_mid(int x){
    if(start==nullptr){
        cout<<"there is no list"<<endl;
    }
    else{
        temp=start;
        while(temp->next!=nullptr){
            if(temp->next->data==x){
               temp->next->next->prev = temp;
                node *loc = temp->next;
                temp->next = temp->next->next;
                delete loc;
            }
            temp = temp->next;
        }
    }
}
int main(){

    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    cout<<"list after insertion at beg"<<endl;
    display();
    insert_end(60);
    cout<<"Insert at the end of the list"<<endl;
    display();
    insert_mid(55,40);
    cout<<"insert in the middle of the node"<<endl;
    display();
    delete_beg();
    cout<<"delete beg"<<endl;
    display();
    delete_end();
    cout<<"delete end"<<endl;
    display();
    delete_mid(30);
    cout<<"delete particular node"<<endl;

    display();
}
