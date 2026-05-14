// Problema: 1222 - Concurso de Contos
// Plataforma: Beecrowd
// Categoria: Strings (Nível 6)
// Origem: Maratona de Programação da SBC Brasil
// Link: https://judge.beecrowd.com/pt/problems/view/1222
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, l, c;

    while (cin >> n >> l >> c)
    {
        int caracteresLinha = 0, linhas = 0;

        for (int i = 0; i < n; i++)
        {
            string aux;

            cin >> aux;

            if(caracteresLinha + aux.size() + 1 == c){
                linhas++;
                caracteresLinha = 0;

            }else if(caracteresLinha + aux.size() + 1 < c){
                caracteresLinha += aux.size() + 1;

            }else if(caracteresLinha + aux.size() == c){
                linhas++;
                caracteresLinha = 0;
                
            }else if(caracteresLinha + aux.size() > c){
                linhas++;
                caracteresLinha = 0;

                if(aux.size() + 1 < c){
                    caracteresLinha = aux.size() + 1;
                }else{
                    linhas++;
                    caracteresLinha = 0;
                }

            }
            
            
        }

        if(caracteresLinha != 0 && caracteresLinha != 1){
            linhas++;
        }

        cout << linhas/l + (linhas%l > 0 ? 1 : 0) << '\n';
        
    }
    

    

    return 0;
}