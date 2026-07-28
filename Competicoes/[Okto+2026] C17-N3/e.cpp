#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, q;

    cin >> n >> q;

    vector<vector<int>> p(n, vector<int>(n+1, 0));

    char aux;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j < n+1; j++)
        {
            cin >> aux;

            if(aux == '.')
                p[i][j] += p[i][j-1];
            else
                p[i][j] += p[i][j-1 ] + 1;
        }
        
    }

    int y1, x1, y2, x2;
    for (size_t i = 0; i < q; i++)
    {
        cin >> y1 >> x1 >> y2 >> x2;
        int sum = 0;
        for (size_t j = y1-1; j < y2; j++)
        {
            sum += p[j][x2] - p[j][x1 - 1];
        }
        cout << sum << '\n';
    }
    
    

    return 0;
}