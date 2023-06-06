#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct Element *head;

//display the list
void printList(){
	struct node *ptr = head;
	printf("\n[head] =>");
	while (ptr!=NULL){
		 printf(" %d =>", ptr->data);
		 ptr = ptr->next;
	}
	printf(" [null]\n");
	fflush(stdout);
}

//insert link at the first location
void insert(int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
}


int main(void) {
	   insert(10);
	   insert(20);
	   insert(30);
	   insert(1);
	   insert(40);
	   insert(56);
	   printList();
	   return 0;
}
