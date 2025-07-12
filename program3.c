#include <stdio.h>

int main()
{
	int size;
	printf("Enter size of rows and cols:");
	scanf("%d", &size);

	int arr[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("Enter arr[%d][%d] element: ", i, j);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("The transpose matrix of an array is: \n");
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
		
	}

	return 0;
}