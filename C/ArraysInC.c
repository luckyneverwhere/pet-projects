#include <stdio.h>

int main() {
   int arr[4] = {1, 2, 3, 4};
   printf("%d\n", arr[3]);
   arr[3] = 10;
   printf("%d\n", arr[3]);

   int arr2[1000] = {123};
   int len = sizeof(arr2) / sizeof(arr2[0]);
   for (int i = 0; i < len; i++) {
      printf("%d\n", arr2[i]);
   }

   int arr3[10] = {};
   int len2 = sizeof(arr3) / sizeof(arr3[0]);
   for (int c = 0; c < len2; c++) {
      arr3[c] = c + 1;
      printf("%d\n", arr3[c]);
   }
}