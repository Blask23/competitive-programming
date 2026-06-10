// Problema: 60 - Sanduíche
// Plataforma: Neps Academy
// Categoria: 
// Origem: Exercicio adicionado por Thiago Nepomuceno
// Link: https://neps.academy/br/exercise/60
// Assunto: two pointers


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, d;
    cin >> n >> d;
    vector<int> c(2*n);
    ll sum = 0;

    for (size_t i = 0; i < n; i++){
        cin >> c[i];
        c[n+i] = c[i];
        sum += c[i];
    }
    
    int p1=0;
    int ans = 0;
    sum = 0;

    for (size_t i = 0; i < 2*n; i++)
    {
        sum += c[i];

        while (sum > d || i-p1+1 > n)
        {
            sum -= c[p1];
            p1++;
        }
        
        if(sum == d && p1 < n)
            ans++;
    }
    

    cout << ans << '\n';
    

    return 0;
}