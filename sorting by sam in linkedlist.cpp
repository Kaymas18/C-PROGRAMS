#include<stdio.h>
#include<stdlib.h>
void sorting()
{
	struct node *ptr,*cpt, int temp;
	ptr=head;
	while(ptr->link!=NULL)
	{
		cpt=ptr->link;
		while(cpt!=NULL)
		{
			if(ptr->info>cpt->info)
			{
				temp=ptr->info;
				ptr->info=cpt->info;
				cpt->info=temp;
			}
			cpt = cpt->link;
		}
		ptr = ptr->link;
	}
}
