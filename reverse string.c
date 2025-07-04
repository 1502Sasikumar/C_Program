#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {           // node
	char data;
	struct node* next;
	struct node* prev;
};
struct node* head=NULL;
struct node* tail=NULL;
void push(char data) {    // push
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	if(head!=NULL) {
		head->prev=newnode;
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
	}
	else {
		head=newnode;
		tail=newnode;
		newnode->next=NULL;
		newnode->prev=NULL;
	}
}
char pop() {              // pop
	char data;
// 	if(head==NULL) return'\0';
	struct node*temp=head;
	data=head->data;
	head=head->next;
	if(head==NULL) {
		tail=NULL;
	}
	free(temp);
	return data;

}
char* reverseString(char *str) {
	char *strrev=(char *)malloc(strlen(str)+1);
	for(int i=0; str[i]!='\0'; i++)
		push(str[i]);
	for(int i=0; str[i]!='\0'; i++) {
		strrev[i]=pop();
	}
	return strrev;
}
int main()
{
	printf("Enter The sting to reverse:\n");
	char *str=(char*)malloc(sizeof(char)),c;
	int size=0;
	while(1) {
		scanf("%c",&c);
		if(c!='\n') {
			str[size]=c;
			str=realloc(str,strlen(str)+1);
			str[++size]='\0';
		}
		else break;
	}
	char* strrev=reverseString(str);
	printf("%s",strrev);
	return 0;
}