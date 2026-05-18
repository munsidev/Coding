 /*A record contains name of cricketer,his age,number of the test matches that he has played and the average
  runs that he has scored in each test match.Create an array of structure to hold records of 20 such cricketer 
  and then write a program to read these records.*/

  #include<stdio.h>
  #include<string.h>

  typedef struct cricketer
  {
    char name[20];
    int age;
    int NoOfMatch;
    float average;
  }cric;

   void print(cric*n,int size)
  {
    for(int i=0;i<size;i++)
    {
        printf("The %d no of cricketer details.\n",i+1);
        printf("Name : %s\n",n[i].name);
        printf("Age : %d\n",n[i].age);
        printf("Matches : %d\n",n[i].NoOfMatch);
        printf("Average : %0.2f\n",n[i].average);
        printf("\n");
   
    }
    return;
  }

  void scan(cric*n,int size)
  {
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d no of cricketer details.\n",i+1);
        printf("Name: ");
        scanf("%s",n[i].name);
        //scanf("%[^\n]s",n[i].name);
        //fgets(n[i].name,20,stdin);
        //gets(n[i].name);
        printf("Age: ");
        scanf("%d",&n[i].age);
        printf("Matches: ");
        scanf("%d",&n[i].NoOfMatch);
        printf("Average: ");
        scanf("%f",&n[i].average);
        printf("\n");
    
    }
    return;
  }
  
   int main()
  {
    int n;
    printf("Enter the number of cricketer :  ");
    scanf("%d",&n);
    cric c[n];
    scan(c,n);
    print(c,n);
    return 0;
  }