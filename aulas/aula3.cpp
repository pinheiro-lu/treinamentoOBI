/*

3 - STL básico STL significa Standard Template Library, que é uma coleção de classes e funções que fornecem estruturas de dados e algoritmos comuns em C++. Alguns dos componentes mais úteis da STL são:

pair: uma classe que representa um par de valores de qualquer tipo. Ela pode ser declarada como “pair<tipo1, tipo2> nome;”, onde tipo1 e tipo2 são os tipos do primeiro e segundo valor, respectivamente, e nome é o identificador do par. Para acessar ou modificar os valores de um par, usamos os membros first e second. Por exemplo: */
pair<int, string> p; // declara um par de um int e uma string 
p.first = 1; // atribui 1 ao primeiro valor de p 
p.second = “olá”; // atribui “olá” ao segundo valor de p 
cout << p.first << " " << p.second << “\n”; // imprime 1 olá

/*queue: uma classe que representa uma estrutura de dados do tipo fila, que segue o princípio FIFO (primeiro a entrar, primeiro a sair). Ela pode ser declarada como “queue<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador da fila. Para adicionar ou remover elementos de uma fila, usamos os métodos push e pop. Para acessar o elemento da frente ou de trás de uma fila, usamos os métodos front e back. Para verificar o tamanho ou a vacuidade de uma fila, usamos os métodos size e empty. Por exemplo: */
queue<int> q; // declara uma fila vazia de inteiros 
q.push(1); // adiciona 1 ao final da fila q 
q.push(2); // adiciona 2 ao final da fila q 
q.pop(); // remove o elemento da frente da fila q (1) 
cout << q.front() << “\n”; // imprime o elemento da frente da fila q (2) 
cout << q.back() << “\n”; // imprime o elemento de trás da fila q (2) 
cout << q.size() << “\n”; // imprime o tamanho da fila q (1) 
cout << q.empty() << “\n”; // imprime se a fila q está vazia ou não (0)

/*stack: uma classe que representa uma estrutura de dados do tipo pilha, que segue o princípio LIFO (último a entrar, primeiro a sair). Ela pode ser declarada como “stack<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador da pilha. Para adicionar ou remover elementos de uma pilha, usamos os métodos push e pop. Para acessar o elemento do topo de uma pilha, usamos o método top. Para verificar o tamanho ou a vacuidade de uma pilha, usamos os métodos size e empty. Por exemplo:*/
stack<int> s; // declara uma pilha vazia de inteiros 
s.push(1); // adiciona 1 ao topo da pilha s 
s.push(2); // adiciona 2 ao topo da pilha s 
s.pop(); // remove o elemento do topo da pilha s (2) 
cout << s.top() << “\n”; // imprime o elemento do topo da pilha s (1) 
cout << s.size() << “\n”; // imprime o tamanho da pilha s (1) 
cout << s.empty() << “\n”; // imprime se a pilha s está vazia ou não (0)

/*

deque: uma classe que representa uma estrutura de dados do tipo deque, que é uma fila dupla que permite inserir e remover elementos tanto na frente quanto no final. Ela pode ser declarada como “deque<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador do deque. Para adicionar ou remover elementos de um deque, usamos os métodos push_front, push_back, pop_front e pop_back. Para acessar o elemento da frente ou de trás de um deque, usamos os métodos front e back. Para verificar o tamanho ou a vacuidade de um deque, usamos os métodos size e empty. Para acessar ou modificar um elemento de um deque pelo índice, usamos o operador []. Por exemplo:*/
deque<int> d; // declara um deque vazio de inteiros 
d.push_front(1); // adiciona 1 à frente do deque d 
d.push_back(2); // adiciona 2 ao final do deque d 
d.push_front(3); // adiciona 3 à frente do deque d 
d.pop_back(); // remove o último elemento do deque d (2)
cout << d.front() << “\n”; // imprime o elemento da frente do deque d (3) 
cout << d.back() << “\n”; // imprime o elemento de trás do deque d (1) 
cout << d.size() << “\n”; // imprime o tamanho do deque d (2) 
cout << d.empty() << “\n”; // imprime se o deque d está vazio ou não (0) 
cout << d[0] << “\n”; // imprime o primeiro elemento do deque d (3) 
d[1] = 4; // modifica o segundo elemento do deque d para 4

