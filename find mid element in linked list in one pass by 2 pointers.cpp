#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;

void mid(){
node* fast=head;
node* slow=head;
if(head==NULL)
    cout<<"list is empty";
else{
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"mid element is"<<slow->data;
    }
}

void insertbeg(int d){
node* ptr=new node();
ptr->data=d;
ptr->next=head;
head=ptr;
}
void insertend(int d){
node* ptr=new node();
ptr->data=d;
ptr->next=NULL;
if(head==NULL)
    head=ptr;
else{
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=ptr;
}
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
insertbeg(8);
insertbeg(7);
insertend(9);
display();
mid();
return 0;
}
