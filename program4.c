#include <stdio.h>

int main()
{
	int rows, cols;
	printf("Enter array's row size:\n");
	scanf("%d", &rows);
	printf("Enter array's column size:\n");
	scanf("%d", &cols);

	int arr[rows][cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("Enter arr[%d][%d] element: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	int row_index, col_index;
	int sum = 0;

	printf("Enter row number or index: ");
	scanf("%d", &row_index);

	printf("Elements of a row %d: ", row_index);
	for (int j = 0; j < cols; j++)
	{
		printf("%d ", arr[row_index][j]);
		sum += arr[row_index][j];
	}
	printf("\n");

	printf("Sum of elements in row %d is : %d\n", row_index, sum);

	sum = 0;

	printf("Enter column number or index: ");
	scanf("%d", &col_index);

	printf("Elements of a column %d: \n", col_index);
	for (int i = 0; i < rows; i++)
	{
		printf("%d ", arr[i][col_index]);
		sum += arr[i][col_index];
	}
	printf("\n");

	printf("Sum of elements in row %d is : %d\n", col_index, sum);

	return 0;
}