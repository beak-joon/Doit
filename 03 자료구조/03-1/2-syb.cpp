#include <stdio.h>

int main()
{
    long double ave,b,max,num[10000]={},total=0;
    int a;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%Lf",&num[i]);
    }
    max = num[0];
    for(int i=0; i<a; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    for(int i=0; i<a; i++)
    {
        total += (long double)((num[i]/max)*100);
    }
    ave = (long double)(total / a);
    printf("%.14Lf",ave);
    return 0;
}
