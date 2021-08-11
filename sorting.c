#include<stdio.h>
#include<stdbool.h>
#include"sorting.h"

void swap(int * arr,int position1,int position2){
    int temp = arr[position1];
    arr[position1] = arr[position2];
    arr[position2] = temp;
}


void selection_sorting(int* arr,int size){
    for (int i = size-1; i >= 1; i--){
        for (int j = 0; j < i; j++){
            if (arr[j]>arr[i]){
                swap(arr,i,j);
            }   
        }   
    }
}

void bubble_sorte(int* arr,int size){
    for (int i = size-1; i >= 1; i--){
        bool is_sorted = true;
        for (int j = 1; j <= i; j++){
            if (arr[j-1]>arr[j]){
                swap(arr,j-1,j);
                is_sorted = false;
            }
        } 
        if (is_sorted) return;  
    }
    
}