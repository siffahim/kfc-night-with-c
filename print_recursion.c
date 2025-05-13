#include <stdio.h>

void print_string(char str[], int n, int i){
    if(i == n){
        return;
    }
    printf("%s\n", str);
    print_string(str, n, i + 1);
}

int main(){
    int n;
    scanf("%d", &n);

    char str[] = "I love Recursion";

    print_string(str,n, 0);

    return 0;
}