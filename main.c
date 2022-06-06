#include <stdio.h>
#define n 10
void print(int arr[]){
    int i=0;
    for (i=0 ; i<n;i++){

        printf("%d , ",arr[i]);
    }
}
void insertionsort(int arr[]){

    int i,j,temp;
    int small;
    for (i = 1; i<n; i++){
        small = arr[i];

        for (j = i-1; j>=0 && small<arr[j]; j--){
            arr[j+1] =arr[j];
        }
           arr[j+1] = small;


        printf("\nAfter iteration %d :",i+1);
        print(arr);

    }
}


int main(){

    int arr[n]={4,7,2,10,15,12,8,9,3,11};

    print(arr);
    insertionsort(arr);
    printf("\n Sorted array\n");
    print(arr);
    return 0;
}
