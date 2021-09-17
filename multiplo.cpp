#include <stdio.h>
#include <conio.h>

int main()
{
  int i,resto, cont;
  cont = 1;  
  for (i = 1;i <=20;i++)
  {
  	resto = i % 3;
  	if (resto == 0 && cont <= 5)    	
	{
		printf("%d\n",i);
		cont++;
	}
  }
  return 0;
}
