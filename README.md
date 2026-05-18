# 📚 Standard Template Library — STL em C++

Este repositório é dedicado ao estudo da **Standard Template Library (STL)** da linguagem **C++**, abordando seus fundamentos teóricos, sua organização interna, seus principais componentes e sua importância para o desenvolvimento de algoritmos e estruturas de dados eficientes.

A STL é uma das partes mais importantes da biblioteca padrão do C++. Ela fornece uma coleção de **containers**, **algoritmos**, **iteradores** e **funções utilitárias** baseadas em programação genérica, permitindo escrever programas mais reutilizáveis, eficientes e expressivos.

---

## 🧠 O que é a STL?

A **STL**, ou **Standard Template Library**, é uma biblioteca genérica da linguagem C++ construída com base em **templates**.

Seu principal objetivo é fornecer estruturas de dados e algoritmos prontos, eficientes e reutilizáveis, permitindo que o programador trabalhe com diferentes tipos de dados sem precisar reimplementar soluções clássicas do zero.

Em vez de escrever manualmente uma lista, pilha, fila, árvore, tabela hash ou algoritmo de ordenação, a STL oferece implementações padronizadas e otimizadas desses recursos.

A STL é amplamente utilizada em:

- Desenvolvimento de software em C++
- Algoritmos e estruturas de dados
- Programação competitiva
- Sistemas de alto desempenho
- Computação científica
- Processamento de dados
- Aplicações que exigem eficiência e controle de memória

---

## 🏗️ Filosofia da STL

A STL foi projetada com base em alguns princípios fundamentais:

### 1. Programação Genérica

A STL utiliza **templates** para permitir que estruturas e algoritmos funcionem com diferentes tipos de dados.

Por exemplo, um `vector` pode armazenar inteiros, caracteres, strings, objetos ou qualquer outro tipo definido pelo programador.

```cpp
std::vector<int> numeros;
std::vector<std::string> nomes;
std::vector<double> valores;
```

Isso evita repetição de código e permite a criação de componentes reutilizáveis.

---

### 2. Separação entre Dados e Algoritmos

Uma das ideias mais importantes da STL é separar **containers** de **algoritmos**.

Os containers armazenam os dados.

Os algoritmos operam sobre os dados.

Os iteradores fazem a ponte entre os dois.

Essa separação permite que um mesmo algoritmo funcione sobre diferentes estruturas.

Por exemplo, o algoritmo `sort` pode ordenar um `vector`, mas não depende diretamente da implementação interna do `vector`; ele depende dos iteradores fornecidos.

---

### 3. Eficiência

A STL foi criada para oferecer abstrações de alto nível sem sacrificar desempenho.

Muitas operações da STL possuem complexidade bem definida, como:

- acesso em tempo constante;
- busca em tempo logarítmico;
- inserção eficiente;
- ordenação otimizada;
- manipulação genérica de sequências.

Por isso, compreender a complexidade dos containers e algoritmos é essencial para utilizar a STL corretamente.

---

### 4. Reutilização

A STL permite reaproveitar estruturas e algoritmos em diferentes contextos.

Um mesmo container pode ser usado em problemas matemáticos, manipulação de texto, simulação, sistemas, grafos, bancos de dados em memória e programação competitiva.

---

## 🧩 Componentes Principais da STL

A STL é composta principalmente por quatro grandes elementos:

| Componente | Função |
|---|---|
| **Containers** | Armazenam coleções de dados |
| **Iteradores** | Permitem percorrer containers |
| **Algoritmos** | Executam operações sobre sequências |
| **Function Objects** | Personalizam o comportamento de algoritmos |

Além desses, também existem componentes auxiliares como `pair`, `tuple`, `allocator`, lambdas e funções numéricas.

---

# 📦 Containers

Containers são estruturas responsáveis por armazenar dados.

Cada container possui características próprias em relação a:

- forma de armazenamento;
- ordem dos elementos;
- custo de inserção;
- custo de remoção;
- custo de busca;
- acesso direto ou sequencial;
- uso de memória;
- estabilidade de iteradores.

A escolha correta do container influencia diretamente a eficiência do programa.

---

## 📌 Containers Sequenciais

