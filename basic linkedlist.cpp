#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;
int main(){
    node* ptr= new node();
    ptr->data=5;
    ptr->next=NULL;
    head=ptr;
    delete ptr;
    cout<<"data in 1st created node is "<<head->data<<"\n";
    cout<<"next value address in 1st created node is "<<head->next<<"\n";
    cout<<"ptr values after its deleted "<<ptr->data<<"\n"<<"next value of ptr aftr deletion"<<ptr->next;
    //it frees the memory but still keeps record of the previous values
    return 0;

}
