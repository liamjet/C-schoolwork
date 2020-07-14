// 
// Name: Liam Pang-Naylor
// Section: 1240
// Date: 6/26/2020
// Purpose: 
// Input: 
// Output: 
//

#include <stdio.h>
#include <stdlib.h>

int* insert_into_array(int arr[], size_t arr_len, int value, size_t pos)
{
    if (pos > arr_len || pos < 0) {
        printf("Index out of bounds\n");
    }
    else {
        int i;
        for (i = arr_len; i >= pos; i--) {
            if (i == 0) {
                break;
            }
            else {
                arr[i] = arr[i - 1];
            }
        }
        arr[pos] = value;
    }
    return arr;
}


int user_main() {
    
    size_t arr_len;
    int *result;
        
    printf("\nTest case 1\n");
    int arr1[] = {3, 4, 5, 6};
    arr_len = sizeof(arr1) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr1, arr_len);
    result = insert_into_array(arr1, arr_len, 6, 2);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 2\n");
    int arr2[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr2) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr2, arr_len);
    result = insert_into_array(arr2, arr_len, 6, 2);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 3\n");
    int arr3[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr3) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr3, arr_len);
    result = insert_into_array(arr3, arr_len, 6, 0);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 4\n");
    int arr4[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr4) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr4, arr_len);
    result = insert_into_array(arr4, arr_len, 6, arr_len-1);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 5\n");
    int arr5[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr5) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr5, arr_len);
    result = insert_into_array(arr5, arr_len, 6, 15);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 6\n");
    int arr6[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr6) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr6, arr_len);
    result = insert_into_array(arr6, arr_len, 6, -10);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 7\n");
    int arr7[] = {3};
    arr_len = sizeof(arr7) / sizeof(int);
    printf("Before insertion:\n");
    reserved_print_arr(arr7, arr_len);
    result = insert_into_array(arr7, arr_len, 6, 0);
    printf("After insertion:\n");
    reserved_print_arr(result, arr_len);
    return 0;
}



