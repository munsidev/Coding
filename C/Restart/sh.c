#include <stdio.h>
int main()
{
    long long id[50], marks[50], search, t;
    int count;
    printf("Enter total students  : \n");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter %dst student ID: \n", i + 1);
        scanf("%lld", &id[i]);

        printf("Enter %dst student Marks: \n", i + 1);
        scanf("%lld", &marks[i]);
    }

    printf("Input your desired Id for mark: \n");
    scanf("%lld", &search);
    printf("Checking ID...\n");
    int h = 0;
    for (int i = 0; i < count; i++)

    {
        if (search == id[i])

        {
            h++;
            printf("%lld ID is valid\n", search);
            break;
        }
    }
    if (h == 1)
    {
        for (int i = 0; i < count; i++)

        {

            if (id[i] == search)
            {
                printf("Your obtained Mark is: %d\n", marks[i]);
                break;
            }
        }
    }
    else
        printf("Invalid ID\n");


    return 0;
}