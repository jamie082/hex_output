/* Hex Algorithm 
J Morrissey 
7/5/2021
*/

#include <stdio.h>

#define LIMIT_2 28

/* j, k, l, m, n, o */

int main (void)
{
	
	int p = 0;

	char alphabet[LIMIT_2] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'w', 'y', 'z', '\0' };

	char array[ ] = { 'A', 'B', 'C', 'D', 'E', 'F', '\0' };
	int k_2 = 61;
	int x = 97;
	int u = 0;

	while (p <= 26 && k_2 <= 79 && x <= 123 && p <= LIMIT_2) // k_2 <= 79	
	{
		printf("\n%c\t%d", alphabet[p], x);
		printf("\t%d", k_2);	

		if (k_2 == 70)
		{
			while (u <= 5)
			{
				printf("\n");
				printf("\t\t6%c", array[u]);
				u++;
			}
		}
		
		x++;
		p++;
		k_2++;
	}
	
	puts("\n");

	return 0;
}

