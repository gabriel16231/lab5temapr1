#include "header.h"

int main()
{
    int n,x;
    scanf("%d",&n);

    Node *top=(Node*)malloc(sizeof(Node));
    top=NULL;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        add_elem(&top,x);
    }
    int ant=extract_val(&top);
    int l_now=1,l_max=-1;
    while(top!=NULL)
    {
        int a=extract_val(&top);
        if(ant-1==a)
            l_now++;
        else
        {
            if(l_max<l_now)
            l_max=l_now;
            l_now=1;
        }
        ant=a;

    }
    if(l_max<l_now)
            l_max=l_now;
    printf("%d",l_max);
    return 0;
}
