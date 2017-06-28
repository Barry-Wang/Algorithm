#include <stdio.h>
#include <stdlib.h>

/*
 找出从当前位置的下一个开始开始的最小数与当前的数做比较，如果如何要求就交换

*/

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

    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    insert_sort(a, sizeof(a) / sizeof(a[0]));

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
    {
       printf("%d\n", a[i]);
    }

    return 0;
}
