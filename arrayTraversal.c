#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 elements of array\n");
    for (int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    printf("elements of array are:\n");
    for (int i=0;i<5;i++){
        printf("%d\n", arr[i]);
    }
}