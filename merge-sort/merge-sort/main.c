//
//  main.c
//  merge-sort
//
//  Created by WangWei on 29/8/17.
//  Copyright © 2017年 WangWei. All rights reserved.
//

#include <stdio.h>

void merge(int *a, int start, int mid, int end){
    
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
    int index = 0;
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
    
    for(int i = 0; i < end; i++){
      
        printf("a[%d] = %d ", i, a[i]);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[8] = {7, 5, 4, 2, 9, 6, 3, 1};
    merge(a, 0, 3, 7);
    return 0;
}