/*set: uma classe que representa uma estrutura de dados do tipo conjunto, que armazena elementos únicos em ordem crescente. Ela pode ser declarada como “set<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador do conjunto. Para adicionar ou remover elementos de um conjunto, usamos os métodos insert e erase. Para verificar se um elemento existe em um conjunto, usamos o método count. Para iterar sobre todos os elementos em um conjunto, usamos iteradores ou laços baseados em intervalo. Por exemplo:*/
set<int> t; // declara um conjunto vazio de inteiros 
t.insert(3); // adiciona 3 ao conjunto t 
t.insert(1); // adiciona 1 ao conjunto t 
t.insert(2); // adiciona 2 ao conjunto t 
t.erase(3); // remove 3 do conjunto t 
cout << t.count(3) << “\n”; // imprime se 3 existe no conjunto t ou não (0) 
for (int x : t) { cout << x << " "; } // imprime todos os elementos do conjunto t em ordem crescente (1 2) 
cout << “\n”;

/*map: uma classe que representa uma estrutura de dados do tipo mapa, que armazena pares de chave-valor em ordem crescente por chaves. Ela pode ser declarada como “map<tipo_chave, tipo_valor> nome;”, onde tipo_chave e tipo_valor são os tipos da chave e do valor, respectivamente, e nome é o identificador do mapa. Para acessar ou modificar o valor associado a uma chave, usamos o operador []. Para adicionar ou remover um par de chave-valor de um mapa, usamos os métodos insert e erase. Para verificar se uma chave existe em um mapa, usamos o método count. Para iterar sobre todos os pares de chave-valor em um mapa, usamos iteradores ou laços baseados em intervalo. Por exemplo:*/
map<string, int> m; // declara um mapa vazio de strings para inteiros 
m[“ana”] = 10; // associa o valor 10 à chave “ana” 
m[“bia”] = 20; // associa o valor 20 à chave “bia” 
m[“carla”] = 30; // associa o valor 30 à chave “carla” 
m.erase(“bia”); // remove o par de chave-valor com a chave “bia” 
cout << m[“ana”] << “\n”; // imprime o valor associado à chave “ana” (10) 
cout << m.count(“bia”) << “\n”; // imprime se a chave “bia” existe no mapa ou não (0) 
for (auto p : m) { cout << p.first << " " << p.second << “\n”; } // imprime todos os pares de chave-valor do mapa em ordem crescente por chaves (ana 10, carla 30)

/*

Além das classes set e map, que armazenam elementos em ordem crescente por chave ou valor, a STL também oferece as classes unordered_set e unordered_map, que armazenam elementos em ordem arbitrária, mas com acesso mais rápido. Essas classes usam uma técnica chamada hashing para distribuir os elementos em diferentes baldes, de acordo com uma função hash. Para declarar um unordered_set ou um unordered_map, basta substituir set ou map por unordered_set ou unordered_map na declaração. Por exemplo:*/

unordered_set<int> us; // declara um conjunto desordenado de inteiros 
us.insert(3); // adiciona 3 ao conjunto us 
us.insert(1); // adiciona 1 ao conjunto us 
us.insert(2); // adiciona 2 ao conjunto us 
us.erase(3); // remove 3 do conjunto us 
cout << us.count(3) << “\n”; // imprime se 3 existe no conjunto us ou não (0) 
for (int x : us) { cout << x << " "; } // imprime todos os elementos do conjunto us em ordem arbitrária (1 2)
cout << “\n”;

unordered_map<string, int> um; // declara um mapa desordenado de strings para inteiros 
um[“ana”] = 10; // associa o valor 10 à chave “ana” 
um[“bia”] = 20; // associa o valor 20 à chave “bia” 
um[“carla”] = 30; // associa o valor 30 à chave “carla” 
um.erase(“bia”); // remove o par de chave-valor com a chave “bia” 
cout << um[“ana”] << “\n”; // imprime o valor associado à chave “ana” (10) 
cout << um.count(“bia”) << “\n”; // imprime se a chave “bia” existe no mapa ou não (0) 
for (auto p : um) { cout << p.first << " " << p.second << “\n”; } // imprime todos os pares de chave-valor do mapa em ordem arbitrária (ana 10, carla 30)

/*

Além disso, a STL também oferece as classes multiset e multimap, que permitem armazenar elementos repetidos em ordem crescente por chave ou valor. Essas classes funcionam de forma semelhante às classes set e map, mas com a diferença que elas aceitam elementos duplicados. Para declarar um multiset ou um multimap, basta substituir set ou map por multiset ou multimap na declaração. Por exemplo:*/

