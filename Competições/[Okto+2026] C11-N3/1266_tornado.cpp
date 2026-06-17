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
    while (true)
    {
        cin >> n;
        if(n == 0)
            break;

        int aux, dist = 0, ans = 0;
        bool f=false,l=false;
        for (size_t i = 0; i < n; i++)
        {
            cin >> aux;

            if(i == 0 && aux == 0)
                f = true;
            if(i==n-1 && aux == 0)
                l=true;
            
            if(aux == 1){
                ans += dist/4;
                dist = 0;
            }else{
                dist+=2;
            }
        }

        if(dist>4){
            ans += dist/4;
        }

        cout << (f&&l && n%2 ? ans+1 : ans) << '\n';
        
    }
    

    return 0;
}