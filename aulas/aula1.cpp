/*
 * Aula 1 - Sintaxe de C++: Variáveis, Operadores, Entrada e Saída, Condicionais e Laços
 */

/*
 * 1 - Variáveis
 *
 * Variáveis em C++ são declaradas como "tipo dado;", assim como na
 * linguagem C. Elas também podem receber valores com o sinal de atribuição
 * "="
 *
 * Por exemplo:
 */

int n = 0;

const int N = 65;

double d;

string s = "Hello, world!";

long long a;

/* 2 - Operadores
 *
 * Os operadores de C++ são os mesmos da linguagem C.
 */



/*
 * 3 - Entrada e Saída
 *
 * Em C++, temos duas formas principais de ler e imprimir.
 * Uma delas é usando scanf e printf, como na linguagem C.
 * Outra é usando cin e cout. Utilizar cin e cout costuma ser mais rápido
 * de programar, mas tem algumas limitações de formatação.
 */

cin >> n >> d;

cout << n << ' ' << "texto " << N << '\n';

scanf("%lf", &d);
printf("%lf %s", d, s);

/* 
 * 4 - Condicionais
 *
 * Em C++, as condicionais são idênticas das de C. A priori, o uso de
 * if e else é suficiente.
 */

if (n == 7) {
	cout << "O valor de n é 7\n";
} else {
	cout << "O valor de n não é 7\n";
}

/*
 * 5 - Laços
 *
 * Os laços mais utilizados no contexto da OBI são o for e o while.
 *
 */

for (int i = 0; i < n; i++) {
	cout << "passei pelo for\n";
}

int i;

while (i > 0) {
	cout << "passei pelo while\n";
	i--;
}
