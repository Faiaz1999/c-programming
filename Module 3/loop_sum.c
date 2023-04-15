#include<stdio.h>
int main()
{
    long long int sum=0;
    int i;
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i=i+1)
    {
        sum+=i;
        
    }
    printf("%lld\n",sum);
    
    return 0;
}