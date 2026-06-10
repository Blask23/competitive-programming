// Problema: 2298 - Mini-Poker
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2005 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2298
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
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if(i!=0)
            cout << '\n';
        
        cout << "Teste " << i+1 << '\n';

        map<int, int> mapa;
        int aux;
        int pts;

        for (int i = 0; i < 5; i++)
        {
            cin >> aux;
            mapa[aux]++;
        }

        vector<pair<int, int>> vet;
        for (auto i : mapa)
            vet.push_back(i);

        sort(all(vet));

        if (vet.size() == 5)
        {
            if (vet[0].first != vet[1].first - 1)
            {
                cout << 0 << '\n';
            }
            else
            {
                bool flag = true;
                for (size_t i = 1; i < 5; i++)
                {
                    if (vet[i-1].first != vet[i].first - 1)
                    {
                        flag = false;
                    }
                }

                cout << (flag ? vet[0].first+200 : 0) << '\n';
            }
        }else if(vet.size() == 2 && max(vet[0].second, vet[1].second) == 4){

            if(vet[0].second > vet[1].second)
                cout << vet[0].first + 180 << '\n';
            else
                cout << vet[1].first + 180 << '\n';

        }else if(vet.size() == 2){

            if(vet[0].second > vet[1].second)
                cout << vet[0].first + 160 << '\n';
            else
                cout << vet[1].first + 160 << '\n';

        }else if(vet.size() == 3 && max(vet[0].second, max(vet[1].second, vet[2].second)) == 3){

            if(vet[0].second > vet[1].second && vet[0].second > vet[2].second)
                cout << vet[0].first + 140 << '\n';
            else if(vet[1].second > vet[0].second && vet[1].second > vet[2].second)
                cout << vet[1].first + 140 << '\n';
            else
                cout << vet[2].first + 140 << '\n';

        }else if(vet.size() == 3){
            int x = 0;
            int y = 0;

            for (size_t i = 0; i < 3; i++)
            {
                if(vet[i].second == 2){
                    y=x;
                    x = vet[i].first;
                }
            }
            cout << (3*x) + (2*y) + 20 << '\n';
            
        }else if(vet.size() == 4){
            int x = 0;

            for (size_t i = 0; i < 4; i++)
            {
                if(vet[i].second == 2){
                    x = vet[i].first;
                }   
            }
            cout << x << '\n';
        }
    }

    cout << '\n';

        return 0;
    }
