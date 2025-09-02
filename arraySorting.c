#include<stdio.h>
int main(){
    int arr[5], temp;
    printf("Enter 5 elements of array\n");
    for (int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    // sorting array in ascending order
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("elements of array in ascending order are:\n");
    for (int i=0;i<5;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}