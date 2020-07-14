// 
// Name: Liam Pang-Naylor
// Section: 1240
// Date: 6/26/2020
// Purpose: Reverses an array in-place
// Input: An array
// Output: The array reversed
//

#include <stdio.h>
#include <stdlib.h>

int* reverse_array(int arr[], size_t arr_len)
{
    int start = 0;
    int end = arr_len-1;
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    return arr;

}

/* 
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/ 
int user_main() {
    size_t arr_len;
    int *result;
    
    printf("\nTest case 1\n");
    int arr1[] = {3, 4, 5, 6};
    arr_len = sizeof(arr1) / sizeof(int);
    printf("Before reversal:\n");
    reserved_print_arr(arr1, arr_len);
    result = reverse_array(arr1, arr_len);
    printf("After reversal:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 2\n");
    int arr2[] = {3, 4, 5, 6, 86, 10, 123, 134};
    arr_len = sizeof(arr2) / sizeof(int);
    printf("Before reversal:\n");
    reserved_print_arr(arr2, arr_len);
    result = reverse_array(arr2, arr_len);
    printf("After reversal:\n");
    reserved_print_arr(result, arr_len);
    
    printf("\nTest case 3\n");
    int arr3[] = {3};
    arr_len = sizeof(arr3) / sizeof(int);
    printf("Before reversal:\n");
    reserved_print_arr(arr3, arr_len);
    result = reverse_array(arr3, arr_len);
    printf("After reversal:\n");
    reserved_print_arr(result, arr_len);
    return 0;
}


