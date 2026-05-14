// Problema: 11369 - Shopaholic
// Plataforma: vjudge/UVA
// Categoria:
// Origem:
// Link: https://vjudge.net/problem/UVA-11369
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

    while (n--)
    {
        int c;
        cin >> c;

        vector<int> vet(c);

        for (size_t i = 0; i < c; i++)
            cin >> vet[i];
        
        sort(vet.rbegin(), vet.rend());

        int d = 0;
        for (size_t i = 2; i < c; i+=3)
            d += vet[i];
        
        cout << d << '\n';
        
        
    }
    

    return 0;
}