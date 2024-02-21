#include <stdio.h>
#include <stdlib.h>
int main(VOID)
{
  printf("/tThe Magic Number\n");                                                
  printf("Try to guess the magic number if 8 tries\n");
  srand(4568);
  int a = (rand() % 300) + 1;
  int b = 0; 
  int i=0;
  do 
  {
    printf("\n%d try\n",i+1);            
    printf("Type the number: ");
    scanf("%d", &b);
    i++;
    if (b == a) 
    {
	printf("\nRIGHT!");  
	return 0;                         
    }
    else if (i==8) 
	printf("\nFAILURE");
	else if (b < a) 
	printf("Try to guess a bigger number\n");           
    else 
	printf("Try to guess a smaller number \n");
  }
  while (b != a , i<8);
  return 0;                                     
} 
