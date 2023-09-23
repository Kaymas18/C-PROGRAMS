#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  printf("Enter number of elements:");
  scanf("%d", &n);
  printf("Enter %d numbers:", n);
  for (c = 0; c < n; c++)
  {
  	scanf("%d", &array[c]);
  }
  printf("Enter value to find:");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last)
  {
    if (array[middle] < search)
    {
    first = middle + 1;
	}
    else if (array[middle] > search)
	{
      last = middle - 1;
    }
    else
      {
        printf("%d found at location %d.\n", search, middle);
        break;
	  }
    middle = (first + last)/2;
  }
  if (first > last)
    {
    	printf("Not found! %d isn't present in the list.\n", search);
	}
  return 0;
}

