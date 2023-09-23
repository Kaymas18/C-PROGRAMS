#include<stdio.h>
int main()
{
  int b,n,m,keyboards[1000],drives[1000],i,j,max=0,t=0,k=0;
  printf("Monica's budget:");
  scanf("%d",&b);
  printf("Enter no. of keyboards:");
  scanf("%d",&n);
  printf("Enter no. of drives:");
  scanf("%d",&m);
  printf("Enter keyboard`s prices:");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&keyboards[i]);
  }
  printf("Enter drives prices:");
  for(j=0;j<m;j++)
  {
  	scanf("%d",&drives[j]);
  }
  max=keyboards[0]+drives[0];
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		if(max<=b)
  		{
  			k=i;
  			t=j;
  			//max=keyboards[i]+drives[j];
		}
	}
  }
  if(keyboards[k]+drives[t]<=b)
 	{
 		 printf("%d",keyboards[k]+drives[t]);
 	}
  else
  {
  	printf("-1");
  }
}
