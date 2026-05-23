// Problema: 2227 - Aeroporto
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2002 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2227
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int a, v, ind = 1;
    while (true)
    {
        cin >> a >> v;
        if(a+v == 0)
            break;

        if(ind > 1)
            cout << '\n';

        vector<int> aeroportos(a);
        int maior = 0;

        int a1, a2;
        for (int i = 0; i < v; i++)
        {
            cin >> a1 >> a2;
            aeroportos[a1-1]++;
            aeroportos[a2-1]++;

            if(maior < max(aeroportos[a1-1],aeroportos[a2-1]))
                maior =max(aeroportos[a1-1],aeroportos[a2-1]);
        }


        cout << "Teste " << ind << '\n';
        for (int i = 0; i < a; i++)
        {
            if(aeroportos[i] == maior){
                cout << i+1 << ' ';
            }
        }

        cout << '\n';
        ind++;
    }

    cout << '\n';
    
    

    return 0;
}