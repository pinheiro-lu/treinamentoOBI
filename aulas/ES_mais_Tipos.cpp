/*  Autor: Matheus Silva Lopes da Costa
*   Data: 27/04/2023
*   
*   Programa para exemplificar entrada e saída e tipos que usaremos
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    //  Tipos integrais:
    
    //  Para Numeros: 
    
    if(0){
        long long a = LLONG_MAX;

        size_t b = sizeof(a);

        cout << "Tamanho do tipo LL em bytes = " << b << '\n' << "Valor maximo " << a << '\n';

        cin >> a;

        cout << a << '\n';

        unsigned long long c = ULLONG_MAX;

        size_t d = sizeof(c);

        cout << "Tamanho do tipo ULL em bytes = " << d << '\n' << "Valor maximo " << c << '\n';

        cin >> c;

        cout << c << '\n';
    }
    // Para Caracteres: (Ver tabela ASCII)
    if(0){
        char e = 'A';
        cout << "e = " << e << '\n';
        e = 65;
        cout << "e = " << e << '\n';
        cout << "e = " << (int)e << '\n';
    }
    if(0){
    // Tipos ponto flutuante:
    double f = DBL_MAX;
    cout << "Maior valor de um double: " << f << '\n';
    }  
    if(0){
        // Tipos booleanos:
        bool t = (4>6);
        bool u = false;
        cout << u << '\n';
    }
    // Strings:
    // Eh uma classe nao um tipo basico
    string s = "cpluplus";
    cout << s << '\n';
    cout << s.size() << '\n';

    return 0;
}