multiset<int> ms; // declara um conjunto ordenado de inteiros que aceita repetições 
ms.insert(3); // adiciona 3 ao conjunto ms 
ms.insert(1); // adiciona 1 ao conjunto ms 
ms.insert(2); // adiciona 2 ao conjunto ms 
ms.insert(3); // adiciona 3 ao conjunto ms novamente
auto it = ms.find(3); // obtém um iterador que aponta para o primeiro elemento igual a 3 no conjunto ms 
ms.erase(it); // remove o elemento apontado pelo iterador do conjunto 
ms.erase(3); // remove todos os elementos iguais a 3 do conjunto ms 
cout << ms.count(3) << “\n”; // imprime quantas vezes 3 aparece no conjunto ms (0) 
for (int x : ms) { cout << x << " "; } // imprime todos os elementos do conjunto ms em ordem crescente (1 2) 
cout << “\n”;

multimap<string, int> mm; // declara um mapa ordenado de strings para inteiros que aceita repetições 
mm.insert({“ana”, 10}); // associa o valor 10 à chave “ana” 
mm.insert({“bia”, 20}); // associa o valor 20 à chave “bia” 
mm.insert({“carla”, 30}); // associa o valor 30 à chave “carla” 
mm.insert({“ana”, 40}); // associa o valor 40 à chave “ana” novamente 
mm.erase(“bia”); // remove todos os pares de chave-valor com a chave “bia” 
cout << mm.count(“ana”) << “\n”; // imprime quantas vezes a chave “ana” aparece no mapa (2) 
for (auto p : mm) { cout << p.first << " " << p.second << “\n”; } // imprime todos os pares de chave-valor do mapa em ordem crescente por chave (ana 10, ana 40, carla 30)

/*priority_queue: uma classe que representa uma estrutura de dados do tipo fila de prioridade, que armazena elementos em ordem decrescente por prioridade. Ela pode ser declarada como “priority_queue<tipo> nome;”, onde tipo é o tipo dos elementos e nome é o identificador da fila de prioridade. Para adicionar ou remover elementos de uma fila de prioridade, usamos os métodos push e pop. Para acessar o elemento de maior prioridade de uma fila de prioridade, usamos o método top. Para verificar o tamanho ou a vacuidade de uma fila de prioridade, usamos os métodos size e empty. Por exemplo:*/
priority_queue<int> pq; // declara uma fila de prioridade vazia de inteiros 
pq.push(1); // adiciona 1 à fila de prioridade pq 
pq.push(2); // adiciona 2 à fila de prioridade pq 
pq.push(3); // adiciona 3 à fila de prioridade pq 
pq.pop(); // remove o elemento de maior prioridade da fila de prioridade pq (3) 
cout << pq.top() << “\n”; // imprime o elemento de maior prioridade da fila de prioridade pq (2) 
cout << pq.size() << “\n”; // imprime o tamanho da fila de prioridade pq (2) 
cout << pq.empty() << “\n”; // imprime se a fila de prioridade pq está vazia ou não (0)
/*

Por padrão, a fila de prioridade usa o operador < para comparar os elementos e determinar a prioridade. Assim, o elemento de maior prioridade é o que tem o maior valor. Por exemplo, se a fila de prioridade armazena inteiros, o elemento de maior prioridade é o maior inteiro.

Se quisermos alterar a prioridade da fila de prioridade, podemos usar um terceiro parâmetro na declaração da fila de prioridade, que é uma classe ou estrutura que define uma função de comparação personalizada. Essa função deve receber dois elementos do tipo da fila de prioridade e retornar true se o primeiro elemento tiver menor prioridade que o segundo elemento, e false caso contrário. Por exemplo, se quisermos criar uma fila de prioridade que armazena inteiros em ordem crescente por prioridade, ou seja, o elemento de maior prioridade é o menor inteiro, podemos usar a seguinte declaração:*/

priority_queue<int, vector<int>, greater<int>> pq; // declara uma fila de prioridade de inteiros em ordem crescente por prioridade
/*A classe greater<int> é uma classe padrão da STL que define uma função de comparação que retorna true se o primeiro inteiro for maior que o segundo inteiro, e false caso contrário. Assim, a fila de prioridade usa essa função para ordenar os elementos em ordem crescente por prioridade.*/