/*
Aula 2 - Vetores, Funções, Busca e Ordenação, Complexidade */
/*

1 - Vetores
Vetores em C++ são estruturas que armazenam uma sequência de valores do mesmo tipo.
Eles podem ser declarados como “tipo nome[tamanho];”, onde tipo é o tipo dos elementos,
nome é o identificador do vetor e tamanho é um inteiro que indica quantos elementos o vetor pode armazenar.
double w[5]; // declara um vetor de 5 doubles
char s[20]; // declara um vetor de 20 caracteres

/*

Para acessar ou modificar um elemento do vetor, usamos o operador [] com o índice do elemento desejado.
Os índices começam em 0 e vão até tamanho - 1. Por exemplo: */
v[0] = 1; // atribui o valor 1 ao primeiro elemento do vetor v
w[3] = 2.5; // atribui o valor 2.5 ao quarto elemento do vetor w 
s[19] = ‘\0’; // atribui o caractere nulo ao último elemento do vetor s

/*

Podemos usar laços para percorrer os elementos de um vetor. Por exemplo: */
for (int i = 0; i < 10; i++) { cout << v[i] << ’ '; // imprime os elementos do vetor v separados por espaço 
} cout << ‘\n’;

/*

C++ também oferece uma biblioteca chamada vector que permite criar vetores dinâmicos,
ou seja, que podem mudar de tamanho durante a execução do programa. 
*/
vector<int> u; // declara um vetor dinâmico de inteiros vazio 
u.push_back(3); // adiciona o valor 3 ao final do vetor u 
u.push_back(4); // adiciona o valor 4 ao final do vetor u 
u.pop_back(); // remove o último elemento do vetor u 
cout << u.size() << ‘\n’; // imprime o tamanho atual do vetor u (1) 
cout << u[0] << ‘\n’; // imprime o primeiro elemento do vetor u (3)

/*

2 - Funções
Funções em C++ são blocos de código que realizam uma tarefa específica e podem ser reutilizados em diferentes partes do programa.
Eles podem receber parâmetros de entrada e retornar valores de saída. Para declarar uma função, usamos a seguinte sintaxe:
tipo nome(tipo1 par1, tipo2 par2, …, tipon parn) {
corpo da função
return valor;
}
Onde tipo é o tipo do valor retornado pela função, nome é o identificador da função,
tipo1, tipo2, …, tipon são os tipos dos parâmetros de entrada e par1, par2, …, parn são os nomes dos parâmetros de entrada.
O corpo da função é o conjunto de instruções que definem o que a função faz. O valor é o valor que a função retorna ao final da sua execução.
Por exemplo: */
int soma(int a, int b) { return a + b; // retorna a soma dos dois parâmetros 
									  }

double media(double x, double y) { return (x + y) / 2; // retorna a média dos dois parâmetros 
													  }

void imprime(string s) { cout << s << ‘\n’; // imprime o parâmetro na tela e pula uma linha 
										}

/*

Para chamar uma função, usamos o seu nome seguido dos argumentos entre parênteses. Os argumentos são os valores que serão passados para os parâmetros da função.
Por exemplo: */
int x = soma(2, 3); // chama a função soma com os argumentos 2 e 3 e guarda o resultado na variável x 
double y = media(4.5, 6.7); // chama a função media com os argumentos 4.5 e 6.7 e guarda o resultado na variável y
/*

3 - Busca e Ordenação
Busca e ordenação são duas operações fundamentais em algoritmos e estruturas de dados.
Buscar um elemento em um vetor significa encontrar a posição onde ele está armazenado, se existir.
Ordenar um vetor significa rearranjar seus elementos de forma que fiquem em ordem crescente ou decrescente.
Em C++, existem algumas funções prontas na biblioteca algorithm que facilitam essas operações. 
Por exemplo: */
int v[10] = {5, 2, 7, 9, 1, 4, 6, 8, 3, 0}; // declara e inicializa um vetor de 10 inteiros

int pos = find(v, v + 10, 7) - v; // busca o valor 7 no vetor v e retorna a posição onde ele foi encontrado 
cout << pos << ‘\n’; // imprime a posição (2)

sort(v, v + 10); // ordena o vetor v em ordem crescente 
for (int i = 0; i < 10; i++) { cout << v[i] << ’ '; // imprime os elementos do vetor v ordenados 
												} cout << ‘\n’;

reverse(v, v + 10); // inverte a ordem dos elementos do vetor v 
for (int i = 0; i < 10; i++) { cout << v[i] << ’ '; // imprime os elementos do vetor v invertidos 
												} cout << ‘\n’;

/*

4 - Complexidade
Complexidade é uma medida que indica o quanto um algoritmo consome de recursos (tempo ou memória) para resolver um problema.
A complexidade depende do tamanho da entrada do algoritmo e da forma como ele processa essa entrada.
Uma forma comum de representar a complexidade é usando a notação O(n), onde n é o tamanho da entrada e O(n) é uma função que limita o crescimento do consumo de recursos.
Por exemplo: */
// O(n) - linear 
for (int i = 0; i < n; i++) { cout << i << ’ '; // faz algo n vezes 
											}

// O(n^2) - quadrática 
for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { cout << i << ’ ’ << j << ‘\n’; // faz algo n^2 vezes 
																						   } }

// O(log n) - logarítmica 
while (n > 0) { n /= 2; // faz algo log n vezes 
						}

/*

A complexidade é importante para avaliar a eficiência de um algoritmo e comparar diferentes soluções para um mesmo problema.
Quanto menor a complexidade, melhor o algoritmo. Na OBI, os problemas têm limites de tempo e memória que devem ser respeitados pelos algoritmos. */
