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


void merge(int* arr,int l,int m,int r){
    int i,j,k;
    int n1 = m-l+1; 
    int n2 = r-m;
    int L[n1],R[n2];


    for (i = 0; i < n1; i++)
        L[i] =  arr[l+i];
    for (j = 0; j < n2; j++)
        R[j] =  arr[m+1+j];
    i = 0;
    j = 0;
    k = l;

   while(i<n1 && j<n2){
       if (L[i]<R[j])
       {
           arr[k] = L[i];
           i++;
       }
       else{
           arr[k] = R[j];
           j++;
       }
       k++;
   } 



while (i<n1){
    arr[k] = L[i];
    i++;
    k++;
}
while (j<n2){
    arr[k] = R[j];
    j++;
    k++;
}


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