// Problema: 1273 - Justificador
// Plataforma: https://judge.beecrowd.com/pt/problems/view/1273
// Categoria: strings (nivel 3)
// Origem: Por TopCoder* EUA
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
    bool flag = false;

    while (true)
    {
        cin >> n;

        if(n == 0)
            break;

        if(flag)
            cout << '\n';

        vector<string> vet(n);
        int maior = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> vet[i];
            
            if(maior < vet[i].size())
                maior = vet[i].size();

        }

        for (size_t i = 0; i < n; i++)
        {
            if(vet[i].size() < maior)
                for (size_t j = 0; j < (maior-vet[i].size()); j++)
                {
                    cout << ' ';
                }
            
            cout << vet[i] << '\n';
        }
        
        flag = true;
        
    }
    

    

    return 0;
}