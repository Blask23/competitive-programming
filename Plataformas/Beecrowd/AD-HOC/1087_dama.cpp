// Problema: 1087 - Dama
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Por Fábio Dias Moreira  Brasil
// Link: https://judge.beecrowd.com/pt/problems/view/1087
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int x1, y1, x2, y2;

    while (true)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1+y1+x2+y2 == 0)
            break;

        if(x1==x2 && y1==y2)
            cout << 0 << '\n';
        else if( x1 == x2 || y1 == y2 || max(x1,x2)-min(x1,x2) == max(y1,y2)-min(y1,y2)){
            cout << 1 << '\n';
        }else
            cout << 2 << '\n';
    }
    
    

    return 0;
}