Algoritmo "soma_matrizes"
//Fazer um programa para ler duas matrizes de números inteiros A e B,
//contendo de M linhas e N colunas cada (M e N máximo = 10). Depois,
//gerar uma terceira matriz C onde cada elemento desta é a soma
//dos elementos correspondentes das matrizes originais.
//Imprimir na tela a matriz gerada.
Var
      i, j, N, M  : inteiro
      vet : vetor[0..9,0..9] de inteiro
      matA: vetor[0..9,0..9] de inteiro
      matB: vetor[0..9,0..9] de inteiro

Inicio

      escreva("Quantas linhas vai ter cada matriz? ")
      leia(M)
      escreva("Quantas colunas vai ter cada matriz? ")
      leia(N)
      escreval("Digite os valores da matriz A: ")
      para i de 0 ate M-1 faca
           para j de 0 ate N-1 faca
              escreva("Elemento [",i,",",j,"]: ")
              leia(matA[i,j])
           fimpara
      fimpara
      
      escreval("Digite os valores da matriz B: ")
      para i de 0 ate M-1 faca
           para j de 0 ate N-1 faca
              escreva("Elemento [",i,",",j,"]: ")
              leia(matB[i,j])
           fimpara
      fimpara
      escreval("MATRIZ SOMA")
      para i de 0 ate M-1 faca
           para j de 0 ate N-1 faca
                vet[i,j] <- matA[i,j] + matB[i,j]
                escreva(vet[i,j]," ")
           fimpara
                  escreval
      fimpara

Fimalgoritmo