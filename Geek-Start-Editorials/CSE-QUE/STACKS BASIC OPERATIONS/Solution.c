#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;string.h&gt;
#include&lt;math.h&gt;
#define SIZE 100
struct stack
{
    int data[SIZE];
    int top;
};
void push(struct stack *sptr, int num);
void pop(struct stack *sptr);
void display(struct stack *sptr);
void peek(struct stack *sptr);
int main()
{
    struct stack * sptr;
    struct stack s;
    sptr=&amp;s;
    sptr-&gt;top=-1;
    int num,ch;
    while(1)
    {
        scanf("%d",&amp;ch);
        switch(ch)
        {
            case 1:
            scanf("%d",&amp;num);
            push(sptr,num);
            break;
            case 2:pop(sptr);
            break;
            case 3:peek(sptr);
            printf("\n");
            break;
            case -1:exit(0);
            break;
            default:printf("Enter valid choice\n");
            break;
        }
    }
    return 0;
}
void push(struct stack *sptr, int num)
{
    if(sptr-&gt;top==SIZE-1)
    {
        printf("stack Overflow\n");
    }
    else
    {
        sptr-&gt;top++;
        sptr-&gt;data[sptr-&gt;top]=num;
    }
}
void pop(struct stack *sptr)
{
    int num;
    if(sptr-&gt;top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        num=sptr-&gt;data[sptr-&gt;top];
        sptr-&gt;top--;
        printf("%d \n",num);
    }
}
void peek(struct stack *sptr)
{
    if(sptr-&gt;top==-1)
    {
        printf("Stack empty\n");
    }
    else
    {
        printf("%d",sptr-&gt;data[sptr-&gt;top]);
    }
}
