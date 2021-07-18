#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void push(node **head){
    int val;
    cin>>val;
    node *newnode= new node(val);
    if(*head == NULL){
        *head= newnode;
    }
    else{
        newnode->next= *head;
        *head=newnode;

    }
}
int pop(node **head){
    if(*head == NULL) {
        cout<<"Stack is empty\n";
    }
    int val= (*head)->data;
    *head=(*head)->next;
    return val;
}
void display(node *head){
    if(head == NULL) cout<<"Stack is empty\n";
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=NULL;

    return 0;
}