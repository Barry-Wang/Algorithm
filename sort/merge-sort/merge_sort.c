#include <stdlib.h>
#include <stdio.h>



int* merge(int *left, int left_length, int *right, int right_length) {
  
      int *a = (int *)malloc(sizeof(int) * (left_length + right_length)); 
      int i = 0, j = 0;
      int index = 0;
      while (i < left_length && j < right_length) {

        if (left[i] < right[j]) {
               
             a[index] = left[i];
             i++;

        } else {
             
             a[index] = right[j];
             j++;
        }

        index++;
      }

      printf("index = %d\n", index);

      while(i < left_length) {

        a[index] = left[i];
        i++;
        index++;
      }

      while(j < right_length) {

        a[index] = right[j];
        j++;
        index++;
      }

      return a;

}

int main(int argc, char const *argv[]) {

    int left[5] = {1, 2, 3, 4, 5};
    int right[5] = {6, 7, 8, 9, 10};

    int *a  = merge(left, 5, right, 5);

    for (int i = 0; i < 10; ++i) {
        
        printf("%d\n", a[i]);
    }

    return 0;
}