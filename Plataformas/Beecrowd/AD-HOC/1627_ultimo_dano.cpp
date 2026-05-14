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

        hp -= At;

        if(hp <= 0){
            cout << "Andre\n";
        }else{
            hp -= Bt;

            if(hp <= 0){
                cout << "Beto\n";
            }else{
                int t = 1;
                while (t++)
                {
                    cerr << hp << '\n';
                    cerr << t%Ad << ' ' << t%Bd << ' ' << t << '\n';
                            if (t%Ad == 0){
                                hp -= At;

                                if(hp <= 0){
                                    cout << "Andre\n";
                                    break;
                                }

                                continue;
                            }

                            if (t%Bd == 0){
                                hp -= Bt;

                                if(hp <= 0){
                                    cout << "Beto\n";
                                    break;
                                }
                                continue;
                            }

                }
            }
        }
            
        
            

        
        
        
    }
    
    

    return 0;
}