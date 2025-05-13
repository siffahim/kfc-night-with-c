#include <stdio.h>

void print_number(int i, int n){
    if(i == n){
        return;
    }

    printf("%d\n", i+1);
    print_number(i + 1, n);
}

int main(){
    int n;
    scanf("%d", &n);

    print_number(0, n);

    return 0;
}