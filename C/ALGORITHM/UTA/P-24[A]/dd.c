#include<stdio.h>

int main()
{
    int n;
    long long x, c = 0;

    // Read the number of items and the available amount x
    scanf("%d %lld", &n, &x);

    int a[n], b[n];

    // Read the cost of each item
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Read the available quantity of each item
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    // Main logic to calculate maximum number of items that can be bought
    for(int i = 0; i < n; i++)
    {
        long long r = x / a[i];  // Calculate how many items can be bought with remaining x
        long long cb;

        // Check if we have enough stock
        if(r < b[i]){
            cb = r;  // Buy only what we can afford
        } else {
            cb = b[i];  // Buy all available stock
        }

        c += cb;          // Update total count of items bought
        x -= cb * a[i];   // Decrease the amount of money left
    }

    // Print the total number of items bought
    printf("%lld\n", c);
    return 0;
}
