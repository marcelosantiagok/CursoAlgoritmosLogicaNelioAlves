Algoritmo "Idades"
//Problema "idades"
//Fazer um programa para ler o nome e idade de duas pessoas.
//Ao final mostrar uma mensagem com os nomes
//e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.
Var
    nome1, nome2 : caractere
    idade1, idade2 : inteiro

Inicio

    escreval("Dados da primeira pessoa: ")
    escreva("Nome: ")
    leia(nome1)
    escreva("Idade: ")
    leia(idade1)
    escreva("Dados da segunda pessoa: ")
    leia(nome2)
    escreva("Idade: ")
    leia(idade2)
    escreval("A idade média de ", nome1, " e ",nome2," é de", (idade1+idade2)/2)

Fimalgoritmo