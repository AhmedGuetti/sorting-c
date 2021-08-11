#include<stdio.h>
#include"sorting.h"

void swap(int * arr,int position1,int position2){
    int temp = arr[position1];
    arr[position1] = arr[position2];
    arr[position2] = temp;
}


void selection_sorting(int* arr,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size+1; j++)
        {
            if (arr[i]<arr[j])
            {
                swap(arr,i,j);
            }
        }
        
    }
    
}