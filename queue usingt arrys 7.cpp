#include <stdio.h>
#define MAX 5

int queue[MAX];
int front= -1,rear= -1;

//insert element(enqueue)
void enqueue()
{
	int item;
	if(rear==MAX-1)
    {
     printf("queue overflow!\n");
     return;
    }
    printf("Enter element to insert:");
    scanf("%d",&item);
    
    if(front==-1)
       front=0;
    
    queue[++rear]=item;
    printf("Element inserted successfully.\n");
}
//delete element (Dequeue)
void dequeue()
{
	if (front==-1||front>rear)
	{
		printf("Queue underflow!\n");
		return;
	}
	
	printf("Deleted element:%d\n",queue[front++]);	
}
//Disply queue elements
void display()
{
	if(front==-1|| front>rear)
	{
	 printf("Queue is empty.\n");
	 return;
	 
	}
	printf("Queue elements:\n");
   for(int i=front;i<=rear;i++);
	 printf("%d",queue[1]);
	printf("\n");
 }
 
 int main()
 {
 	int choice;
 	
 	do
 	{
 		printf("\n---Queue menu---\n");
 		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
 		printf("Enter your choice:");
 		scanf("%d",&choice);
 		
 		switch(choice)
 		{
 			case 1:
 			 enqueue();
			  break;
			case 2:
			 dequeue();
			 break;
			case 3:
			 display();
			 break;
			case 4:
			 printf("Exiting progaram.\n");
			 break;
			defalut:
			 printf("invalid choice!\n");
		}
	 } while(choice!=4);
	 
		return 0;  	
	}
