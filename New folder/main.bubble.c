#include <stdio.h>
#include <stdlib.h>
//Bubble sort
int arr [] = {23 , 67 , 89 , 5 , 45 , 20 , 15 , 27};
int n =8;

void swap  (int *a, int *b)
{
    int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}

void printData()
{
    for(int q=0; q<n; q++){
        printf("%d \t",arr[q]);
    }
    printf("\n");
}

void bubbleSort ()
{
    for (int q =0; q<n-1; q++){
        for (int w =0; w<n-q-1; w++){

        if (arr[w]>arr[w+1]){
            swap(&arr[w],&arr[w+1]);
        }
        }

    }



}

int main(){

printf("before \n");
printData();

bubbleSort();

printf("after \n");
printData();

return 0;




}


