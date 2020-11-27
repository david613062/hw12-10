#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int integer[20];
    int max = 0;
	int i = 0;
	int j = 0;
	char y;

	printf("Enter a integer: ");
	

	do
	{
      scanf_s("%d", &integer[20]);
	  i++;
      for (j = 0; j< integer[20]; j++)
	  {
        if (integer[20] > max)
		{
			max = integer[20];   
		}
	  }
	} while (y = getchar() != '\n');
	printf("the maximum is: %d",max );
	printf("\n");
	system("pause");
	return 0;
}
