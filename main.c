#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {4, 2, 7, 10, 1};
    int temp;


    for(int temp = 1 ; temp < 6; temp++)
        for(int i = 0; i < 5; i++)
            if(array[i] > array[i + 1])
    {
        temp = dizi[i];
        array[i] = array[i + 1];
        array[i + 1] = temp  ;
    }

    for(int i = 0; i < 5; i++)
        printf("%d\t",array[i]);
}
