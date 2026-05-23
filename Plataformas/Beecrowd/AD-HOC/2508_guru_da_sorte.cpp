// Problema: 2805 - Guru da Sorte
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por Hamilton José Brumatto, UESC Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2508
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    map<char,int>mapa;

    mapa['a']=1;
    mapa['b']=2;
    mapa['c']=3;
    mapa['d']=4;
    mapa['e']=5;
    mapa['f']=6;
    mapa['g']=7;
    mapa['h']=8;
    mapa['i']=9;
    mapa['j']=1;
    mapa['k']=2;
    mapa['l']=3;
    mapa['m']=4;
    mapa['n']=5;
    mapa['o']=6;
    mapa['p']=7;
    mapa['q']=8;
    mapa['r']=9;
    mapa['s']=1;
    mapa['t']=2;
    mapa['u']=3;
    mapa['v']=4;
    mapa['w']=5;
    mapa['x']=6;
    mapa['y']=7;
    mapa['z']=8;

    string str;

    while (getline(cin, str))
    {
        int size = str.size();
        int sum = 0;
        for (size_t i = 0; i < size; i++)
        {
            if(mapa.find(tolower(str[i])) != mapa.end())
                sum += mapa[tolower(str[i])];
        }

        string aux = to_string(sum);

        while (true)
        {
            if(aux.size() == 1)
                break;

            sum = 0;
            for (int i = 0; i < aux.size(); i++)
            {
                sum += aux[i]-'0';
            }

            aux = to_string(sum);
        }
        
        
        

        cout << sum << '\n';
        
    }
    

    return 0;
}