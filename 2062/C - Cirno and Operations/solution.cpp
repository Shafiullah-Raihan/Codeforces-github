#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int array_size;
        cin >> array_size;
        vector<int> arr(array_size);
        for (int i = 0; i < array_size; i++) {
            cin >> arr[i];
        }
 
        // In case there is only one element, just return it
        if (array_size == 1) {
            cout << arr[0] << endl;
            continue;
        }
 
        // Initialize the max_sum with the sum of all elements
        int max_sum = accumulate(arr.begin(), arr.end(), 0LL);
 
        // Try different transformation steps
        for (int step_count = 1; step_count <= array_size - 1; step_count++) {
            vector<int> transformed_arr = arr;
            map<int, vector<int>> diff_map; // Map to store difference arrays at each step
 
            // Perform transformations for 'step_count' times
            for (int step = 0; step < step_count; step++) {
                            if (transformed_arr.size() <= 1) break;  // No need to continue if only one element is left
                        
                            // Reverse the array if the first element is greater than the last element
                            if (transformed_arr.front() > transformed_arr.back()) {
                                reverse(transformed_arr.begin(), transformed_arr.end());
                            }
                        
                            // Compute the differences and update transformed_arr
                            vector<int> differences;
                            for (int i = 0; i < transformed_arr.size() - 1; i++) {
                                differences.push_back(transformed_arr[i + 1] - transformed_arr[i]);
                            }
                        
                            // Use the differences for the next transformation step
                            transformed_arr = differences;
                        }
 
            // Sum the elements in the transformed array
            int current_sum = accumulate(transformed_arr.begin(), transformed_arr.end(), 0LL);
 
            // Update max_sum if the current sum is greater
            max_sum = max(max_sum, current_sum);
        }
 
        cout << max_sum << endl;
    }
    return 0;
}