#include <stdio.h>
#include <limits.h>

#define nINF INT_MIN

int main() {
    int t, n;
    int x[100001]; // Array for student scores
    scanf("%d", &t); // Reading the number of test cases

    while (t--) {
        scanf("%d", &n); // Number of students

        // Reading the first score and initializing min and max
        scanf("%d", &x[0]);
        int mn = x[0], mx = x[0];
        int maxDifference = nINF;

        // Reading remaining scores and computing the result
        for (int i = 1; i < n; i++) {
            scanf("%d", &x[i]);
            maxDifference = (mx - x[i] > maxDifference) ? mx - x[i] : maxDifference;
            mx = (x[i] > mx) ? x[i] : mx;
            mn = (x[i] < mn) ? x[i] : mn;
        }

        printf("%d\n", maxDifference);
    }

    return 0;
}
