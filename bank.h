#ifndef bank_h
#define bank_h
#include<stdio.h>
#include<string.h>

typedef struct
{
    char sname[20];
    int age;
    char sport[10];
}student;

typedef student eletype;

typedef struct
{
    eletype data;
    struct node*lchild;
    struct node*rchild;
}node;

node* create_node(eletype);
int insert(node*,eletype);
int display(node*);
void printrange(node*, int, int);
#endif
