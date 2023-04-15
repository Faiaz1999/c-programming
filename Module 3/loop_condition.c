#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i=i+1)
    {
        if(i%2 == 0)
        {
          printf("%d-EVEN\n",i);
        }
        else
        {
            printf("%d-ODD\n",i);
        }
        

    }

    return 0;
}