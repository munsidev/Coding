#include<stdio.h>
#include<string.h>
int main(){
    char string1[15];
    char string2[15];
    char string3[15];
    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);
    fgets(string3,sizeof(string3),stdin);
    string1[strcspn(string1, "\n")] = 0;
    string2[strcspn(string2, "\n")] = 0;
    string3[strcspn(string3, "\n")] = 0;
    if(strcmp(string1,"vertebrado")==0&&strcmp(string2,"ave")==0&&strcmp(string3,"carnivoro")==0){
        printf("aguia\n");
    }
    else if(strcmp(string1,"vertebrado")==0&&strcmp(string2,"ave")==0&&strcmp(string3,"onivoro")==0){
        printf("pomba\n");
    }
    else if(strcmp(string1,"vertebrado")==0&&strcmp(string2,"mamifero")==0&&strcmp(string3,"onivoro")==0){
        printf("homem\n");
    }
    else if(strcmp(string1,"vertebrado")==0&&strcmp(string2,"mamifero")==0&&strcmp(string3,"herbivoro")==0){
        printf("vaca\n");
    }
    else if(strcmp(string1,"invertebrado")==0&&strcmp(string2,"inseto")==0&&strcmp(string3,"hematofago")==0){
        printf("pulga\n");
    }
    else if(strcmp(string1,"invertebrado")==0&&strcmp(string2,"inseto")==0&&strcmp(string3,"herbivoro")==0){
        printf("lagarta\n");
    }
    else if(strcmp(string1,"invertebrado")==0&&strcmp(string2,"anelideo")==0&&strcmp(string3,"hematofago")==0){
        printf("sanguessuga\n");
    }
    else if(strcmp(string1,"invertebrado")==0&&strcmp(string2,"anelideo")==0&&strcmp(string3,"onivoro")==0){
        printf("minhoca\n");
    }
    return 0;
}