#include <stdio.h>

int main()
{
	int rows,cols;
	printf("Enter array's row size:\n");
	scanf("%d", &rows);
	printf("Enter array's column size:\n");
	scanf("%d", &cols);

	int arr[rows][cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("Enter arr[%d][%d] element: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}

	int largest_num = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > largest_num)
			{
				largest_num = arr[i][j];
			}
		}
	}
	printf("Largest number from an given array is: %d", largest_num);

	return 0;
}