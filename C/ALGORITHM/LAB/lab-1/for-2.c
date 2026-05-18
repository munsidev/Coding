#include <stdio.h> // Include standard input-output header file

int main()
{
    int i, n; // Declare variables for loop counter and upper limit

    printf("Print all even numbers till: "); // Prompt the user for input
    scanf("%d", &n); // Read the upper limit from the user

    printf("Even numbers from 1 to %d are: \n", n); // Display the range to be printed

    for(i = 1; i <= n; i++) // Loop from 1 to the upper limit
    {
        if(i % 2 == 0) // Check if the current number is even
        {
            printf("%d\n", i); // Print the even number
        }
    }

    return 0; // Indicate successful program termination
}
