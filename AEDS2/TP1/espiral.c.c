#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int a, d, f, g, h, x, y, n;

	x=y=h=0;
	d=f=1;
	
	scanf("%d", &n);

	for (a=1; a<=n; a++) 
	{
		if (a%2==0)
		{
						
			if(d%2==0)
			{
				for (g=0; g<d; g++)
				{
				
					x++;
					h++;

					if (h==n)
					{
						printf("\n(%d,%d)", x, y);
						return 0;
					}
				}
			}
			
			else 
			{
				for (g=0; g<d; g++)
				{
					x--;
					h++;

					if (h==n)
					{
						printf("\n(%d,%d)", x, y);
						return 0;
					}
				}
			}

			d++;
		}
		
		else 
		{
	
			if(f%2==0) 
			{
				for (g=0; g<f; g++)
				{
					y--;
					h++;

					if (h==n)
					{
						printf("\n(%d,%d)", x, y);
						return 0;
					}
				}
			}
			
			else
			{
				for (g=0; g<f; g++)
				{
					y++;
					h++;

					if (h==n)
					{
						printf("\n(%d,%d)", x, y);
						return 0;
					}
				}
			}
		
			f++;
		}

	}
	return 0;
}
