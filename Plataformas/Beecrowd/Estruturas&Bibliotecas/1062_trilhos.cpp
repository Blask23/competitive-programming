// Problema: 1062 - Trilhos
// Plataforma: beecrowd
// Categoria: Estruturas e Bibliotecas (nivel 5)
// Origem: Autor Desconhecido
// Link: https://judge.beecrowd.com/pt/problems/view/1062
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

        while (true)
        {
            vector<int> vet(n);

            cin >> vet[0];

            if(vet[0] == 0){
                cout << '\n';
                break;}
            
            for (int i = 1; i < n; i++)
                cin >> vet[i];
            

            stack<int> pilha;
            int j = 0;
            for (int i = 0; i < n; i++)
            {
                pilha.push(i+1);

                while (!pilha.empty() && pilha.top() == vet[j])
                {
                    pilha.pop();
                    j++;
                }
            }
            
            cout << (pilha.empty() ? "Yes\n" : "No\n");

        }
        
    }
    

    return 0;
}