#include <stdio.h>
#include <stdlib.h>
//exchange Sort
int arr [] = {23 , 67 , 89 , 5 , 45 , 20 , 15 , 27};
int n =8;



void swap(int *a, int *b )
{
int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;


}

void exchangeSort()
{

    for(int i=0; i<n-1; i++) {

        for(int j=i+1; j<n; j++){

            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }



}

void printData()
{
    for(int q=0; q<n; q++){
        printf("%d \t",arr[q]);
    }
    printf("\n");
}


int main()
{
    printf("Before sort \n");
    printData();

    exchangeSort();

    printf("After sort \n");
    printData();

return 0;
}
