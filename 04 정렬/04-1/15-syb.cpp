#include <stdio.h>
int main()
{
    int num[1001]={0,}, dnum[1001]={0,},a,b=0;
    scanf("%d",&a);
    for(int i=0; i<a; i++){
        scanf("%d",&b);
        if(b>=0){num[b] += 1;}
        else{
        	b *= -1;
        	dnum[b] += 1;
        }
    }
    for(int i=1000; i>0; i--) if(dnum[i]!=0) printf("-%d\n",i);
    for(int i=0; i<1001; i++) if(num[i]!=0) printf("%d\n",i);
}
