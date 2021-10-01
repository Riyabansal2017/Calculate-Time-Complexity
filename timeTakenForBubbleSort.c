#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int *a, int n)
{
    int i, j;
    for(i = 0; i <= n-1; i++)
    {
        for(j = 0;j <= n-i-1; j++)
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

}

int main()
{
    clock_t t;
    double t1,t2;
    int a[16000]={0},i,b[32000]={0};

    srand(time(0));
    for(i = 0; i < 16000; i++)
    {
        a[i] = rand();
    }
    for(i=0;i<32000;i++)
    {
        b[i] = rand();
    }
    int j;
    t = clock();
    bubblesort(a, 16000);
    t = clock()-t;
    t1 = t;
    t = clock();
    bubblesort(b, 32000);
    t = clock()-t;
    t2 = t;

    printf("%lf \n",(t2/t1));
    return 0;
}

