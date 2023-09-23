#include<stdio.h>
int main()
{
	int t,i,n,a[101],b=0,min=0,c=0,max=0,j,temp=0,sum=0;
	printf("enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("Enter n:");
		scanf("%d",&n);
		sum=sum+n;
		if(sum<=5000)
		{
		
		if(n%4==0)
		{
			printf("Enter array:");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			max=a[0];
			for(i=1;i<n;i++)
			{
				if(max<a[i])
				{
					max=a[i];
				}
			}
				if(max<=100)
				{
					for(i=0;i<n;)
					{
					if(a[i]!=a[i+1])
						{
							b++;
							i++;
						}
					if(a[i]==a[i+1])
					{
						c++;
						i++;
					}
					}
					min = a[0];
					if(b==n)
					{
						for(i=1;i<n;i++)
						{
							if(min>a[i])
							{
								min = a[i];
							}
						}
						for(i=0;i<n;i++)
						{
							if(a[i]==min)
							{
								continue;
							}
							else if (a[i]!=min && a[i]<=100)
							{
								for(i=n-2;i>=0;i--)
								   {
								      for(j=0;j<=i;j++)
								      {
								        if(a[j]>a[j+1])
								        {
								           temp=a[j];
								           a[j]=a[j+1];
								           a[j+1]=temp;
								        }
								      }
								   }
							
								for(i=0;i<n;i++)
								{
									if(a[i]!=min)
									printf("%d ",a[i]);
								}
							}
						}
					}
					else if(c>0)
					{
						printf("-1");
					}
					printf("\n");
					b=0;
					c=0;
					temp=0;
				}
				else
				{	t--;
					continue;
				}
			}
			else
			{
				t--;
				continue;
			}
		}
		else
		{
			break;
		}
		t--;
	}
}
