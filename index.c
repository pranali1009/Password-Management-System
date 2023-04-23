#include<stdio.h>
void main()
{

printf("1) Add new password\n");
printf("2) Get password\n");
printf("3) Update password\n");
printf("4) Delete password\n");

int selectedOperation;
scanf("%d", &selectedOperation);

printf("\nUser selected the operation: %d", selectedOperation);
}