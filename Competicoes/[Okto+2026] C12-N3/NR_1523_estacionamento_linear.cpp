#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, k;

    while (cin >> n >> k)
    {
        if(n+k == 0)
            break;
            
        vector<int>vagas;

        vector<pair<int,int>> vet(n);
        for (size_t i = 0; i < n; i++)
            cin >> vet[i].first >> vet[i].second;

        int in, out, pos, maiorOut = 0, last;
        bool flag = true;

        for (size_t i = 0; i < n; i++)
        {
            in = vet[i].first;
            out = vet[i].second;

            if(vagas.size() == 0){
                vagas.push_back(out);
            }
            else if(in >= vagas.back()){
                vagas.pop_back();

                while(vagas.size() > 0 && vagas.back() <= in){
                    vagas.pop_back();
                }

                if(vagas.size() > 0 && vagas.back() < out){
                    flag = false;
                }

                vagas.push_back(out);

            }else if(vagas.size() < k){
                vagas.push_back(out);
            }else{
                flag = false;
            }


        }

        if(vagas.size() > 0){
            for (size_t i = 1; i < vagas.size(); i++)
            {
                if(vagas[i-1] > vagas[i])
                    flag = false;
            }
            
        }
        
        cout << (flag ? "Sim" : "Nao") << '\n';
        
    }
    

    return 0;
}