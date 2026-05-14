// Problema: 1076 - Foreign Exchange
// Plataforma: vjudge/UVA
// Categoria: greedy
// Origem:
// Link: https://vjudge.net/problem/UVA-10763
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

    while (true)
    {
        
        cin >> n;

        if(n == 0)
            break;

        vector<pair<int,int>> vet;
        vector<pair<int,int>> vet2;
        int chave, valor;
        for (int i = 0; i < n; i++)
        {
            cin >> chave >> valor;
            vet.push_back({chave,valor});
            vet2.push_back({valor,chave});
        }

        sort(all(vet));
        sort(all(vet2));


        cout << (vet == vet2 ? "YES" : "NO") << '\n';
        
    }

    

    return 0;
}