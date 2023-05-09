#include <bits/stdc++.h>
using namespace std;
void mostra_vector(vector<int> &v,int p,int t){
   cout << "Vetor agora: ";
   for(int i = p;i <= t;i++){
      cout << v[i] << ' ';
   }
   cout << '\n';
}
int busca_bin(vector<int> &v,int chave){
   int i = -1;
   int p = 0;
   int t = v.size() - 1;
   int m;
   while(p <= t){
      mostra_vector(v,p,t);
      m = (p+t)/2;
      if(v[m] > chave){
         t = m - 1;
      }
      else{
         if(v[m] < chave){
            p = m + 1;
         }
         else{
            return m;
         }
      }
   }
   return -1;
}


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   int aux;
   vector<int> m;
   while(n--){
      cin >> aux;
      m.push_back(aux);
   }
   sort(m.begin(),m.end());
   
   cout << busca_bin(m,7) << '\n';
return 0;
}
