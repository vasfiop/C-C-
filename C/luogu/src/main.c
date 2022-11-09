#include <stdio.h>
#include <include.h>

int main()
{
	int a, b, c, d;
	a = b = c = d = 0;
	for (a = 1; a <= 224; a++)
	{
		for (b = 1; b <= 224; b++)
		{
			for (c = 1; c <= 224; c++)
			{
				for (d = 1; d <= 224; d++)
				{
					if (a + b + c + d == 225 && a + d == 135 && b + c == 90 && a + b == 113 && c + d == 112)
						printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c, d);
				}
			}
		}
	}

	return 0;
}