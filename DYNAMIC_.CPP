#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
  int data,pn;
  struct node *next;
}
struct node * f = NULL;

//Insert Function
void insert(int data, int pn){
   struct node *temp, *p;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->pn = pn;
   temp->next = NULL;
   if(f==NULL || pn<f->pn){
      temp->next = f;
      f =temp;
   }
   else{
     p = f;
     while(p->next != NULL && p->next->pn <= pn){
       p = p->next;
     }
     temp->next = p->next;
     p->next = temp;
   }
}

//Display function
void display(){
  struct node *temp = f;
  if(f==NULL){
    printf("\nQueue is Empty!\n");
  }
  while(temp!=NULL){
    printf("\nPriority : %d , Data : %d\n",temp->pn,temp->data);
    temp = temp->next;
  }
}

//Main Function
int main(){
  clrscr();
  int a ,data , pn;
  while(1){
    printf("\nPress 1 to Display : ");
    printf("\nPress 2 to Insert : ");
    printf("\nPress 3 to exit : ");
    printf("\nEnter your choice : ");
    scanf("%d",&a);
    switch(a){
      case 1 : display();
	       break;
      case 2 : printf("\nEnter the data : ");
	       scanf("%d",&data);
	       printf("\nEnter the priority : ");
	       scanf("%d",&pn);
	       insert(data,pn);
	       break;
      case 3 : exit(0);
      default : printf("\nInvalid choice\n");
    }
  }

  return 0;
}







