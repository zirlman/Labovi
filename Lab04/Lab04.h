#include <stdio.h>
#include <stdlib.h>

#define TIP int

typedef struct node
{
	TIP info;
	struct node* left;
	struct node* right;
}NODE;

NODE* newNode(TIP);
void insertElement(NODE**, TIP);
void writePreorder(NODE*);
void writeInorder(NODE*);
void writePostorder(NODE *);
void printAll(NODE*);
int isBalanced(NODE*);

int height(NODE*);
int maximum(int, int);
void menu();