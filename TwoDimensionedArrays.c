#include <stdio.h>

int main()
{
//array declaration
int size=5;
int array1[size][size];
  
//initialize array
for(int i=0; i<size; i++)
{
for(int j=0; j<size; j++)
{
array1[i][j] = i+j;
}
}
  
//display the array using subscript
printf("\nThe array using subscript is: \n\n");
for(int i=0; i<size; i++)
{
for(int j=0; j<size; j++)
{
//display array element using subscript
printf("%4d", array1[i][j]);
}
printf("\n");
}

int array2[size][size];  
for(int i=0; i<size; i++)
{
for(int j=0; j<size; j++)
{
*(*(array2 + i) + j) = i+j;
}
} 

//display the array using pointer
printf("\nThe array using pointer is: \n\n");
for(int i=0; i<size; i++)
{
for(int j=0; j<size; j++)
{

//display array element using pointer
printf("%4d", *(*(array2 + i) + j));
}
printf("\n");
}  
return 0;
}