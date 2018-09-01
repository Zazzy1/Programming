void deleteNode(Node *ptr)
{
   //creating temporary pointer
	Node *temp; 
   //Pointing temp to link part of current node	i.e. next node
	temp=ptr->link;
   //copy data and link part of next node to current node
	ptr->data=temp->data;
   //point current node to link part of next node
	ptr->link=temp->link;
   //Delete current node
	free(temp);

}

