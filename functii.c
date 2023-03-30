#include "header.h"

void add_elem(Node **top,int val)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->val=val;
    new_node->prev=(*top);
    (*top)=new_node;
}

int extract_val(Node **top)
{
    Node *aux=*top;
    int val=(*top)->val;
    *top=(*top)->prev;
    free(aux);
    return val;
}
