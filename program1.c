#include <stdio.h>

int main()
{
	int size, negative_number = 0;
	printf("Enter array size: ");
	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++)
	{
		printf("Enter arr[%d] element: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Negative number from an array: \n");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			printf("%d", arr[i]);
			negative_number = 1;
		}
	}

	if (negative_number == 0)
	{
		printf("Zero\n");
	}

	return 0;
}