Algoritmo "cada_linha"
//Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10).
//Mostrar qual o maior elemento de cada linha. Suponha não haver empates.
Var
      i, j, N, maior,menor : inteiro
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
      
      para i de 0 ate N-1 faca
           maior <- vet[i,0]
        para j de 0 ate N-1 faca
             se vet[i,j] > maior entao
               maior <- vet[i,j]
             fimse
        fimpara
        escreval(maior)
      fimpara

Fimalgoritmo