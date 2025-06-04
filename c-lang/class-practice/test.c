#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Unique elements in the array: ");
    for (int j = 0; j < n; j++)
    {
        int count = 1;

        if (arr1[j] == '*')
            continue;

        for (int k = j + 1; k < n; k++)
        {

            if (arr1[j] == arr1[k])
            {

                count++;
                arr1[k] = '*';
            }
        }
        if (count == 1)
        {
            printf("%d ", arr1[j]);
        }
    }
}