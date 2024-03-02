#include <stdio.h>
#include <stdlib.h>

void quickSort ( int tab[], int n)
{
    int temp = 0;
    for ( int i = 0; i < n; i ++)
    {
        for ( int j = i; j < n; j++)
        {
            if ( tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
        printf("%d ", tab[i]);
    }
    printf("\n");
}


void insertionSort (int tab[], int n)
{
    int key = 54;
    int temp = 0;
    tab[n-1] = key;
    for ( int i = 0; i < n; i++)
    {
        for ( int j = i; j < n; j ++)
        {
            if ( tab[i] >= tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
        printf("%d ", tab[i]);
    }
    printf("\n");
}


void starDescending ( int n)
{
    for (int i = 0; i < n; i ++)
    {
        for ( int j = i; j < n; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starDescendingReverse ( int n)
{
    for (int i = 0; i <n ; i ++)
    {
        for ( int j = i; j < n; j --)
        {
            printf("* ");
        }
        printf("\n");
        n--;
    }
}

void starAscending ( int n )
{
    for (int i = n; i >= 0 ; i --)
    {
        for ( int j = i; j < n; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void starAscendingReverse ( int n )
{
    for (int i = 0; i < n ; i ++)
    {
        for ( int j = i; j <=0; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n = 10;
    int tab[10] = {14,5,8,9,3,4,85,74,23,7};
    quickSort(tab,n);
    insertionSort(tab,n);
    starDescendingReverse(5);
    //starAscendingReverse(5);
    //starAscending(5);
    return 0;
}