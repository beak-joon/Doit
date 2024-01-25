#include <stdio.h>
int main()
{
    int n,m,num[100001],input[100001][2],s[100001]={0,},a[100001]={0,};
    scanf("%d %d",&n,&m);
    for(int i=1; i<n+1; i++) scanf("%d",&num[i]);
    for(int i=0; i<m; i++) scanf("%d %d",&input[i][0], &input[i][1]);
    for(int j=1; j<n+1; j++) s[j] = s[j-1] + num[j];
    for(int i=0; i<m; i++) printf("%d\n",s[input[i][1]]-s[input[i][0]-1]);
}
