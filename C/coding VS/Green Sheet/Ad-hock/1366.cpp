#include <stdio.h>
int main() {
	int i, N, T, Q;
	while(1)
	{
		scanf("%d", &N);
		if(N == 0) break;
		else
		{
			int ACUM = 0;
			for(i = 1; i <= N; i++)
			{
				scanf("%d %d", &T, &Q);

				if(Q % 2 == 0) ACUM += Q;
				else ACUM += Q - 1;
			}

			printf("%d\n", ACUM / 4);
		}
	}
    return 0;
}