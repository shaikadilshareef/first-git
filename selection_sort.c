#include <stdio.h>
void selection_sort(int nums[], int n);
int main()
{

    int n;
    printf("enter a number: \n");
    scanf("%d", &n);

    int nums[n];
    printf("enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("the entered array of numbers is: \n");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", nums[j]);
    }

    printf("\n");

    selection_sort(nums, n);

    printf("the sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", nums[i]);
    }

    return 0;
}

void selection_sort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        

        

        
    }
    
}