#include <bits/stdc++.h>
using namespace std;

int main() {
    // Vector to store the power of enemies in each of the 11 circles
    vector<int> enemy(11);
    int p, a, b;  // p: initial power, a: number of skips, b: number of recharges

    // Input the power of each enemy in the 11 circles
    for(int i = 0; i < 11; i++) cin >> enemy[i];
    
    // Input initial power, number of skips, and number of recharges
    cin >> p >> a >> b;
    
    // Total power considering recharges (assuming each recharge multiplies the initial power)
    int total = p + p * b;
    bool flag = true;  // Flag to determine if Abhimanyu can cross all circles
    bool skip = false; // Flag to determine if a skip was used

    // Loop through each of the 11 circles
    for(int i = 0; i < 11; i++){
        if(i == 3 || i == 7){
            // Special case for regenerating enemies at positions 3 and 7 (0-based index)
            // The regenerating enemy adds half of the previous enemy's power to its own
            if(total < enemy[i] + (enemy[i-1] / 2)){
                if(a > 0){
                    // Use a skip if available
                    a--;
                    skip = true;
                }
                else{
                    // If no skips are left, Abhimanyu loses
                    flag = false;
                    break;
                }
            }
            if(skip) skip = false;  // Reset the skip flag if it was used
            else
                // Deduct the combined power of the regenerating enemy and half of the previous enemy's power
                total -= enemy[i] + (enemy[i-1] / 2);
        }
        else{
            // Normal enemy case
            if(total < enemy[i]){
                if(a > 0){
                    // Use a skip if available
                    a--;
                    skip = true;
                }
                else{
                    // If no skips are left, Abhimanyu loses
                    flag = false;
                    break;
                }
            }
            if(skip) skip = false;  // Reset the skip flag if it was used
            else
                // Deduct the power of the enemy from Abhimanyu's total power
                total -= enemy[i];
        }
    }
    
    // Output the result based on the flag
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

// Test Case 1:
// Input:
// 1 2 3 4 5 6 9 8 9 10 11
// 55 2 0
// Output: Yes

// Test Case 2:
// Input:
// 1 2 8 4 5 6 9 8 9 10 11
// 10 1 0
// Output: No