Containers sequenciais armazenam elementos em uma ordem linear.

### `vector`

O `vector` é um array dinâmico. Ele armazena os elementos de forma contínua na memória e permite acesso direto por índice.

Características:

- acesso por índice em `O(1)`;
- inserção no final em `O(1)` amortizado;
- inserção no meio ou início em `O(n)`;
- boa localidade de cache;
- muito utilizado na prática.

O `vector` geralmente é a primeira escolha quando se precisa de uma sequência dinâmica de elementos.

```cpp
std::vector<int> numeros = {1, 2, 3, 4, 5};
```

---

### `array`

O `array` representa um vetor de tamanho fixo.

Diferente do `vector`, seu tamanho é conhecido em tempo de compilação.

Características:

- tamanho fixo;
- acesso rápido;
- baixo custo;
- substitui arrays tradicionais de C com mais segurança.

```cpp
std::array<int, 5> valores = {1, 2, 3, 4, 5};
```

---

### `deque`

O `deque`, ou double-ended queue, permite inserções e remoções eficientes tanto no início quanto no fim.

Características:

- acesso por índice em `O(1)`;
- inserção no início em `O(1)`;
- inserção no fim em `O(1)`;
- não garante armazenamento completamente contínuo como o `vector`.

É útil quando há necessidade de manipular elementos nas duas extremidades.

---

### `list`

A `list` é uma lista duplamente encadeada.

Características:

- inserção e remoção eficientes no meio, quando se tem o iterador;
- não possui acesso direto por índice;
- busca sequencial em `O(n)`;
- maior custo de memória por armazenar ponteiros.

Apesar de parecer útil, muitas vezes `vector` é mais eficiente na prática por causa da localidade de cache.

---

### `forward_list`

A `forward_list` é uma lista simplesmente encadeada.

Características:

- percorre apenas para frente;
- menor uso de memória que `list`;
- inserções e remoções eficientes;
- não possui acesso direto por índice.

É usada em situações específicas em que se deseja uma estrutura encadeada simples e econômica.

---

# 🌳 Containers Associativos

Containers associativos armazenam elementos de forma ordenada.

Geralmente são implementados com árvores balanceadas, como árvores rubro-negras.

As principais operações possuem complexidade `O(log n)`.

---

## `set`

O `set` armazena elementos únicos e ordenados.

Características:

- não permite repetição;
- mantém os elementos em ordem;
- busca em `O(log n)`;
- inserção em `O(log n)`;
- remoção em `O(log n)`.

É útil quando se deseja armazenar valores sem repetição e com ordenação automática.

```cpp
std::set<int> valores;
```

---

## `multiset`

O `multiset` é semelhante ao `set`, mas permite elementos repetidos.

É útil quando se deseja manter valores ordenados, mas preservar duplicatas.

---

## `map`

O `map` armazena pares de chave e valor.

Cada chave é única e os elementos são mantidos ordenados pela chave.

Características:

- associação entre chave e valor;
- chaves únicas;
- busca em `O(log n)`;
- ordenação automática pela chave.

```cpp
std::map<std::string, int> idade;
```

---

## `multimap`

O `multimap` permite múltiplos valores associados à mesma chave.

É usado quando uma chave pode estar relacionada a mais de um elemento.

---

# ⚡ Containers Não Ordenados

Containers não ordenados usam tabelas hash.

Eles não mantêm os elementos em ordem, mas oferecem acesso médio muito eficiente.

As principais operações possuem complexidade média `O(1)`, mas podem chegar a `O(n)` em casos ruins.

---

## `unordered_set`

O `unordered_set` armazena elementos únicos sem ordenação.

Características:

- não mantém ordem;
- busca média em `O(1)`;
- inserção média em `O(1)`;
- baseado em função hash.

É útil quando a ordem não importa e a prioridade é velocidade de acesso.

---

## `unordered_map`

O `unordered_map` armazena pares de chave e valor utilizando hashing.

Características:

- associação chave-valor;
- busca média em `O(1)`;
- não mantém as chaves ordenadas;
- muito usado para contagem de frequência e tabelas de consulta.

```cpp
std::unordered_map<std::string, int> frequencia;
```

---

