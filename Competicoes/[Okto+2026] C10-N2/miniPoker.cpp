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

    for (int i = 0; i < n; i++)
    {
        map<int,int> mapa;
        vector<int>vet(5);

        for (int i = 0; i < 5; i++)
        {
            cin >> vet[i];
            mapa[vet[i]]++;
        }

        if(i>0)
            cout << '\n';

        cout << "Teste " << i+1 << '\n';
        
        if(mapa.size() == 5){
            sort(all(vet));
            
            bool flag = true;
            int menor = vet[0];
            for (int i = 1; i < 5; i++)
            {
                if(vet[i] < menor)
                    menor = vet[i];
                
                if(vet[i]-vet[i-1] != 1)
                    flag = false;
            }
            
            cout << (flag ? menor+200 : 0) << '\n';
            
        }else if(mapa.size() == 4){
            int p = 0;
            for(auto i : mapa){
                if(i.second == 2){
                    p = i.first;
                }
            }

            cout << p << '\n';
        }else if(mapa.size() == 3){
            //trio ou 2 pares

            bool t = false;
            int c, n1 = 0, n2;
            for(auto i : mapa){
                if(i.second == 3){
                    t = true;
                    c = i.first;
                }
                
                if(i.second == 2){
                    if(n1!=0)
                        n2 = n1;
                    
                    n1 = i.first;
                }
            }

            if(t){
                cout << c+140 << '\n';
            }else{
                cout << 3*(max(n1,n2)) + 2*(min(n1,n2)) + 20 << '\n';
            }
        }else if(mapa.size() == 2){
            //4 iguais ou trio+par

            bool flag = false;
            int q, t, p;

            for(auto i : mapa){
                if(i.second == 4){
                    flag = true;
                    q = i.first;
                }

                if(i.second == 3){
                    t = i.first;
                }

                if(i.second == 2){
                    p = i.first;
                }
            }

            if(flag){
                cout << q+180 << '\n';
            }else{
                cout << t+160 << '\n';
            }
        }else{
            cout << 0 << '\n';
        }

    }

    cout << '\n';
    

    return 0;
}       