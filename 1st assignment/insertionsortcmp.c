#include <stdio.h> 
#include <math.h> 
int insertionsortcmp(int arr[], int n) 
{ 
   int i, key, j, cmp=0; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
           cmp+=1;
       } 
       arr[j+1] = key; 
   } 
   return cmp;
} 
