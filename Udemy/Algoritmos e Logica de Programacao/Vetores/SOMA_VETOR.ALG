Algoritmo "soma_vetor"
//Faça um programa que leia N números reais e armazene-os em um vetor.
//Em seguida: - Imprimir todos os elementos do vetor
//- Mostrar na tela a soma e a média dos elementos do vetor
Var
     N, i, cont : inteiro
     soma, media : real
     valor : vetor[0..9] de real
Inicio
      escreva("Quantos numeros voce vai digitar? ")
      leia(N)
      cont <- 0
      para i de 0 ate N-1 faca
      escreva("Digite um numero: ")
      leia(valor[i])
      soma <- soma + valor[i]
      cont <- cont + 1
      fimpara
      
      media <- soma / cont
      
      escreval
      
      escreva("VALORES: ")
      para i de 0 ate N-1 faca
      escreva(valor[i]:2:1, " ")
      fimpara
      escreval
      escreval("SOMA = ", soma:4:2)
      escreval("MEDIA = ",media:3:2)

Fimalgoritmo