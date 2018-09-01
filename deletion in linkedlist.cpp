#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;

void deletebeg(){
if(head==NULL){
    cout<<"list is empty";
}
else{
    node* ptr=head;
    head=head->next;
    free(ptr);
}
}
void deleteend(){
if(head==NULL)//no element
    cout<<"empty list";
else if(head->next==NULL){//if only 1 element present
    node* ptr=head;
    head=NULL;
    free(ptr);
}
else{
    node* ptr=head;
    node* prev;//creating a pointer to previous node, so that we can delete the last node
    while(ptr->next!=NULL){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
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
insertend(10);
insertend(12);
display();
cout<<"\n";
deletebeg();
deleteend();
display();
return 0;
}