# 🧱 Adaptadores de Containers

Adaptadores são estruturas que usam containers internamente, mas oferecem uma interface mais restrita.

Eles não são containers completos, mas formas especializadas de manipular dados.

---

## `stack`

A `stack` representa uma pilha.

Segue o princípio **LIFO**:

```text
Last In, First Out
```

O último elemento inserido é o primeiro a ser removido.

Operações principais:

- `push`
- `pop`
- `top`
- `empty`

Usos comuns:

- verificação de parênteses;
- chamadas recursivas;
- algoritmos de busca;
- análise sintática;
- desfazer operações.

---

## `queue`

A `queue` representa uma fila.

Segue o princípio **FIFO**:

```text
First In, First Out
```

O primeiro elemento inserido é o primeiro a ser removido.

Usos comuns:

- simulações;
- escalonamento;
- BFS em grafos;
- processamento por ordem de chegada.

---

## `priority_queue`

A `priority_queue` representa uma fila de prioridade.

O elemento de maior prioridade é acessado primeiro.

Geralmente é implementada com heap.

Usos comuns:

- algoritmo de Dijkstra;
- escalonamento por prioridade;
- seleção de maiores ou menores elementos;
- problemas de otimização.

---

# 🔁 Iteradores

Iteradores são uma das ideias centrais da STL.

Eles funcionam como uma abstração de ponteiros, permitindo percorrer containers sem conhecer sua implementação interna.

Um iterador aponta para uma posição dentro de um container.

```cpp
auto it = v.begin();
```

---

## Função dos Iteradores

Os iteradores permitem que algoritmos genéricos funcionem em diferentes containers.

Por exemplo, um algoritmo pode percorrer um `vector`, uma `list` ou um `set` usando a mesma ideia de início e fim:

```cpp
container.begin()
container.end()
```

O intervalo usado pela STL geralmente segue o padrão:

```text
[início, fim)
```

Ou seja, inclui o primeiro elemento, mas não inclui o último marcador.

---

## Tipos de Iteradores

### Input Iterator

Permite leitura sequencial.

### Output Iterator

Permite escrita sequencial.

### Forward Iterator

Permite percorrer para frente.

### Bidirectional Iterator

Permite percorrer para frente e para trás.

### Random Access Iterator

Permite acesso direto, como em arrays.

Containers como `vector` oferecem iteradores de acesso aleatório.

Containers como `list` oferecem iteradores bidirecionais.

Essa diferença influencia quais algoritmos podem ser usados.

Por exemplo, `std::sort` exige iteradores de acesso aleatório, por isso funciona com `vector`, mas não diretamente com `list`.

---

# ⚙️ Algoritmos da STL

A biblioteca `<algorithm>` fornece funções genéricas para manipular sequências.

Esses algoritmos trabalham com iteradores, não diretamente com containers.

Isso permite maior flexibilidade.

---

## Algoritmos de Ordenação

### `sort`

Ordena elementos em ordem crescente por padrão.

Complexidade média:

```text
O(n log n)
```

Exemplo:

```cpp
std::sort(v.begin(), v.end());
```

---

### `stable_sort`

Ordena mantendo a ordem relativa de elementos equivalentes.

É útil quando se deseja preservar informações anteriores à ordenação.

---

## Algoritmos de Busca

### `find`

Procura um valor em uma sequência.

Complexidade:

```text
O(n)
```

---

### `binary_search`

Verifica se um elemento existe em uma sequência ordenada.

Complexidade:

```text
O(log n)
```

Importante: só deve ser usado em sequências previamente ordenadas.

---

### `lower_bound`

Retorna a primeira posição onde um valor poderia ser inserido sem quebrar a ordenação.

---

### `upper_bound`

Retorna a primeira posição após a última ocorrência de um valor.

Essas funções são muito importantes em problemas envolvendo busca eficiente.

---

## Algoritmos de Contagem

### `count`

Conta quantas vezes um valor aparece.

### `count_if`

Conta elementos que satisfazem uma condição.

---

## Algoritmos de Transformação

### `transform`

Aplica uma operação sobre os elementos de uma sequência.

```cpp
std::transform(v.begin(), v.end(), v.begin(), [](int x) {
    return x * 2;
});
```

