Algoritmo "negativos"
//Faça um programa que leia um número inteiro positivo N (máximo = 10)
//e depois N números inteiros e armazene-os em um vetor.
//Em seguida, mostrar na tela todos os números negativos lidos.
Var
      N, i : inteiro
      numero : vetor[0..10] de inteiro

Inicio
      escreva("Quantos numeros voce vai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
      escreva("Digite um numero: ")
      leia(numero[i])
      fimpara
      escreval("NUMEROS NEGATIVOS")
      para i de 0 ate N-1 faca
      se numero[i] < 0 entao
      escreval(numero[i])
      fimse
      fimpara


Fimalgoritmo