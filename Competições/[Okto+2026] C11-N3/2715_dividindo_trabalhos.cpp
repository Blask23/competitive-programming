// Problema:
// Plataforma:
// Categoria:
// Origem:
// Link:
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n;

    while (cin >> n)
    {
        vector<ll>x(n+1);
        x[0] = 0;

        for (size_t i = 1; i <= n; i++)
        {
            cin >> x[i];
            x[i] += x[i-1];
        }

        int l=n-1,r=n;
        ll menor = x[r];
        ll aux;
        while (l>0)
        {
            aux = x[r] - x[l];
            if(max(aux, x[l]) - min(aux, x[l]) < menor && max(aux, x[l]) - min(aux, x[l]) >= 0)
                menor = max(aux, x[l]) - min(aux, x[l]);

            l--;

        }
        
        cout << menor << '\n';
        
    }
    

    return 0;
}