#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w%2==0 && 2<w)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}