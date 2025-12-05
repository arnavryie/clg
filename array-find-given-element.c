#include <stdio.h>

int main () {
    int size, element, found = 0, position;

    //input array size
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // input array elements

    printf("enter %d elements:\n", size);
    for (int i = 0; i< size; i++) {
        scanf("%d", &arr[i]);
    }
    // input element to search

    printf("enter the element to search: ");
    scanf("%d", &element);

    //search the element using linear search
    for(int i = 0; i< size; i++){
        if(arr[i] ==element) {
            found = 1;
            position = i+1; //position starting from 1 
            break;
        }
        }

        //display result 
        if(found){
            printf("element %d found at position%d\n",element,position);
        } else {
            printf("element %d not found in the array\n",element);
        
        }
        return 0;
        }