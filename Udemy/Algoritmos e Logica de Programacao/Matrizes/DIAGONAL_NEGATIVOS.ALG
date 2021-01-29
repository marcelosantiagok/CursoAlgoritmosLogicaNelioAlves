Algoritmo "diagonal_negativos"
//Fazer um programa para ler um número inteiro N (máximo = 10) e
//uma matriz quadrada de ordem N contendo  números  inteiros.
//Em  seguida,  mostrar  a  diagonal  principal  e  a  quantidade  de  valores
// negativos da matriz.
Var
     i, j, N, negativo : inteiro
     vet : vetor[0..9,0..9] de inteiro
     
Inicio
      escreva("Qual a ordem da matriz? ")
      leia(N)

     para i de 0 ate N-1 faca
      para j de 0 ate N-1 faca
         escreva("Elemento [",i,",",j,"]: ")
         leia(vet[i,j])
      fimpara
     fimpara
     
     escreval("DIAGONAL PRINCIPAL: ")
     
     para i de 0 ate N-1 faca
      para j de 0 ate N-1 faca
        se i = j entao
           escreva(vet[i,j]," ")
        fimse
        se vet[i,j] < 0 entao
          negativo <- negativo + 1
        fimse
      fimpara
     fimpara
     escreval
     escreva("Quantidade de Negativos = ",negativo)
     
     
Fimalgoritmo