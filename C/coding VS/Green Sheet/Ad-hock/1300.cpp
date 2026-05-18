#include <stdio.h>
int main (){
	int n;
	while (scanf("%d", &n) != EOF)
		printf("%c\n", !(n % 6) ? 'Y' : 'N');

	return 0;
}
