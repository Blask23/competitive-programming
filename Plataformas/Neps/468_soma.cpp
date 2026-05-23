// Problema: 468 - Soma (OBI 2019)
// Plataforma: Neps academy
// Categoria:
// Origem: OBI 2019
// Link: https://neps.academy/br/exercise/468
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, k;

    cin >> n >> k;

    vector<int> sum(n);

    cin >> sum[0];

    for (int i = 1; i < n; i++)
    {
        cin >> sum[i];
        sum[i]+=sum[i-1];
    }

    int qtd = 0;
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum[i] == k){
            int j = i;
            while (j<n && sum[i] + (sum[j]-sum[i]) <= k)
            {
                qtd++;
                j++;
            }
        }else if(i>0 && sum[i]-sum[i-1] == k){
            int j = i;
            int aux2 = sum[i]-sum[i-1];
            while (j<n && aux2 + (sum[j]-sum[i]) <= k)
            {
                qtd++;
                j++;
            }
        }else if(sum[i]-aux == k){
            int j = i;
            int aux2 = sum[i]-aux ;
            while (j<n && aux2 + (sum[j]-sum[i]) <= k)
            {
                qtd++;
                j++;
            }
        }

/*
        cerr << sum[i]-aux << '\n';
        if(sum[i]==k){
            qtd++;
        }
        
        if(i>0 && sum[i]-sum[i-1] == k){
            qtd++;
            aux = sum[i];
        }
        
        if(sum[i]-aux == k){
            qtd++;
        }
*/

    }
    
    cout << qtd << '\n';

    return 0;
}