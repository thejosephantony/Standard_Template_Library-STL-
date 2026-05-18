# 📚 Standard Template Library — STL em C++

Repositório dedicado ao estudo da **Standard Template Library (STL)** da linguagem **C++**, com foco em estruturas de dados, algoritmos, iteradores, funções utilitárias e recursos fundamentais para programação eficiente.

A proposta deste repositório é organizar conceitos, exemplos e exercícios relacionados à STL, especialmente no contexto de **Algoritmos**, **Estruturas de Dados**, **Programação Competitiva** e desenvolvimento em C++ moderno.

---

## 📌 Sobre o Repositório

A **STL** é uma das partes mais importantes da biblioteca padrão do C++. Ela fornece implementações genéricas, eficientes e reutilizáveis de estruturas de dados e algoritmos.

Com a STL, é possível trabalhar com:

- Vetores dinâmicos
- Listas
- Filas
- Pilhas
- Conjuntos
- Mapas
- Algoritmos de busca e ordenação
- Iteradores
- Funções lambda
- Funções utilitárias
- Estruturas associativas
- Programação genérica

Este repositório tem como objetivo servir como uma base de estudo progressiva para dominar o uso dessas ferramentas.

---

## 🎯 Objetivos

- Estudar os principais componentes da STL
- Compreender o funcionamento dos containers
- Aprender a utilizar algoritmos prontos da biblioteca `<algorithm>`
- Praticar o uso de iteradores
- Resolver problemas com estruturas de dados eficientes
- Aplicar a STL em exercícios de algoritmos
- Melhorar a escrita de código C++ moderno
- Construir uma base sólida para Programação Competitiva
- Relacionar teoria de estruturas de dados com implementações práticas

---

## 🧠 O que é a STL?

A **Standard Template Library** é uma biblioteca genérica do C++ baseada em templates. Ela permite escrever código reutilizável e eficiente, trabalhando com diferentes tipos de dados sem precisar reimplementar estruturas e algoritmos do zero.

A STL é formada principalmente por quatro partes:

| Componente | Descrição |
|---|---|
| **Containers** | Estruturas de dados prontas |
| **Iterators** | Objetos usados para percorrer containers |
| **Algorithms** | Funções genéricas para busca, ordenação, contagem, transformação etc. |
| **Function Objects** | Objetos ou funções usados para personalizar comportamentos |

---

## 🛠️ Tecnologias Utilizadas

<p align="left">
  <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
  <img src="https://img.shields.io/badge/STL-34495E?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Algoritmos-2C3E50?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Estruturas_de_Dados-8E44AD?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Programação_Competitiva-27AE60?style=for-the-badge"/>
</p>

---

## 📚 Conteúdos Estudados

### 1. Containers Sequenciais

Containers que armazenam elementos em uma ordem linear.

Principais estruturas:

- `vector`
- `array`
- `deque`
- `list`
- `forward_list`

Exemplo:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    for (int n : numeros) {
        std::cout << n << " ";
    }

    return 0;
}
```

---

### 2. Containers Associativos

Containers baseados em ordenação, geralmente implementados com árvores balanceadas.

Principais estruturas:

- `set`
- `multiset`
- `map`
- `multimap`

Exemplo:

```cpp
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> idade;

    idade["Ana"] = 20;
    idade["Carlos"] = 25;

    for (const auto& par : idade) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}
```

---

### 3. Containers Não Ordenados

Containers baseados em tabelas hash.

Principais estruturas:

- `unordered_set`
- `unordered_multiset`
- `unordered_map`
- `unordered_multimap`

São úteis quando se deseja acesso médio em tempo constante.

Exemplo:

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> frequencia;

    frequencia["C++"]++;
    frequencia["STL"]++;
    frequencia["C++"]++;

    std::cout << frequencia["C++"] << std::endl;

    return 0;
}
```

---

### 4. Adaptadores de Containers

Estruturas construídas sobre outros containers.

Principais adaptadores:

- `stack`
- `queue`
- `priority_queue`

Exemplo:

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    while (!pilha.empty()) {
        std::cout << pilha.top() << std::endl;
        pilha.pop();
    }

    return 0;
}
```

---

### 5. Iteradores

Iteradores são objetos que permitem percorrer containers de forma genérica.

Tipos importantes:

- `begin()`
- `end()`
- `rbegin()`
- `rend()`
- `iterator`
- `const_iterator`
- `reverse_iterator`

Exemplo:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> valores = {10, 20, 30};

    for (auto it = valores.begin(); it != valores.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
```

---

### 6. Biblioteca `<algorithm>`

A biblioteca `<algorithm>` fornece funções genéricas para manipulação de sequências.

Principais funções:

- `sort`
- `find`
- `count`
- `reverse`
- `max_element`
- `min_element`
- `binary_search`
- `lower_bound`
- `upper_bound`
- `unique`
- `accumulate`
- `transform`
- `copy`
- `remove`

Exemplo:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {5, 2, 9, 1, 3};

    std::sort(numeros.begin(), numeros.end());

    for (int n : numeros) {
        std::cout << n << " ";
    }

    return 0;
}
```

---

### 7. Biblioteca `<numeric>`

A biblioteca `<numeric>` fornece funções úteis para cálculos acumulativos e operações numéricas.

Funções importantes:

- `accumulate`
- `iota`
- `inner_product`
- `partial_sum`
- `adjacent_difference`

Exemplo:

```cpp
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    int soma = std::accumulate(numeros.begin(), numeros.end(), 0);

    std::cout << soma << std::endl;

    return 0;
}
```

---

### 8. Pares e Tuplas

Recursos úteis para armazenar múltiplos valores relacionados.

Principais recursos:

- `pair`
- `tuple`
- `make_pair`
- `make_tuple`
- structured bindings

Exemplo:

```cpp
#include <iostream>
#include <utility>

