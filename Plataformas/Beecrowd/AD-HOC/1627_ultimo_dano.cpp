// Problema: 1627 - Último Dano
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 3)
// Origem: Por Cristhian Bonilha, UTFPR Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/1627
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;
    
    int t;
    cin >> t;

    while (t--)
    {
        int At, Ad, Bt, Bd;
        cin >> At >> Ad >> Bt >> Bd;

        int hp;
        cin >> hp;

        bool fa = true;
        bool fb = true;
        int aux1 = Ad, aux2 = Bd;

        while (true)
        {
            if(fa){
                hp -= At;

                if(hp<=0){
                    cout << "Andre\n";
                    break;
                }

                fa = false;
                aux1 = Ad;
            }

            if(fb){
                hp -= Bt;

                if(hp<=0){
                    cout << "Beto\n";
                    break;
                }

                fb = false;
                aux2 = Bd;
            }

            if(aux2 < aux1){
                fb = true;
                aux1 -= aux2;
            }else if(aux1 < aux2){
                fa = true;
                aux2 -= aux1;
            }else{
                fa=true;
                fb=true;
            }

        }
        
       
    }
    
    

    return 0;
}