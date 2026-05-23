// Problema: 2376 - Copa do Mundo
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 1)
// Origem: Por OBI - Olimpíada Brasileira de Informática 2010 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2376
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    queue<char> f;
    for (int i = 'A'; i <= 'P'; i++)
        f.push(i);

    int a,b;
    char t1, t2;
    for (size_t i = 0; i < 15; i++)
    {
        cin >> a >> b;

        t1 = f.front();
        f.pop();
        t2 = f.front();
        f.pop();

        if(a > b)
            f.push(t1);
        else
            f.push(t2);

    }
    
    cout << f.front() << '\n';
    
    

    return 0;
}