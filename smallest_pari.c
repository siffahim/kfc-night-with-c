#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        int smallest_value = INT_MAX;

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                int res = arr[i] + arr[j] + j - i;
                if(res < smallest_value){
                    smallest_value = res;
                }
            }
        }

        printf("%d", smallest_value);
        printf("\n");
    }

    return 0;
}