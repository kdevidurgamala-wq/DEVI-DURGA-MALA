#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*head=0,*temp=0,*prevnode;
void create()
{  struct node*newnode=0;
  int n,i;
printf("enter n and i valu");
scanf("%d %d",&n,&i);
for(i=0;i<n;i++)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter node%d data:",i+1);
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
	}
	}	
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
int main()
{    
  create();
  display();
  int i,pos;
  printf("\n enter positin:");
  scanf("%d",&pos);
	temp=head;
	if(head=NULL)
	{
		printf("list is empty");
	}
	else if(pos==1)
		{
		  head=head->link;	
		  free(head);
		}
		else
		{
			for(i=1;i<pos-1;i++)
			{
				temp=temp->link;
			}
		}
			prevnode=temp->link;
			temp->link=prevnode->link;
			prevnode->link=0;
			free(prevnode);
			printf("\n after deleting:");
			display();
			return 0;
		}
	

