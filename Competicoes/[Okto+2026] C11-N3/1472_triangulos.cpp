// Problema:
// Plataforma:
// Categoria:
// Origem:
// Link:
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n;
    while (cin >> n)
    {
        vector<int> x(2*n + 1);
        int sum = 0;

        x[0] = 0;
        for (size_t i = 1; i <= n; i++)
        {
            cin >> x[i];
            x[i] += x[i-1];
        }
        sum = x[n]/3;
        for (size_t i = n+1; i <= 2*n; i++)
        {
            x[i] += x[i-1] + x[i-n] - x[i-n-1];
        }

        int l = 0;
        int ans = 0;
        for (size_t r = 0; r < 2*n; r++)
        {
            while(x[r] - x[l] > sum){
                l++;
            }

            if(l>n)
                break;

            if(x[r] - x[l] == sum)
                ans++;
        }
        
        cout << (ans>=3 ? ans/3 : 0) << '\n';
        
    }
    

    

    return 0;
}