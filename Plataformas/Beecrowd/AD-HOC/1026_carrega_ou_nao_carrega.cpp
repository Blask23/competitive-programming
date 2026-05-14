// Problema: 1026 - Carrega ou não Carrega?
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 5)
// Origem: Por Monirul Hasan Tomal, SEU Bangladesh
// Link: https://judge.beecrowd.com/pt/problems/view/1026
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    ll n1, n2;

    while (cin >> n1 >> n2)
    {
        if((n1%2 == 0 && n2%2 == 0) ||  (n1%2 == 0 && n2%2 != 0) || (n1%2 != 0 && n2%2 == 0))
            cout << max(n1,n2) - min(n1,n2) << '\n';
        else
            cout << n1+n2 << '\n';
    }
    

    

    return 0;
}