---

## Algoritmos de Modificação

### `reverse`

Inverte a ordem dos elementos.

### `unique`

Remove duplicatas consecutivas logicamente.

Importante: `unique` não reduz o tamanho do container sozinho. Ele reorganiza os elementos e retorna um iterador para o novo fim lógico.

Geralmente é usado com `erase`:

```cpp
v.erase(std::unique(v.begin(), v.end()), v.end());
```

---

# 🧮 Biblioteca `<numeric>`

A biblioteca `<numeric>` fornece algoritmos voltados a operações numéricas.

Principais funções:

- `accumulate`
- `iota`
- `partial_sum`
- `adjacent_difference`
- `inner_product`

---

## `accumulate`

Calcula a soma ou acumulação de elementos.

```cpp
int soma = std::accumulate(v.begin(), v.end(), 0);
```

---

## `iota`

Preenche uma sequência com valores consecutivos.

```cpp
std::iota(v.begin(), v.end(), 1);
```

---

# 🧠 Function Objects e Lambdas

Muitos algoritmos da STL podem receber funções, objetos funcionais ou lambdas para personalizar seu comportamento.

Isso permite definir critérios de ordenação, filtros, transformações e comparações.

Exemplo de ordenação personalizada:

```cpp
std::sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```

Nesse caso, os elementos são ordenados em ordem decrescente.

---

## Functors

Um functor é um objeto que se comporta como função.

Ele implementa o operador `()`.

```cpp
struct Comparador {
    bool operator()(int a, int b) {
        return a > b;
    }
};
```

---

# 🧬 Programação Genérica

A STL é uma aplicação prática de programação genérica em C++.

A programação genérica permite escrever algoritmos independentes do tipo específico dos dados.

Isso é feito por meio de templates.

```cpp
template <typename T>
T maior(T a, T b) {
    return a > b ? a : b;
}
```

A STL usa essa ideia em praticamente todos os seus componentes.

Por isso, `vector<int>`, `vector<double>` e `vector<std::string>` são variações de uma mesma estrutura genérica.

---

# 🧠 Complexidade Computacional na STL

Um ponto essencial no estudo da STL é compreender a complexidade das operações.

Escolher o container errado pode transformar um programa eficiente em um programa lento.

---

## Comparação Geral

| Estrutura | Acesso | Busca | Inserção | Remoção |
|---|---:|---:|---:|---:|
| `vector` | O(1) | O(n) | O(1) no fim | O(n) |
| `array` | O(1) | O(n) | Não altera tamanho | Não altera tamanho |
| `deque` | O(1) | O(n) | O(1) nas extremidades | O(1) nas extremidades |
| `list` | O(n) | O(n) | O(1) com iterador | O(1) com iterador |
| `set` | O(log n) | O(log n) | O(log n) | O(log n) |
| `map` | O(log n) | O(log n) | O(log n) | O(log n) |
| `unordered_set` | — | O(1) médio | O(1) médio | O(1) médio |
| `unordered_map` | — | O(1) médio | O(1) médio | O(1) médio |

---

## Observação sobre Desempenho

Nem sempre a menor complexidade teórica garante melhor desempenho prático.

Fatores como:

- localidade de cache;
- alocação dinâmica;
- custo de ponteiros;
- tamanho dos dados;
- número de elementos;
- padrão de acesso;
- custo da função hash;

podem influenciar significativamente o desempenho real.

Por exemplo, `vector` muitas vezes é mais rápido que `list`, mesmo quando há inserções, por causa da continuidade dos dados na memória.

---

# 💾 STL e Memória

A STL também está diretamente relacionada à forma como os dados são armazenados na memória.

## `vector` e Localidade de Cache

O `vector` armazena seus elementos de forma contínua.

Isso favorece o uso da cache do processador, tornando percursos sequenciais muito eficientes.

---

## `list` e Alocação Dinâmica

A `list` armazena cada nó separadamente na memória.

Isso facilita inserções e remoções locais, mas prejudica a localidade de cache.

---

## Containers Associativos

Containers como `map` e `set` geralmente usam árvores.

Cada nó pode estar em uma região diferente da memória, o que pode gerar mais acessos indiretos.

