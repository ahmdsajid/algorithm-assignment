#include<stdio.h>
int Binary_Search(int array[],int array_size,int searching_value)
{
 int left_side = 0 , right_side = array_size-1,middle_side;
 while(left_side <= right_side)
 {
 middle_side = left_side + (right_side - left_side)/2;
 if(array[middle_side] == searching_value)
 {
 return middle_side;
 }else if(array[middle_side] < searching_value)
 {
 left_side = middle_side+1;
 }else
 right_side = middle_side-1;
 }
 return -1;


}
int main()
{

 printf("BINARY SEARCH ALGORITHM\n" );
 int array_size;
 printf("enter array size (at least-15) = ");
 scanf("%d",&array_size);
 if(array_size <15)
 {
 printf("Array Size must be at least 15.\n");
 return 1;
 }
 int array[array_size];
 printf("\nEnter sorting integers:\n",array_size);
 for(int i = 0; i < array_size; i++)
 {
 scanf("%d",&array[i]);
 }
 int searching_value;
 printf("Enter search value :");
 scanf("%d",&searching_value);
 printf("Array's element is :");
 for(int x = 0; x<array_size; x++)
 {
 printf(" %d",array[x]);
 if(x<array_size - 1)
 {
 printf(" ");
 }
 }printf("\n");
 printf("Searching the value : %d\n",searching_value);
 int rst = Binary_Search(array,array_size,searching_value);
 if(rst !=-1)
 printf(" Finally Binary search : value %d found at array[%d]index\n",searching_value,rst);
else
printf("Finally Binary Search : Value %d not found inarray\n",searching_value);
return 0;

}
