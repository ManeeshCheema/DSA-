#include<iostream>
using namespace std;

 struct node{
    int data;
     node* next=NULL;
};

void add(node **head){
    node *newnode;
    cout<<"Enter data: ";
    int val;
    cin>>val;
    newnode=new node;
    newnode->data=val;
    if(*head == NULL){
        *head=newnode;
    }
    else{
        node *temp=*head;
        while(temp->next != NULL) temp=temp->next;
        temp->next=newnode;
    }
}

void del( node **head){
    int val;
    cout<<"Enter val to delete: ";
    cin>>val;
    if((*head)->data == val){
        *head=(*head)->next;
        return;
    }
     node *current,*prev;
    prev=*head;
    current=(*head)->next;
    while(current != NULL){
        if(current->data == val){
            prev->next=current->next;
            cout<<"Deleted ";
        }
        prev=prev->next;
        current=current->next;
    }     
}

void display( node* head){
     node *temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

 node* rev1( node** head){
     node* p1,*p2,*p3;
    p1=*head;
    p2=(*head)->next;
    p3=NULL;
    while(p2 != NULL){ //revering bonds
        p1->next=p3;
        p3=p1;
        p1=p2;
        p2=p1->next;
    }
    p1->next=p3; //setting head
    return p1; //return new head

}

int main(){
     node* head=NULL;
    bool flag= true;
    while(flag){
    cout<<"ENTER CHOICE:\n1-ADD\t2-Delete\t3-Display\t4-end\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1: {
            add(&head);
            break;
            }
        case 2: {
            del(&head);
            break;
            }
        case 3: {
            display(head);
            break;
            }
        case 4:{
            flag= false;
            break;
            }
        default:{
            cout<<"WRONG CHOICE....TRY AGAIN";
        }
    }
    }
    head=rev1(&head);
    display(head);
    return 0;
}