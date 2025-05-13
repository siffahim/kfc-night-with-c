#include <stdio.h> 
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_value_index = 0,min_value_index = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] > arr[max_value_index]){
            max_value_index = i;
        }

        if(arr[i] < arr[min_value_index]){
            min_value_index = i;
        }
    }

    int temp = arr[max_value_index];
    arr[max_value_index] = arr[min_value_index];
    arr[min_value_index] = temp;

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    

    // long way slove
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     scanf("%d", &arr[i]);
    // }

    // int max_value = INT_MIN;
    // int min_value = INT_MAX;

    // int max_value_index;
    // int min_value_index;

    // //max value
    // for (int i = 0; i < n; i++){
    //     if(arr[i] > max_value){
    //         max_value = arr[i];
    //         max_value_index = i;
    //     }
    // }

    // //min value
    // for (int i = 0; i < n; i++){
    //     if(arr[i] < min_value){
    //         min_value = arr[i];
    //         min_value_index = i;
    //     }
    // }

    // arr[max_value_index] = min_value;
    // arr[min_value_index] = max_value;

    // //print arr
    // for (int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }

    return 0;
}