---

## Containers Não Ordenados

Containers como `unordered_map` usam hashing.

Eles podem ser muito rápidos, mas seu desempenho depende de:

- boa função hash;
- fator de carga;
- número de colisões;
- redimensionamento interno.

---

# 🧭 Quando usar cada Container?

## Use `vector` quando:

- precisa de acesso rápido por índice;
- faz muitas leituras sequenciais;
- insere principalmente no final;
- quer bom desempenho geral;
- não precisa inserir frequentemente no meio.

## Use `deque` quando:

- precisa inserir/remover no início e no fim;
- ainda deseja acesso por índice;
- trabalha com filas duplas.

## Use `list` quando:

- precisa inserir/remover frequentemente no meio;
- já possui o iterador da posição;
- não precisa de acesso direto por índice.

## Use `set` quando:

- precisa manter elementos ordenados;
- não quer valores repetidos;
- precisa de busca logarítmica.

## Use `map` quando:

- precisa associar chave e valor;
- deseja manter as chaves ordenadas;
- precisa de busca logarítmica.

## Use `unordered_map` quando:

- precisa associar chave e valor;
- não precisa de ordenação;
- busca desempenho médio constante.

## Use `priority_queue` quando:

- precisa acessar sempre o maior ou menor elemento;
- trabalha com prioridades;
- implementa algoritmos como Dijkstra.

---

# 🧪 STL em Algoritmos e Estruturas de Dados

A STL é extremamente útil para implementar soluções clássicas de algoritmos.

Exemplos:

| Problema | Estrutura STL útil |
|---|---|
| Contar frequência | `map`, `unordered_map` |
| Remover duplicatas | `set`, `unordered_set` |
| Ordenar dados | `vector`, `sort` |
| Buscar em sequência ordenada | `binary_search`, `lower_bound` |
| Simular pilha | `stack` |
| Simular fila | `queue` |
| Trabalhar com prioridades | `priority_queue` |
| Percorrer grafos em largura | `queue` |
| Percorrer grafos em profundidade | `stack` |
| Armazenar pares | `pair` |
| Agrupar múltiplos valores | `tuple` |

---

# 📌 STL e C++ Moderno

A STL evoluiu junto com o C++.

Recursos modernos tornam seu uso mais expressivo:

## Range-based for

```cpp
for (int x : v) {
    std::cout << x << " ";
}
```

## `auto`

```cpp
auto it = v.begin();
```

## Structured Bindings

```cpp
for (auto [chave, valor] : mapa) {
    std::cout << chave << " " << valor;
}
```

## Lambdas

```cpp
[](int x) {
    return x % 2 == 0;
}
```

Esses recursos tornam o uso da STL mais limpo e legível.

---

# 📚 Bibliotecas Relacionadas

Além da STL, a biblioteca padrão do C++ possui vários recursos complementares importantes:

- `<iostream>`
- `<string>`
- `<vector>`
- `<array>`
- `<deque>`
- `<list>`
- `<set>`
- `<map>`
- `<unordered_map>`
- `<unordered_set>`
- `<stack>`
- `<queue>`
- `<algorithm>`
- `<numeric>`
- `<utility>`
- `<tuple>`
- `<functional>`
- `<iterator>`

---

# 🚧 Status do Estudo

Este repositório está em desenvolvimento e será utilizado para organizar estudos sobre os principais componentes da STL, suas aplicações e seus aspectos computacionais.

O foco principal é compreender não apenas como usar a STL, mas também:

- por que cada estrutura existe;
- quando usar cada container;
- qual a complexidade das operações;
- como os algoritmos genéricos funcionam;
- como iteradores conectam containers e algoritmos;
- quais impactos existem em desempenho e memória.

---

# 👨‍💻 Autor

**Joseph Antony**  
Estudante de Engenharia da Computação  
Universidade Federal de Sergipe

GitHub: [@thejosephantony](https://github.com/thejosephantony)

---

# 📄 Licença

Este repositório possui finalidade acadêmica e de estudo.

Os conteúdos aqui organizados podem ser utilizados como apoio para aprendizado, revisão e aprofundamento em C++ e Standard Template Library.
