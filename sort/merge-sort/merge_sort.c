//
//  main.c
//  merge_sort
//
//  Created by YmWw on 2017/6/27.
//  Copyright © 2017年 Barrybarry. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//
//int *merge(int *left, int leftCount, int *right, int rightCount){
//
//    int *result = (int *)malloc(sizeof(int) * (leftCount + rightCount));
//    int index = 0, leftIndex = 0, rightIndex =0;
//
//    while (leftIndex < leftCount && rightIndex < rightCount) {
//
//        if (left[leftIndex] < right[rightIndex]) {
//
//            result[index++] = left[leftIndex];
//            leftIndex++;
//
//        } else {
//
//            result[index++] = right[rightIndex];
//            rightIndex++;
//        }
//    }
//
//    while (leftIndex < leftCount) {
//
//        result[index++] = left[leftIndex++];
//
//    }
//
//    while (rightIndex < rightCount) {
//        result[index++] = right[rightIndex++];
//    }
//
//    return result;
//}

//                       0         1           3
int *merge(int *a, int left, int center, int right){
    
    int n1 = center - left + 1;
    int n2 = right - center;
    
    int *leftArray = (int *)malloc(sizeof(int) * n1);
    int *rightArray = (int *)malloc(sizeof(int) * n2);
    
    for (int i = 0; i < n1; i++) {
        
        leftArray[i] = a[left + i];
    }
    
    for (int i= 0; i < n2; i++) {
        
        rightArray[i] = a[center + i];
    }
    
    for (int k = left; k <= right; k++) {
        
        if (<#condition#>) {
            <#statements#>
        }
    }
    
}


void merge_sort(int *a, int left, int right){
    
    if (left == right) {
        
        return;
    }
    
    merge_sort(a, left, (left + right) / 2);
    merge_sort(a,(left + right) / 2 , right);
    
}


int main(int argc, const char * argv[]) {
    
    
    int left[4] = {5,6,7,9};
    int right[5] = {1, 2, 3, 4,8};
    
    int *re = merge(left, 4, right, 5);
    for (int i = 0; i < 9; i++) {
        
        printf("%d\n",re[i]);
    }
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
