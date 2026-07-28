// C++ program to find the missing coin sum
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum sum which we cannot
// construct using given coins
int minCoinSum(vector<int> &coins) {

    // sort the coins in ascending order of values
    sort(coins.begin(), coins.end());

    // to store maximum value of next coin
    int val = 1;

    for(auto i:coins) {

        // if current coin is greater than val
        // then val can't be formed
        if(i > val)
            return val;

        // else update the minimum coin sum
        val += i;
    }

    return val;
}

int main() {
    
    int n;
    cin >> n;

    vector<int> coins(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    
    cout << minCoinSum(coins);
    return 0;
}