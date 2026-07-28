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

map<char, double> jingles;


int main() {
    fastio;
    string str;

    jingles.insert({'W', 1.0});
    jingles.insert({'H', 1.0/2.0});
    jingles.insert({'Q', 1.0/4.0});
    jingles.insert({'E', 1.0/8.0});
    jingles.insert({'S', 1.0/16.0});
    jingles.insert({'T', 1.0/32.0});
    jingles.insert({'X', 1.0/64.0});


    while (true)
    {
        getline(cin, str);

        if(str == "*")
            break;

        double qtd = 0.0;
        int ans = 0;
        for (size_t i = 0; i < str.size(); i++)
        {
            if(str[i] == '/'){
                if(qtd == 1.0){
                    ans++;
                }
                qtd = 0.0;
            }else{

                qtd += jingles[str[i]];
            }
        }

        cout << ans << '\n';
        
    }
    

    return 0;
}