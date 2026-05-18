#include <iostream>
#include <vector>
#include <algorithm>  // For C++ sort

using namespace std;

// Function to perform binary search to find the number of warriors whose strength is <= x
int countWarriors(const vector<int>& warriors, int x) {
    int low = 0, high = warriors.size();
    
    // Binary search for the first element greater than x
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (warriors[mid] <= x)
            low = mid + 1;
        else
            high = mid;
    }
    
    return low; // Number of warriors with strength <= x
}

int main() {
    int n, q;

    // Reading the number of warriors
    cin >> n;
    
    vector<int> warriors(n);
    
    // Reading the warriors' strengths
    for (int i = 0; i < n; i++) {
        cin >> warriors[i];
    }
    
    // Sorting warriors' strengths using C++ sort function
    sort(warriors.begin(), warriors.end());
    
    // Reading the number of queries
    cin >> q;
    
    // Processing each query
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        
        // Find the count of warriors whose strength <= x
        cout << countWarriors(warriors, x) << endl;
    }

    return 0;
}
