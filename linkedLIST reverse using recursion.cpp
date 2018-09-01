#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;

void reversee(node *p){
    if(p->next==NULL){
        p=head;
    }
    reversee(p->next);
    node* q=p->next;
    q->next=p;
    p->next=NULL;
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
node *a=new node();
a=head;
reversee(a);
display();
return 0;
}
