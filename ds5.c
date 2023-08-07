#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*new,*last,*temp,*ptr;
int count;
void insertend()
{
int choice=1;
while(choice==1)
{
new=(struct node *)malloc(sizeof(struct node));
if(new==NULL)
{
printf("DMA successfull\n");
printf("Enter the data in the new node:");
scanf("%d",&new->data);
if(last==NULL)
{
last=new;
last->next=new;
count++;
}
else
{
new->next=last;
last->next=new;
last=new;
count++;
}
}
printf("Do you want to enter another node in the end (1)Yes and (2)No:");
scanf("%d",&choice);
}
}
void display()
{
int i;
if(last==NULL)
{
printf("\nLL is empty\n");
}
else
{
for(ptr=last->next,i=0;i<count;ptr=ptr->next,i++)
printf("\n%d",ptr->data);
}
}
int main()
{
insertend();
display();
return 0;
}