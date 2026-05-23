/*
***********************
    Não resolvido
***********************
*/

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
        vector<int> vet(n);
        int sum = 0;
        int maior = 0;
        for (size_t i = 0; i < n; i++){
            cin >> vet[i];
            sum += vet[i];

            if(vet[i] > maior)
                maior = vet[i];
        }

        if(sum%n != 0){
            cout << "-1\n";
        }else{
            cout << maior - sum/n + 1 << '\n';
        }
        
    }
    

    return 0;
}