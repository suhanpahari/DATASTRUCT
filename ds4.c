#include<stdio.h>
#include<stdlib.h>
void insertbegin()
{
printf("Insert begin\n");
}
void insertend()
{
printf("Insert end\n");
}
void insertmiddle()
{
printf("Insert middle\n");
}
void deletebegin()
{
printf("Delete begin\n");
}
void deleteend()
{
printf("Delete end\n");
}
void deletemiddle()
{
printf("Delete middle\n");
}
void display()
{
printf("Display\n");
}
int main()
{
int choice=0;
while(choice<=7)
{
printf("\nChoose from the menu\n1. Insert at the beginning\n2. Insert at the end\n3. Insert at the middle\n");
printf("4. Delete from the beginning\n5. Delete from the end\n6. Delete from the middle\n7. Display\n8. Exit\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insertbegin();
break;
case 2:insertend();
break;
case 3:insertmiddle();
break;
case 4:deletebegin();
break;
case 5:deleteend();
break;
case 6:deletemiddle();
break;
case 7:display();
break;
case 8: break;
}
if(choice==8)
break;
}
}