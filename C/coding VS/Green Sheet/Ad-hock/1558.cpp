#include<iostream>
#include <stdio.h>
#include <math.h>
int main (void)
{
	int n;
	int x, y;
	bool ans;
	unsigned s;
	while (scanf("%d", &n) != EOF)
	{
		x = 0;
		y = sqrt(n);
		ans = false;
		while (y >= x)
		{
			s = x * x + y * y;
			if (s == n)
			{
				ans = true;
				break;
			}
			else if (s  <  n)
				++x;
			else
				--y;
		}
		printf ("%s\n", ans ? "YES" : "NO");
	}
	return 0;
}