#include<stdio.h>
int main(){
    int arr[5], pos;
    printf("enter 5 elements of array\n");
    for (int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    printf("eneter the position of element to be deleted\n");
    scanf("%d", &pos);
    // deleting element at given position
    for (int i=pos-1;i<4;i++){
        arr[i]=arr[i+1];
    }
    printf("elements of array after deletion are:\n");
    for (int i=0;i<4;i++){
        printf("%d\n", arr[i]);
    } 
}