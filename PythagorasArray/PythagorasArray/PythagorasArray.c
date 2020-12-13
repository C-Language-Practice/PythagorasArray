#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char pythagoras[10] = { 'P','i', 't', 'a', 'g', 'o', 'r', 'a', 's', 'z' };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf_s("%c ", pythagoras[j]);
		}
		printf_s("\n");
		char temp = pythagoras[0];
		for (int k = 0; k < 9; k++)
		{
			pythagoras[k] = pythagoras[k + 1];
		}
		pythagoras[9] = temp;
	}
	return 0;
}