#include <stdio.h>
void main()
{
	int arr[10], i, j, n, sum= 0;
	printf("enter numbers in array: ");
	scanf("%d\n", &n);

	for(i= 0; i <n; i += 2)
	{
		sum= sum + arr[i];
	}
	printf("Sum of even position elements: %d", sum);
	scanf("%d", &arr[j]);

	for(j= 0; j<n; j++)
	{
		if(arr[j]%2== 0)
		sum= sum + arr[j];
	}
	printf("sum of even numbered elements: %d", sum);
}
