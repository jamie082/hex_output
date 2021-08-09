/* Hex Algorithm 
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
	int ppp = 1;
	char *asterisk = "*";

	while (p <= 26 && k_2 <= 88 && x <= 123 && p <= LIMIT_2 && ppp <= 6) // k_2 <= 79	
	{
		printf("\n%c\t", alphabet[p]);
		printf("%d", x);

		if (x == 105)
		{
			int n = 1;
			while (p <= 6 && n < 4)
			{
				printf("%s\n", asterisk);
				n++;
			}
		}

		printf("\t%d", k_2);	

		if (k_2 == 70)
		{
			int f = 1;

			while (f <= 6 && u <= 5)
			{
				printf("\n");
				printf("%d\t\t6%c", f++, array[u]);
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

