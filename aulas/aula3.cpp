/*

3 - STL básico STL significa Standard Template Library, que é uma coleção de classes e funções que fornecem estruturas de dados e algoritmos comuns em C++. Alguns dos componentes mais úteis da STL são:

pair: uma classe que representa um par de valores de qualquer tipo. Ela pode ser declarada como “pair<tipo1, tipo2> nome;”, onde tipo1 e tipo2 são os tipos do primeiro e segundo valor, respectivamente, e nome é o identificador do par. Para acessar ou modificar os valores de um par, usamos os membros first e second. Por exemplo:
pair<int, string> p; // declara um par de um int e uma string p.first = 1; // atribui 1 ao primeiro valor de p p.second = “olá”; // atribui “olá” ao segundo valor de p cout << p.first << " " << p.second << “\n”; // imprime 1 olá

queue: uma classe que representa uma estrutura de dados do tipo fila, que segue o princípio FIFO (primeiro a entrar, primeiro a sair). Ela pode ser declarada como “queue<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador da fila. Para adicionar ou remover elementos de uma fila, usamos os métodos push e pop. Para acessar o elemento da frente ou de trás de uma fila, usamos os métodos front e back. Para verificar o tamanho ou a vacuidade de uma fila, usamos os métodos size e empty. Por exemplo:
queue<int> q; // declara uma fila vazia de inteiros q.push(1); // adiciona 1 ao final da fila q q.push(2); // adiciona 2 ao final da fila q q.pop(); // remove o elemento da frente da fila q (1) cout << q.front() << “\n”; // imprime o elemento da frente da fila q (2) cout << q.back() << “\n”; // imprime o elemento de trás da fila q (2) cout << q.size() << “\n”; // imprime o tamanho da fila q (1) cout << q.empty() << “\n”; // imprime se a fila q está vazia ou não (0)

stack: uma classe que representa uma estrutura de dados do tipo pilha, que segue o princípio LIFO (último a entrar, primeiro a sair). Ela pode ser declarada como “stack<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador da pilha. Para adicionar ou remover elementos de uma pilha, usamos os métodos push e pop. Para acessar o elemento do topo de uma pilha, usamos o método top. Para verificar o tamanho ou a vacuidade de uma pilha, usamos os métodos size e empty. Por exemplo:
stack<int> s; // declara uma pilha vazia de inteiros s.push(1); // adiciona 1 ao topo da pilha s s.push(2); // adiciona 2 ao topo da pilha s s.pop(); // remove o elemento do topo da pilha s (2) cout << s.top() << “\n”; // imprime o elemento do topo da pilha s (1) cout << s.size() << “\n”; // imprime o tamanho da pilha s (1) cout << s.empty() << “\n”; // imprime se a pilha s está vazia ou não (0)

set: uma classe que representa uma estrutura de dados do tipo conjunto, que armazena elementos únicos em ordem crescente. Ela pode ser declarada como “set<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador do conjunto. Para adicionar ou remover elementos de um conjunto, usamos os métodos insert e erase. Para verificar se um elemento existe em um conjunto, usamos o método count. Para iterar sobre todos os elementos em um conjunto, usamos iteradores ou laços baseados em intervalo. Por exemplo:
set<int> t; // declara um conjunto vazio de inteiros t.insert(3); // adiciona 3 ao conjunto t t.insert(1); //
