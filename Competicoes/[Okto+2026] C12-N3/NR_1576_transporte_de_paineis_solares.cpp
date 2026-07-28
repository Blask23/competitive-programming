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
    cin >> n;

    while (n--)
    {
        int p, c, f;
        cin >> p >> c >> f;

        vector<int> paineis(p);
        int sum = 0;

        for (size_t i = 0; i < p; i++)
        {
            cin >> paineis[i];
            sum += paineis[i];
        }

        sum = sum/c;
        int aux=0, ans = 0, caminhoesUsados = 0;

        
        for (size_t i = 0; i < p; i++)
        {
            if(aux + paineis[i] <= sum || caminhoesUsados == c-1){
                aux += paineis[i];
            }else{
                if(aux > ans){
                    ans = aux;
                }
                aux = paineis[i];
                caminhoesUsados++;
            }
        }

        if(aux > ans)
            ans = aux;
                

        cout << ans << ' ' << '$' << ans*c*f << '\n';
        
        
    }
    

    return 0;
}
