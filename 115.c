#include<stdio.h>
#define MAX 1000
void main()
{
    int N[MAX],K[MAX],a,min;
    int i,j;
    printf("ENTER THE ARRAY SIZE");
    scanf("%d",&a);
    printf("ENTER VALUE OF N");
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    printf("ENTER VALUE OF K");
    for(j=0;j<n;j++)
    {
        scanf("%d",&K[j]);
    }
    min=K[0];
  for(j=1;j<n;j++)
  {
    if(K[j]<min)
    min=K[j];
  }
 
printf("SMALLEST NUMBER IN K:\t%d",min);
}
