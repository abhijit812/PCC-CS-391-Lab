#include <stdio.h>
 
int printCommon(int arr1[], int len1, int arr2[],int len2) {
 
   int i,j;
 
   for(i = 0; i < len1 ;i++) {
 
      for(j = 0; j < len2 ;j++) {
 
        if(arr1[i] == arr2[j]){
 
           printf("\n Common elements is %d", arr1[i]);
 
          }
       }
    } 
}
 
int main(void) {
 
   
    int i, size;
   printf("ENter array length : \n");
    scanf("%d",&size);
    
    int arr1[size],arr2[size];
    
   printf("Enter elements of Array 1:\n");
     for(i = 0; i < size;  i++)
        scanf("%d", &arr1[i]);
   
   printf("Enter elements of Array 2:\n");
     for(i = 0; i < size;  i++)
        scanf("%d", &arr2[i]);
 
  // Lenght of arr1 and arr2
   int len1 = 5;
   int len2 = 5;
 
   printCommon(arr1,len1,arr2,len2);
 
   return 0;
}
