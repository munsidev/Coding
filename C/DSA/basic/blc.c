#include <stdio.h>



int main() {

    // Write C code here

    struct student

    {

        int age;

        char name[10];

        int *next;

    };

    

    struct student s[10];

    

    s[0].age =20 ;

    s[0].name= "khalid" ;

    s[0]->next = &s[1].age;

    

    s[1].age =20 ;

    s[1].name= "khalid" ;

    

    s[2].age =20 ;

    s[2].name= "khalid" ;

    

    int i, a[3], *s;

    

    a[0] = 10;

    for(i=0;i<3;i++)

    {

        scanf("%d",&a[i]);

    }

    

    *s = &a[1]

    printf("last value of data %d",a[2]);

    

    printf("last value of data %d",a[2]);

    

    //printf("Try programiz.pro");



    return 0;

}