#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node *check(struct node *p,struct node *q)
{
  struct node *temp,*start=NULL,*r,*t;
  while(p!=NULL||q!=NULL)
  {
    if((p->data>q->data)&&start==NULL)
    {
      start=(struct node *)malloc(sizeof(struct node));
      start->data=p->data;
      temp=start;
      r=start;
    }
    else if((q->data>p->data)&&start==NULL)
    {
      start=(struct node *)malloc(sizeof(struct node));
      start->data=q->data;
      temp=start;
      r=start;
    }
    else if(p->data>q->data)
    {
      start=(struct node *)malloc(sizeof(struct node));
      start->data=p->data;
      temp->next=start;
      temp=start;
    }
    else
  {
    start=(struct node *)malloc(sizeof(struct node));
    start->data=q->data;
    temp->next=start;
    temp=start;
  }
  p=p->next;
  q=q->next;
  }
  temp->next=NULL;
  return r;
}
void display(struct node * p)
{
  while(p!=NULL)
  {
    printf("%d\n",p->data);
  p=p->next;
  }
}
int main()
{
struct node *p,*q,*r;
p=create();
q=create();
r=check(p,q);
display(r);
}
