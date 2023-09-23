#include<stdio.h>
int main()
{
	int grades[100],i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
		{
			scanf("%d",&grades[i]);
			if(grades[i]%5==3 && grades[i]>40)
			{
				grades[i]=grades[i]+2;
				printf("Revised grade=%d",grades[i]);
			}
			else if(grades[i]%5==4 && grades[i]>40)
			{
				grades[i]=grades[i]+1;
				printf("Revised grade=%d",grades[i]);
			}
			else if(grades[i]==38 || grades[i]==39)
			{
				grades[i]=40;
				printf("Revised grade=%d",grades[i]);
			}
			else if(grades[i]<38)
			{
				printf("Grade=%d",grades[i]);
			}
			else
			{
				printf("Grade=%d",grades[i]);
			}
		}
}