int main() {
    std::pair<std::string, int> aluno = {"Joseph", 20};

    std::cout << aluno.first << " - " << aluno.second << std::endl;

    return 0;
}
```

---

### 9. Funções Lambda

Funções lambda permitem criar funções anônimas diretamente no código.

Exemplo:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    std::for_each(numeros.begin(), numeros.end(), [](int n) {
        std::cout << n * 2 << " ";
    });

    return 0;
}
```

---

### 10. Programação Genérica

A STL é baseada em templates, permitindo que algoritmos e estruturas funcionem com diferentes tipos de dados.

Exemplo:

```cpp
#include <iostream>

template <typename T>
T maior(T a, T b) {
    return a > b ? a : b;
}

int main() {
    std::cout << maior(10, 20) << std::endl;
    std::cout << maior(3.5, 2.1) << std::endl;

    return 0;
}
```

---

## 📂 Estrutura Sugerida do Repositório

```text
Standard-Template-Library-STL/
│
├── containers/
│   ├── vector/
│   ├── array/
│   ├── deque/
│   ├── list/
│   ├── set/
│   ├── map/
│   ├── unordered_set/
│   └── unordered_map/
│
├── adaptadores/
│   ├── stack/
│   ├── queue/
│   └── priority_queue/
│
├── iteradores/
│   ├── basicos/
│   ├── reversos/
│   └── const_iterators/
│
├── algoritmos/
│   ├── ordenacao/
│   ├── busca/
│   ├── contagem/
│   ├── transformacao/
│   └── particionamento/
│
├── numeric/
│   ├── accumulate/
│   ├── iota/
│   └── partial_sum/
│
├── pares-e-tuplas/
│   ├── pair/
│   └── tuple/
│
├── lambdas/
│
├── exercicios/
│
└── README.md
```

---

## 🧭 Plano de Estudos

### Etapa 1 — Fundamentos da STL

- O que é a STL
- Templates
- Containers
- Iteradores
- Algoritmos genéricos

### Etapa 2 — Containers Sequenciais

- `vector`
- `array`
- `deque`
- `list`
- Diferenças de uso e desempenho

### Etapa 3 — Containers Associativos

- `set`
- `map`
- `multiset`
- `multimap`
- Ordenação automática
- Chaves e valores

### Etapa 4 — Containers Não Ordenados

- `unordered_set`
- `unordered_map`
- Tabelas hash
- Complexidade média

### Etapa 5 — Adaptadores

- `stack`
- `queue`
- `priority_queue`
- Aplicações clássicas

### Etapa 6 — Algoritmos da STL

- Ordenação
- Busca
- Contagem
- Transformação
- Manipulação de sequências

### Etapa 7 — Aplicações em Problemas

- Frequência de elementos
- Ordenação personalizada
- Busca eficiente
- Simulação de filas e pilhas
- Problemas de programação competitiva

---

## 📊 Complexidade Geral dos Containers

| Container | Inserção | Busca | Remoção | Observação |
|---|---:|---:|---:|---|
| `vector` | O(1) amortizado no fim | O(n) | O(n) | Acesso direto rápido |
| `list` | O(1) com iterador | O(n) | O(1) com iterador | Boa para inserções no meio |
| `deque` | O(1) nas extremidades | O(n) | O(n) | Eficiente no início e no fim |
| `set` | O(log n) | O(log n) | O(log n) | Mantém elementos ordenados |
| `map` | O(log n) | O(log n) | O(log n) | Chave e valor ordenados |
| `unordered_set` | O(1) médio | O(1) médio | O(1) médio | Baseado em hash |
| `unordered_map` | O(1) médio | O(1) médio | O(1) médio | Chave e valor por hash |

---

## 🧪 Exemplos de Problemas

Este repositório poderá conter exercícios envolvendo:

- Contagem de frequência com `map`
- Remoção de elementos duplicados com `set`
- Ordenação de vetores
- Busca binária com `binary_search`
- Uso de `priority_queue`
- Simulação de fila com `queue`
- Verificação de balanceamento com `stack`
- Agrupamento de dados com `unordered_map`
- Ordenação personalizada com lambda
- Manipulação de strings com algoritmos da STL

---

## ⚙️ Como Compilar

Para compilar um arquivo C++:

```bash
g++ arquivo.cpp -o programa
```

Com avisos e padrão moderno:

```bash
g++ arquivo.cpp -Wall -Wextra -std=c++17 -o programa
```

Executando:

```bash
./programa
```

No Windows com Code::Blocks, basta criar um projeto C++ ou abrir o arquivo `.cpp` e compilar pelo próprio ambiente.

---

## 🚧 Status do Repositório

Este repositório está em desenvolvimento.

Atualmente, o foco está na organização dos conteúdos relacionados à STL e na construção de uma base progressiva de estudos. Novos exemplos, exercícios e implementações poderão ser adicionados conforme o avanço dos estudos.

---

## 👨‍💻 Autor

**Joseph Antony**  
Estudante de Engenharia da Computação  

GitHub: [@thejosephantony](https://github.com/thejosephantony)

---

## 📄 Licença

Este repositório possui finalidade acadêmica e de estudo.

Os conteúdos aqui organizados podem ser utilizados como apoio para aprendizado, revisão e aprofundamento em C++ e Standard Template Library.
