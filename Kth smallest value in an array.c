#include <stdio.h>
#include <stdlib.h>
int n , k ;

void printArr( int arr[] , int n );
int Kthsmallest(int arr[] , int n , int k );

int main(){
    printf("enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        printf("enter value for position%d : ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is : ");
    printArr(arr, n);
    printf("\n");

    printf("\n\you want to find which smallest number : ");
    scanf("%d",&k);

    if ( k > n ){
        printf("\n\nvalue for k is bigger than the size of array . TRY AGAIN ");
        return 0;
    }

    // sorting array ...
    int temp ;
    for (int i = 0 ; i  < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (arr[i] > arr[j]){
                temp = arr[i] ;
                arr[i] = arr[j];
                arr[j] = temp ;
            }

        }
    }

    int Kth_small = Kth_smallest (arr , n , k );
    if ( Kth_small == 1 ){
        printf("\nsmallest number is : %d " , Kth_small);
    }
    else if (Kth_small == 2){
        printf("\n%dnd smallest number is : %d ",k , Kth_small);
    }
    else if (Kth_small == 3){
        printf("\n%drd smallest number is : %d ",k , Kth_small);
    }
    else{
        printf("\n%dth smallest number is : %d ",k , Kth_small);
    }
    return 0 ;
}



void printArr(int arr[], int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}

int Kth_smallest (int arr[] , int n , int k){
    return arr[k-1];
}
