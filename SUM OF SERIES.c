#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0;

    
    printf ("enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum=sum+1.0/i;
}
printf("sum of series=%.2f",sum);

return 0;
}