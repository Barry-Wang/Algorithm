#include <stdio.h>
#include <stdlib.h>

void insert_sort (int *a, int length) {

    for(int i = 0; i < length - 1; i++) {

        int j = i + 1;
        int min = 0;
        int min_index = 0;

        if (j < length) {
            
           min = a[j];
           min_index = j;

        } else {

            return;
        }

        while (++j < length) {
            if (min > a[j]) {
                min = a[j];
                min_index = j;
            }
        }

        if (min < a[i]) {
            
            a[min_index] = a[i];
            a[i] = min;
        }
     
    }


}
int main(int argc, char const *argv[]) {

    int a[] = {9};
    insert_sort(a, sizeof(a) / sizeof(a[0]));

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
    {
       printf("%d\n", a[i]);
    }

    return 0;
}