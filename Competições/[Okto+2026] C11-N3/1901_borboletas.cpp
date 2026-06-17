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
    cin >> n;

    int m[n][n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }

    set<int> e;
    int x, y;
    while (cin >> x >> y)
    {
        e.insert(m[x-1][y-1]);
    }
    
    cout << e.size() << '\n';

    return 0;
}