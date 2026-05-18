#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    int n;
    scanf("%d",&n); // Read the number of elements

    long long a[n], b[n], c[n]; // Declare three arrays of size n

    // Read elements into array 'a'
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }

    // Read elements into array 'b'
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &b[i]);
    }

    // Multiply corresponding elements of 'a' and 'b', store in 'c'
    for(int i=0; i<n; i++)
    {
        c[i] = a[i] * b[i]; // Important: element-wise multiplication
    }

    // Sort the resulting array 'c' in descending order
    sort(c, c+n, greater<long long>()); // Important: sort in descending order

    // Output the sorted array
    for(int i=0; i<n; i++)
    {
        printf("%lld ", c[i]); // Important: print each element
    }

    printf("\n"); // New line at the end
    return 0;
}
