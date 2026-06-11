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

    int n, q;
    cin >> n >> q;

    vector<vector<int>> sum(n, vector<int>(n+1,0));
    for (size_t i = 0; i < n; i++)
    {
        int aux = 0;
        char c;
        for (size_t j = 1; j <= n; j++)
        {
            cin >> c;

            if(c == '*')
                aux++;

            sum[i][j] = aux;

        }
        
    }

    int x1,x2,y1,y2;
    for (size_t i = 0; i < q; i++)
    {
        cin >> y1 >> x1 >> y2 >> x2;
        int ans = 0;
        for (size_t i = y1-1; i < y2; i++)
        {
            ans += sum[i][x2] - sum[i][x1-1];
        }
        cout << ans << '\n';
    }

    return 0;
}