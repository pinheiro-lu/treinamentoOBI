/* 4 - Grafos 
Um grafo é uma estrutura de dados que representa um conjunto de vértices (ou nós) e arestas (ou ligações) entre eles. Um grafo pode ser usado para modelar diversos problemas que envolvem relações entre elementos, como redes sociais, mapas, circuitos elétricos, etc. Existem vários tipos de grafos, mas vamos nos concentrar em grafos simples, não direcionados e não ponderados, que são aqueles que não têm laços (arestas que ligam um vértice a ele mesmo), nem direção (as arestas podem ser percorridas em ambos os sentidos) nem peso (as arestas não têm um valor associado).

Uma forma de representar um grafo em C++ é usando uma matriz de adjacência, que é uma matriz bidimensional que indica quais vértices são adjacentes (ou seja, ligados por uma aresta) a cada vértice. Por exemplo, se temos um grafo com 5 vértices numerados de 0 a 4, e as seguintes arestas: (0,1), (0,2), (1,2), (1,3), (2,4), (3,4), podemos representá-lo com a seguinte matriz de adjacência:

  0 1 2 3 4 
0 0 1 1 0 0 
1 1 0 1 1 0 
2 1 1 0 0 1 
3 0 1 0 0 1 
4 0 0 1 1 0

Nessa matriz, cada linha e cada coluna corresponde a um vértice do grafo, e o valor na posição [i][j] é 1 se existe uma aresta entre os vértices i e j, e 0 caso contrário. Note que a matriz é simétrica em relação à diagonal principal, pois o grafo é não direcionado. Para declarar e preencher uma matriz de adjacência em C++, podemos fazer algo como: */

const int N = 5; // número de vértices do grafo 
int adj[N][N]; // declara uma matriz de adjacência de tamanho N x N

// preenche a matriz com zeros 
for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { adj[i][j] = 0; } }

// adiciona as arestas na matriz 
adj[0][1] = adj[1][0] = 1; // aresta (0,1) 
adj[0][2] = adj[2][0] = 1; // aresta (0,2) 
adj[1][2] = adj[2][1] = 1; // aresta (1,2) 
adj[1][3] = adj[3][1] = 1; // aresta (1,3) 
adj[2][4] = adj[4][2] = 1; // aresta (2,4) 
adj[3][4] = adj[4][3] = 1; // aresta (3,4)

/* Uma vez que temos uma forma de representar um grafo em C++, podemos usar alguns algoritmos para percorrê-lo e obter informações sobre ele. Dois dos algoritmos mais básicos e importantes são a busca em profundidade (DFS - Depth-First Search) e a busca em largura (BFS - Breadth-First Search). Ambos os algoritmos recebem um vértice inicial s e visitam todos os vértices que são alcançáveis a partir de s seguindo as arestas do grafo. A diferença entre eles é a ordem em que os vértices são visitados.

A DFS visita os vértices seguindo um caminho o mais longo possível a partir de s, e só volta quando não há mais vizinhos não visitados. Ela usa uma pilha para armazenar os vértices que ainda precisam ser explorados. A DFS pode ser implementada recursivamente ou iterativamente. Uma possível implementação recursiva da DFS usando matriz de adjacência é: */

bool vis[N]; // vetor que indica se um vértice foi visitado ou não

void dfs(int v) { // função que faz a busca em profundidade a partir do vértice v 
vis[v] = true; // marca v como visitado 
cout << v << " "; // imprime v 
for(int u = 0; u < N; u++) { // para cada vértice u do grafo 
if(adj[v][u] == 1 && !vis[u]) { // se existe uma aresta entre v e u e u ainda não foi visitado 
dfs(u); // chama dfs para u recursivamente 
} } }

/* A BFS visita os vértices seguindo caminhos cada vez mais longos a partir de s, ou seja, ela visita primeiro s, depois os vizinhos de s, depois os vizinhos dos vizinhos de s, e assim por diante. Ela usa uma fila para armazenar os vértices que ainda precisam ser explorados. Uma possível implementação da BFS usando matriz de adjacência é: */

bool vis[N]; // vetor que indica se um vértice foi visitado ou não

void bfs(int s) { // função que faz a busca em largura a partir do vértice s 
queue<int> q; // declara uma fila de inteiros 
q.push(s); // adiciona s na fila 
vis[s] = true; // marca s como visitado 
while(!q.empty()) { // enquanto a fila não estiver vazia 
int v = q.front(); // pega o elemento da frente da fila 
q.pop(); // remove o elemento da frente da fila 
cout << v << " "; // imprime v 
for(int u = 0; u < N; u++) { // para cada vértice u do grafo 
if(adj[v][u] == 1 && !vis[u]) { // se existe uma aresta entre v e u e u ainda não foi visitado 
q.push(u); // adiciona u na fila 
vis[u] = true; // marca u como visitado 
} }