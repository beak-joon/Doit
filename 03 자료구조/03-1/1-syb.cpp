#include <stdio.h>

int main()
{
    int a,b,total=0;
    int num[101] = {};
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%1d",&num[i]);
    }
    for(int i=0; i<a; i++)
    {
        total += num[i]; 
    }
    printf("%d",total);
    return 0;
}
