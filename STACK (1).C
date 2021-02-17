#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *Top=NULL;
void push()
{
struct node *ne=(struct node*)malloc(sizeof(struct node));
if(ne==NULL)
{
printf("out of memory");
return;
}
printf("\nEnter the element to push\n");
scanf("%d",&ne->data);
ne->link=Top;
Top=ne;
}
void pop()
{
struct node *ptr;
if(Top==NULL)
{
printf("stack is empty\n");
return;
}
printf("poped the element %d\n",Top->data);
ptr=Top;
Top=Top->link;
free(ptr);
}
void search()
{
struct node *ptr;
int x,pos=1;
if(Top==NULL)
{
printf("stack is empty\n");
return;
}
ptr=Top;
printf("enter the element to be searched\n");
scanf("%d",&x);
while(ptr!=NULL)
{
if(ptr->data==x)
{
printf("element is found at %d the position from top\n",pos);
break;
}
ptr=ptr->link;
pos++;
}
if(ptr==NULL)
printf("element is not found\n");
}
void display()
{
struct node *ptr=Top;
if(Top==NULL)
{
printf("stack is empty\n");
return;
}
ptr=Top;
printf("\nelements are:\n");
while(ptr!=NULL)
{
printf("%d  ",ptr->data);
ptr=ptr->link;
}
}
void main()
{
int ch=0;
clrscr();
while(ch!=5)
{
printf("\nMENU\n1.PUSH\n2.POP\n3.SEARCH\n4DISPLAY\n5.EXIT\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
     break;
case 2: pop();
     break;

 case 3: search();
     break;
  case 4: display();
       break;
   case 5:printf("GOODBYE");
   getch();
   }
   }
   }






