#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	clock_t t;
	int a[16000] = {0},i;
	t = clock();
	srand(time(0));
	for(i = 0; i < 16000; i++)
	{
		a[i] = rand();
		printf("%d %d \n", i, a[i]);
	}
	int j;
	for(i = 0; i <= 1599; i++)
	{
		for(j = 0; j <= 1599 - i; j++)
		{
			if(a[j] > a[j+1])
			{
				int y;
				y = a[j+1];
				a[j+1] = a[j];
				a[j] = y;
			}
		}
	}
	t = clock() - t;
	printf("%lu", t);
	return 0;
}

