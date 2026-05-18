#include <stdio.h>

int main() {
    int N, M;
    
    while (1) {
        // Read N and M
        scanf("%d %d", &N, &M);
        
        // End of input check
        if (N == 0 && M == 0)
            break;
        
        // Initialize count array with zeros
        int count[10001] = {0};  // Assuming N ≤ 10000, we use index 1 to 10000
        
        // Read the M ticket numbers and count their occurrences
        for (int i = 0; i < M; i++) {
            int ticket;
            scanf("%d", &ticket);
            count[ticket]++;
        }
        
        // Count how many tickets have clones
        int cloneCount = 0;
        for (int i = 0; i <= N; i++) {
            if (count[i] > 1) {
                cloneCount+=count[i]-1;
            }
        }
        
        // Print the result for the current test case
        printf("%d\n", cloneCount);
    }
    
    return 0;
}

