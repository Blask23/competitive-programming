// Problema: 2489 - Flecha no Coelho
// Plataforma: beecrowd
// Categoria: matematica (nivel 2)
// Origem: Por João Marcos Salvanini Bellini de Moraes, IFSULDEMINAS Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2489
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265

int main() {
    fastio;

    double a, d, r;

    while (cin >> a >> d >> r)
    {
        double h = tan((90-r) * PI / 180.0) * d;
        cout << fixed << setprecision(4) << a-h << '\n';
    }
    

    return 0;
}