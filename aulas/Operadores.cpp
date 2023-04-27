/*  Autor: Matheus Silva Lopes da Costa
*   Data: 27/04/2023
*   
*   Programa para exemplificar o uso dos operadores
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
// O.Aritiméticos:
    // procedencia das operaçoes igual a matematica, pode ser mudada com parenteses
    ll a = 45;
    ll b = a*a - 4;
    //divisao inteira
    ll c = 30;
    ll e = (30/7)*7;
    ll f = (30/7)*7 + 30%7;
    ll g = 30*(7/7);
    ll h = (30)%(-7);
    ll i = (-30)%(7);
    cout << i << '\n';
//  O.Relacionais: Devolvem o valor booleano da expressao
    /*  Menor que: x < y
    *   Maior que: x > y
    *   Menor ou igual que: x <= y
    *   Maior ou igual que: x >= y
    *   Igual: x == y
    *   Diferente: x != y
    */
//  O.Logicos: Devolvem o valor booleano da expressao
    int j = 4, k = 4;
    bool l = ((j >= k) && (j <= k)) == (j == k);
    // precedencia esq.->dir.
    cin >> k;
    bool m = (k > 0) && (j%k == 0);
    cout << m << '\n';
//  Operadores de manipulção de bits e enderaçamento...
}