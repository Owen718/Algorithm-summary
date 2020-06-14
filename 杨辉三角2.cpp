#include <stdio.h>
#define MAX 60

int main()
{
	int arr[MAX][MAX] = { 0 };
	int N;
	scanf("%d", &N);
	int i = 0;
	for (i = 0; i<N; i++)
	{
		int m = 0;
		for (m = 0; m<N - i; m++)
		{
			printf("  ");
		}
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if ((0 == j) || (i == j))
			{
				arr[i][j] = 1;

			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			}
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}