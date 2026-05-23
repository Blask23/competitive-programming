// Problema: 3041 - Distribuição de Artigos
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por Gerson Groth, URI Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/3041
// Assunto:

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    fastio;

    int n;

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        vector<pair<int, int>> vet(n);
        queue<int> f;

        for (int i = 0; i < n; i++)
        {
            cin >> vet[i].second;
            vet[i].first = 0;

            if(vet[i].second>0)
                f.push(i);
        }

        int a;
        cin >> a;

        int b = 0;

        for(auto i : vet)
            b+=i.second;

        if ( b < a)
            cout << "Impossible\n";
        else
        {   

            for (int i = 0; i < a; i++)
            {
                
                vet[f.front()].first++;

                if(vet[f.front()].first == vet[f.front()].second)
                    f.pop();
                else{
                    int aux = f.front();
                    f.pop();
                    f.push(aux);
                }
            }
            
            sort(vet.rbegin(), vet.rend());

            for(auto i : vet)
                cout << i.first << '\n';

        }

    }

    return 0;
}