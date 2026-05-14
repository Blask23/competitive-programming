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

    int c1,c2,c3;
    vector<int> vet(3);

    while (true)
    {
        cin >> vet[0] >> vet[1] >> vet[2];

        if(accumulate(vet.begin(), vet.end(), 0) == 0)
            break;

        if(accumulate(vet.begin(), vet.end(), 0) == 39){
            cout << '*' << '\n';
        }
        else{

            map<int,int> mapa;
            
            for (size_t i = 0; i < 3; i++)
            {
                if(mapa.find(vet[i]) == mapa.end())
                    mapa.insert(vet[i], 1);
                else
                    mapa[vet[i]]++;
            }
            

            if(mapa.size() == 1){
                cout << vet[0]+1 << ' ' << vet[0]+1 << ' ' << vet[0]+1 << '\n';
            }else if(mapa.size() == 2){

                sort(all(vet));
                if(mapa.find(vet[0])->second == 2){
                    if(vet[0] == 12 && vet[1] == 13){
                        cout << 1 << ' ' << 13 << ' ' << 13 << '\n';
                    }else
                        cout << vet[3]+1 << ' ' << vet[0] << ' ' << vet[0] << '\n';
                }else{

                }

               
            }else{
                cout << 1 << ' ' << ' ' << 1 << ' ' << 2 << '\n';
            }
        }

        

        
    }
    

    return 0;
}