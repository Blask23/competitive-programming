// Problema: 2835 - Elevador
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por OBI-Olimpíada Brasileira de Informatica Angola
// Link: https://judge.beecrowd.com/pt/problems/view/2835
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

    vector<int> vet(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    sort(all(vet));

    bool flag = true;

    if(vet[0] > 8)
        flag = false;
    else
        for (size_t i = 1; i < n; i++)
        {
            if(vet[i] - vet[i-1] > 8)
                flag = false;
        }

    

    cout << (flag ? 'S' : 'N') << '\n';
    
    
    

    return 0;
}