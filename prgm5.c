#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
};
void main(){
struct node *insert(struct node*,int);
struct node *delete(struct node*,int);
struct node *search(struct node*,int);
void display(struct node*);
struct node *start(struct node*)0;
int item,opt;
while(1){
printf("\n1.insert \n2.delete\n 3.search\n 4.display\n 5.exit\n");
printf("enter your choice: ");
scanf("%d",&opt);
switch(opt){
case 1:
printf("item to insert: ");
scanf("%d",&item);
start=insert(start,item);
break;
case 2:
printf("item to delete: ");
scanf("%d",&item);
start=delete(start,item);
break;
case 3:
printf("item to search: ");
scanf("%d",&item);
if(search(start,item)==(struct node*)0)
printf("item not found");
else
printf("item found");
break;
case 4:
display(start);
break;
case 5:
exit(0);
}
}
}
struct node *insert(struct node *s,int data){
struct node *t;
t=(struct node *)malloc(sizeof(struct node));
t->data=data;
