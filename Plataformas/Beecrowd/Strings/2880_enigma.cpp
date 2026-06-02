// Problema: 2880 - Enigma
// Plataforma: beecrowd
// Categoria: Strings (nivel 4)
// Origem: Por Maratona de Programação da SBC 2018 Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2880
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int qtd = 0;
    string c, str;
    cin >> c >> str;

    bool flag = true;
   for (size_t j = 0; j < c.size()-str.size() +1; j++)
   {
        for (size_t i = j; i<str.size()+j; i++)
        {
            if(str[i-j] == c[i])
                flag = false;
        }

        if(flag)
            qtd++;
        
        flag =true;

   }
   
   cout << qtd << '\n';
    

    return 0;
}