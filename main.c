#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"sorting.h"

void printarr(int *arr,int size){
    for(int i=0;i < size;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]= {20,42,49,22,10,62,71,31,44,91,69,24,100,77,4,75,40,88,25,59};
    int size = sizeof(arr)/sizeof(arr[0]);
    //selection_sorting(arr,size);
    //swap(arr,0,10);
    //bubble_sorte(arr,size);
    //insertion_sorting(arr,size);
    //merge_sorting(arr,0,size+1);
    quick_sorting(arr,0,size+1);
    printarr(arr,size);



    return 0; 
    }