#include <stdio.h>

int main()
{
    int n = 0, count = 0;
    scanf(n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(arr[i]);
        if (arr[i] < 0) {
            count++;
        }

    }
    if (count == 0){
        printf("no answer");
    }

    else {
        printf("count\n") ;
        for (int c = n - 1; c >= 0; c--)
        {

    if (arr[c] < 0){
                printf(arr[c], " ") ;
            }
        }
    }
    return 0;
}