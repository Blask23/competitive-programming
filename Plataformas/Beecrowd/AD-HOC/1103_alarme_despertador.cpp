// Problema: 1103 - Alarme Despertador
// Plataforma: Beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Maratona de Programação da SBC Brasil
// Link: Maratona de Programação da SBC Brasil


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int h1, h2, m1, m2;

    while (true)
    {
        cin >> h1 >> m1 >> h2 >> m2;

        if(h1+m1+h2+m2 == 0)
            break;

        h1 = (h1*60) + m1;
        h2 = h2*60 + m2;

        if(h1 > h2)
            cout << (24*60) - (h1-h2) << '\n';
        else
            cout << h2-h1 << '\n';
    }
    
    

    return 0;
}