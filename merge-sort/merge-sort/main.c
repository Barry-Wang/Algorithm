//
//  main.c
//  merge-sort
//
//  Created by WangWei on 29/8/17.
//  Copyright © 2017年 WangWei. All rights reserved.
//

#include <stdio.h>

void merge(int *a, int start, int mid, int end){
    
    printf("merge_left = %d, merge_mid = %d, merge_right = %d \n", start, mid, end);

    
    int length1 = mid - start + 1;
    int length2 = end - mid;
    
    int temp1[length1];
    int temp2[length2];
    
    for (int i = 0; i < length1; i++) {
        
        temp1[i] = a[start + i];

    }

    
    for (int j = 0; j < length2; j++) {
        
        temp2[j] = a[mid + j + 1];
    }
    
    
    int start1 = 0;
    int start2 = 0;
    int index = start;
    while (start1 < length1 && start2 < length2) {
        
        if (temp1[start1] > temp2[start2]) {
            
            a[index] = temp1[start1++];
            
        } else  {
          
            a[index] = temp2[start2++];
        }
        
        index++;
    }
    
    while (start1 < length1) {
        
        a[index++] = temp1[start1++];
    }
    
    while (start2 < length2) {
        a[index++] = temp2[start2++];
    }
    

}

void merge_sort(int *a, int left, int right) {
    
    if (left >= right) {
        
        return;
    }
    int mid = (left + right) / 2;
    printf("left = %d, mid = %d, right = %d \n", left, mid, right);

    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);

    merge(a, left, mid, right);
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[8] = {1, 2, 3, 4,5,6,7,8};
    merge_sort(a, 0, 7);
    
    for(int i = 0; i <= 7; i++){
        
        printf("a[%d] = %d ", i, a[i]);
    }
    return 0;
}
