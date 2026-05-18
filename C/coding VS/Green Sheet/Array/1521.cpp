#include<iostream>
#include <stdio.h>
int main (){
	int i;
	int lista;
    int alunos[60];
	while (true)
	{
		scanf("%d", &lista);
		if (lista == 0)
			break;
		for (i = 1; i <= lista; ++i)
			scanf("%d", &alunos[i]);
		scanf("%d", &i);
		while (alunos[i] != i)
			i = alunos[i];
		printf("%d\n", i);
	}
    return 0;
}