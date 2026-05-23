    // Problema: 1486 - Circuito Bioquímico Digital
    // Plataforma: beecrowd
    // Categoria: ad-hoc (nivel 4)
    // Origem: Por Ricardo Anido, UNICAMP Brazil
    // Link: https://judge.beecrowd.com/pt/problems/view/1486
    // Assunto:


    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
    #define ll long long
    #define pb push_back
    #define all(x) (x).begin(), (x).end()

    int main() {
        fastio;

        int p, n, c;

        while (true)
        {
            cin >> p >> n >> c;

            if(p+n+c == 0)
                break;

            vector<bool> flags(p, true);
            vector<int>  tam(p, 0);
            int qtd = 0;

            int aux;
            for (size_t i = 0; i < n; i++)
            {
                for (size_t j = 0; j < p; j++)
                {
                    cin >> aux;

                    if(aux == 0){
                        if(tam[j] >= c)
                            qtd++;

                        flags[j] = false;
                        tam[j] = 0;
                    }else if(aux == 1 && flags[j]){
                        tam[j]++;
                    }else if(aux == 1 && !flags[j]){
                        tam[j] = 1;
                        flags[j] = true;
                    }
                }
            }

            for(auto i : tam){
                if(i >= c)
                    qtd++;
            }

            cout << qtd << '\n';
            
        }
        

        return 0;
    }