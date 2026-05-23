// Problema: 1661- Comércio de Vinhos na Gergóvia
// Plataforma: Beecrowd
// Categoria: Paradigmas (Nível 5)
// Origem: Contest Local, Universidade de Ulm - Alemanha
// Link: https://judge.beecrowd.com/pt/problems/view/1661;
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    ll n;
    
    while (true)
    {
        cin >> n;

        if(n == 0)
            break;

        vector<ll> vet(n);
        cin >> vet[0];
        ll ans = abs(vet[0]);
        for (size_t i = 1; i < n; i++)
        {
            cin >> vet[i];
            vet[i] += vet[i-1];
            ans += abs(vet[i]);
        }
        
        cout << ans << '\n';
    }
    
    

    return 0;
}