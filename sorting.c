#include<stdio.h>
#include <stdlib.h>
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


void insertion_sorting(int* arr,int size){

        for (int i = 1; i < size; i++){ 
            int next = arr[i];
        int j;
        for (j = i-1; j >=0 && arr[j]>next; j--){
            arr[j+1] = arr[j];
        } 
        arr[j+1]=next;
    }
    
}

//<= and >= Very important 
void merge(int* arr,int l,int m,int r){
    int n = r-l+1;
    int* temp = (int*)malloc(n*sizeof(int));
    int left = l,right = m+1,index=0;
    while (left<=m && right<=r){
        if (arr[left]<=arr[right]){
            temp[index] = arr[left];
            left++; 
        }
        else{
            temp[index] = arr[right];
            right++; 
        }
        index++;
    }
    while(left <= m) {
        temp[index] = arr[left];
            left++; 
            index++;

    } 
    while(right <= r)  {
        temp[index] = arr[right];
            right++; 
            index++;
    }

    for (int i = 0; i < n; i++){
        arr[l+i]=temp[i];
    }
    free(temp);
    
    
}

void merge_sorting(int* arr,int l,int r){
    if (l < r)
    {
        int m = l+(r-l)/2; //just like (l+r)/2 from geeksforgeeks
        merge_sorting(arr,l,m);
        merge_sorting(arr,m+1,r);
        merge(arr,l,m,r);
    }
    

}



int q_partion(int* arr,int l,int r){
    int p = arr[l];
    int m = l;


    for (int i = l+1; i <= r; i++)
    {
        if(arr[i]<p){
            m++;
            swap(arr,i,m);
        }
        else{
        }
    }

    swap(arr,l,m);
    return m;

}


void quick_sorting(int* arr,int l,int r){
    if(l<r){
        int pv = q_partion(arr,l,r);
        quick_sorting(arr,l,pv-1);
        quick_sorting(arr,pv+1,r);
    }

}