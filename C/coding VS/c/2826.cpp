#include <stdio.h>
#include <string.h>
int main(){
	char str1[25],str2[25];
	scanf("%s %s",str1,str2);
	if (strcmp(str1,str2) > 0)
	{	
		printf("%s\n",str2);
		printf("%s\n",str1);
	}
	else if (strcmp(str1,str2)<0)
	{
		printf("%s\n",str1);
		printf("%s\n",str2);
	}
    return 0;
}