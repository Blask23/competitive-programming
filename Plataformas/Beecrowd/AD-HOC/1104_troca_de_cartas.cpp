// Problema: 1104 - Troca de Cartas
// Plataforma: beecrowd
// Categoria: ad-hoc (nivel 4)
// Origem: Maratona de Programação da SBC Brasil
// Link: https://judge.beecrowd.com/pt/problems/view/1104
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int q1, q2;

    while (true)
    {
        cin >> q1 >> q2;

        if(q1 + q2 == 0)
            break;

        vector<int> c1(q1);
        vector<int> c2(q2);

        set<int> t1, t2;
        for (size_t i = 0; i < q1; i++)
            cin >> c1[i];

        for (size_t i = 0; i < q2; i++){
            cin >> c2[i];

            if( find(all(c1), c2[i]) == c1.end()){
                t2.insert(c2[i]);
            }
        }

        for (size_t i = 0; i < q1; i++)
        {
            if( find(all(c2), c1[i]) == c2.end()){
                t1.insert(c1[i]);
            }
        }

        cout << (t1.size() < t2.size() ? t1.size() : t2.size()) << '\n';
        

        
        
        
    }
    
    

    return 0;
}