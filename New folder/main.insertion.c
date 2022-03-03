#include <stdio.h>
#include <stdlib.h>
// insertion Sort
int arr [] = {23 , 67 , 89 , 5 , 45 , 20 , 15 , 27};
int n =8;



void insertionSort()
{
  int key,j;

    for(int i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(arr[j]>key && j>=0 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



void printData() {

for(int q=0; q<n; q++){

    printf("%d \t",arr[q]);
}
    printf("\n");


}




int main (){

printf("Before insertion \n");
printData();

insertionSort();

printf("after Insertion \n");
printData();
}




