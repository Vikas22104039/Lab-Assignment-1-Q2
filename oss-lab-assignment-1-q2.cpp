#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("The number of elements should be a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = sum / n;

    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
