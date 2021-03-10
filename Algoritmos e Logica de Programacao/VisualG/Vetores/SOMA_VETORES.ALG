Algoritmo "soma_vetores"
//Faça um programa para ler dois vetores A e B, contendo N elementos cada.
//Em seguida, gere um terceiro vetor C onde cada elemento de C
//é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado.
Var
      i, N : inteiro
      a, b, c : vetor[0..9] de inteiro
Inicio
      escreva("Quantos valores vai ter cada vetor? ")
      leia(N)
      escreva("Digite os valores do vetor A ")
      para i de 0 ate N-1 faca

           leia(a[i])
      fimpara
      escreva("Digite os valores do vetor B ")
      para i de 0 ate N-1 faca

           leia(b[i])
      fimpara
      para i de 0 ate N-1 faca
           c[i] <- a[i]+b[i]
      fimpara
      
      escreval("VETOR RESULTANTE ")

      para i de 0 ate N-1 faca
        escreval(c[i])
      fimpara
      
      
Fimalgoritmo