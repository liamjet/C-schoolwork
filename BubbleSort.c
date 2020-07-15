

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *const arr, size_t arr_len);
int swapped;


int user_main(){
    
    size_t arr_len;
    
    // test case 1
    int arr1[] = {3, 4, 5, 6};
    arr_len = sizeof(arr1) / sizeof(int);
    printf("Before sorting:\n");
    reserved_print_arr(arr1, arr_len);
    bubble_sort(arr1, arr_len);
    printf("After sorting:\n");
    reserved_print_arr(arr1, arr_len);
    
    // test case 2
    int arr2[] = {-3, 4, 5, 6, -7};
    arr_len = sizeof(arr2) / sizeof(int);
    printf("Before sorting:\n");
    reserved_print_arr(arr2, arr_len);
    bubble_sort(arr2, arr_len);
    printf("After sorting:\n");
    reserved_print_arr(arr2, arr_len);
    
    // test case 3
    int arr3[] = {3};
    arr_len = sizeof(arr3) / sizeof(int);
    printf("Before sorting:\n");
    reserved_print_arr(arr3, arr_len);
    bubble_sort(arr3, arr_len);
    printf("After sorting:\n");
    reserved_print_arr(arr3, arr_len);
    
    // test case 4
    int arr4[] = {1, 2, 3, 5, 4, 6, 7, 8, 9};
    arr_len = sizeof(arr4) / sizeof(int);
    printf("Before sorting:\n");
    reserved_print_arr(arr4, arr_len);
    bubble_sort(arr4, arr_len);
    printf("After sorting:\n");
    reserved_print_arr(arr4, arr_len);
    
}

void bubble_sort(int *const arr, size_t arr_len) {
   
    int i;
    for (i = 0; i < arr_len; i++) {
        swapped = 0; 
        int j;
        for (j = 0; j < arr_len - 1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                int tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}