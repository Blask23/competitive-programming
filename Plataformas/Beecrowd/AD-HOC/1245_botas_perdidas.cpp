// Problema: 1245 - Botas Perdidas
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 5)
// Origem: Maratona de Programação da SBC Brasil
// Link: https://judge.beecrowd.com/pt/problems/view/1245
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
        map<int,int> esquerda, direita;
        int aux;
        char c;
        for (size_t i = 0; i < n; i++)
        {
            cin >> aux >> c;

            c == 'E' ? esquerda[aux]++ : direita[aux]++;
        }
        
        int pares = 0;
        if(esquerda.size() > direita.size()){
            for(auto i : esquerda){
               if(direita[i.first] == i.second){
                pares += i.second;
               }else{
                pares += min(i.second, direita[i.first]);
               }
            }
        }else{
            for(auto i : direita){
               if(esquerda[i.first] == i.second){
                pares += i.second;
               }else{
                pares += min(i.second, esquerda[i.first]);
               }
            }
        }
        cout << pares << '\n';
    }
    

    return 0;
}