// Problema: 2588 - Jogo dos Palíndromos
// Plataforma: beecrowd
// Categoria: strings (nivel 3)
// Origem: Por Ricardo Martins, IFSULDEMINAS Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2588
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    string str;

    while (cin >> str)
    {
        map<char,int> mapa;
        for (int i = 0; i < str.size(); i++)
        {
            mapa[str[i]]++;
        }
        
        int cnt = 0;
        for(auto i : mapa){
            if(i.second %2 != 0){
                cnt++;
            }
        }

        cout << max(0, cnt-1) << '\n';
    }
    

    return 0;
}