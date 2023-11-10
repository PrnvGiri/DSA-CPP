#include<iostream>
using namespace std;
struct node{
    int data;
    node *left, *right;
};  node *nn;

node *insert(node *root, int value){
    if(root==nullptr){
        nn = new node;
        nn->data= value;
        nn->left= nullptr;
        nn->right = nullptr;
        return nn;
    }
    
    if(value<root->data){
        root->left= insert(root->left, value);
    }
    else if(value>root->data){
        root->right= insert(root->right, value);
    }
    return root;
}

void preorder(node *root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node *root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void search(node *root, int value){
    if(root==nullptr){
        cout<<value<<" is not there in BST"<<endl;
        return;
    }
    if (root->data == value) {
        cout << value << " found in the BST." << endl;
    }
    else if(value<root->data){
        search(root->left, value);
    }
    else if(value>root->data){
        search(root->right, value);
    }
}

int main(){
    node *root = nullptr;
    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 9);
    root = insert(root, 1);
    root = insert(root, 8);
    cout<<"Pre Order Traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Post Order Traversal"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"In Order Traversal"<<endl;
    inorder(root);
    cout<<endl;
    search(root, 1);
    search(root , 6);
  return 0;
}
