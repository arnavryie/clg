#include <stdio.h>
int main(){

int n, i, x, freq=0;

printf("enter the number of elements:");
scanf("%d",&n);

int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            freq++;
        }
    }

    printf("Frequency of %d = %d\n", x, freq);

    return 0;
}

