\\CREATE 3 NODES USING LINKEDLIST AND PRINT DATA AND THEIR ADDRESS
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *node1 = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = node1;
    node1 -> data = 20;
    node1 -> link = node2;
    node2 -> data = 30;
    node2 -> link = NULL;
    printf("DATA\tADDRESS\n%d\t%p\n%d\t%p\n%d\t%p", head -> data, head, node1 -> data, node1, node2 -> data, node2);
}
