#include <bits/stdc++.h>
using namespace std;

vector<int> vet;
int ini;
int fim;
int n;
int q;

int busca(int x){
    ini = 0;
    fim = n-1;

    while (ini<=fim)
    {
        int meio = (fim+ini)/2;

        if(vet[meio] == x) {
            if(vet[meio-1] != x ) return meio;
            else fim = meio-1;
        }
        else if(vet[meio] < x) ini = meio+1;
        else if(vet[meio] > x) fim = meio-1;
    }

    return -1;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    int x;
    int num;

   cin >> n >> q;

   vet.resize(n);
   for (size_t i = 0; i < n; i++)
   {
        cin >> vet[i];
   }

   for (size_t i = 0; i < q; i++)
   {
        cin >> x;
        cout << busca(x) << '\n';
   }
    return 0;
}