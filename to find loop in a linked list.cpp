#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;

int findloop(){
node *fast,*slow;
if(head==NULL){
    cout<<"empty";
}
else{
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            return 1;
    }
    }
return 0;
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
insertend(10);
insertend(11);
display();
cout<<"\n";
int a=findloop();
if(a==1)
    cout<<"loop found";
else
    cout<<"loop not there";
return 0;
}
