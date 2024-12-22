//i will submit with comment later if it accept or i fail to solve this
#include <iostream>
using namespace std;
struct Stack
{
    int data;
    Stack *next;
};
Stack *Top = NULL;
int mx = -1;
void push(int x)
{
    Stack *newnode = new Stack;
    newnode->data = x;
    newnode->next = Top;
    Top = newnode;
    return;
}
void pop()
{
    Stack* dlt = Top;
    if (Top == NULL)
        return;
    if(Top->data == mx)
    {
        mx = -1;
    }
    Top = Top->next;
    delete dlt;
    return;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    while (1)
    {
        int t,flag = 1;
        scanf("%d",&t);
        if(t == 0) return 0;
        while (t--)
        {
            int x;
            scanf("%d",&x);
            if (Top == NULL)
            {
                push(x);
                mx = x;
            }
            else if (x > Top->data)
            {
                pop();
                push(x);
                if(mx < x)
                {
                    flag = 0;
                }
            }
            else
            {
                push(x);
                if(mx < x)
                {
                    flag = 0;
                }
            }
        }
        if (flag)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}