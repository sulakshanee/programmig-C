#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main( )
{
	int i;
	struct node *newnode;
	struct node *temp;
	for(i=0;i<n;i++)
	{
		newnode = getnode();
		if(start == NULL)
		{
			start = newnode;
		}
		
		else
		{
			temp = start;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=newnode;
		}
	}
return 0;
}

