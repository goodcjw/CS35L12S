#include<stdio.h>

void printArray(int numbers[], int array_size)
{
    int i;
    for(i = 0; i < array_size; i++) {
        printf("%d  ", numbers[i]);
    }
    printf("\n");
}

void bubbleSort(int numbers[], int array_size)
{
    int i, j, temp;

    for(i = (array_size - 1); i > 0; i--) {
        for(j = 0; j < i; j++) {
            if(numbers[j] > numbers[j+1]) {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {3,2,4,1,5,8,7};
    printArray(a, 7);
    bubbleSort(a, 7);
    printArray(a, 7);
}
