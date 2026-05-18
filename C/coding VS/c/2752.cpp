#include <stdio.h>
int main() {
    char phrase[51] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", phrase);
    printf("<%30s>\n", phrase);
    printf("<%.20s>\n", phrase);
    printf("<%-20s>\n", phrase);
    printf("<%-30s>\n", phrase);
    printf("<%.30s>\n", phrase);
    printf("<%30.20s>\n", phrase);
    printf("<%-30.20s>\n", phrase);
    return 0;
}
