#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
    //comment
};
node* head = NULL;
node* GetNode(int x){
    node* newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertHead(int value){
    node* newNode = GetNode(value);
    if(head==NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void print(){
    node*temp = head;
    while(temp!=NULL){
        cout<< temp->data<< " ";
        temp = temp->prev;
    }
}

int main(){
    insertHead(2);
    insertHead(3);
    print();
return 0;
}
