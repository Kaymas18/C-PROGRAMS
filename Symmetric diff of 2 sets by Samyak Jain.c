#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],d[10],i,j,k=0,n,m,flag=0;
	 printf("Enter the size of array A:");
	 scanf("%d",&n);
	 printf("Enter the element of First array A:");
	 for(i=0;i<n;i++)
	 {
	 scanf("%d",&a[i]);
	 }
	 printf("Enter the size of array B:");
	 scanf("%d",&m);
	 printf("Enter the elements of array B:");
	 for(j=0;j<m;j++)
	 {
	 scanf("%d",&b[j]);
	 }
	 k=0;
	 for(i=0;i<n;i++)
	 {
	 flag=0;
	 	for(j=0;j<m;j++)
	 		{
		 		if(a[i]==b[j])
		 		{
		 			flag=1;
		 			break;
		 		}
	 		}
		 if(flag==0)
		 {
		 d[k]=a[i];
		 k++;
		 }
	 }
	 for(i=0;i<m;i++)
	 {
	 flag=0;
		 for(j=0;j<n;j++)
		 {
		 if(b[i]==a[j])
		 {
			 flag=1;
			 break;
		 }
	 }
		 if(flag==0)
		 {
		 d[k]=b[i];
		 k++;
		 }
	 }
	 printf("Symmetric diff:");
	 for(i=0;i<k;i++)
	 {
	 printf("%d ",d[i]);
	 }
	 return 0;
 }
