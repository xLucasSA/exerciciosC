# Exercícios Intermediários de Programação em C

## Exercício 1: Contagem de Palavras e Caracteres em uma String

### Descrição:
Escreva um programa em C que leia uma string do usuário e conte o número de palavras e o número total de caracteres (excluindo espaços). Uma palavra é definida como uma sequência de caracteres sem espaços.

### Requisitos:
- O programa deve considerar espaços simples entre as palavras.
- Ele deve exibir a contagem de palavras e a contagem de caracteres.

### Exemplo de entrada:

"Programar em C é divertido"

### Exemplo de saída:

Número de palavras: 5 Número de caracteres: 20

---

## Exercício 2: Ordenação de Estruturas (Cadastro de Alunos)

### Descrição:
Crie um programa que gerencie o cadastro de alunos, onde cada aluno tem nome, matrícula e nota final. O programa deve:
1. Permitir que o usuário cadastre até 10 alunos.
2. Ordenar os alunos pela nota final (de forma decrescente).
3. Exibir os dados dos alunos ordenados.

### Requisitos:
- Utilize uma estrutura (`struct`) para armazenar os dados de cada aluno.
- Utilize um algoritmo de ordenação (como bubble sort ou insertion sort).

### Exemplo de saída esperada:

Aluno 1: Nome: João, Matrícula: 12345, Nota: 8.7 
Aluno 2: Nome: Maria, Matrícula: 67890, Nota: 7.5 
Aluno 3: Nome: Pedro, Matrícula: 54321, Nota: 9.2

---

## Exercício 3: Fatorial Recursivo com Memorização (Memoization)

### Descrição:
Implemente uma função recursiva em C para calcular o fatorial de um número, usando a técnica de **memorização** para otimizar o cálculo. A memorização consiste em armazenar os resultados de cálculos anteriores em um array para evitar recalcular o fatorial de números já processados.

### Requisitos:
- O programa deve calcular o fatorial de um número inteiro positivo fornecido pelo usuário.
- A memorização deve ser usada para evitar recalcular o fatorial de um mesmo número mais de uma vez.

### Exemplo de entrada:

5

### Exemplo de saída:

O fatorial de 5 é: 120