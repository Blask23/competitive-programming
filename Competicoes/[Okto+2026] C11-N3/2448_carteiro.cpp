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

    int n, m;
    cin >> n >> m;

    map<int,int> distancia;

    int numero;
    for (size_t i = 0; i < n; i++)
    {
        cin >> numero;
        distancia.insert({numero,i});
    }


    int ans = 0;
    int pos = distancia.begin()->first;
    for (size_t i = 0; i < m; i++)
    {
        cin >> numero;
        ans += max(distancia[numero],distancia[pos]) - min(distancia[numero],distancia[pos]);
        pos = numero;
    }
    
    cout << ans << '\n';

    return 0;
}