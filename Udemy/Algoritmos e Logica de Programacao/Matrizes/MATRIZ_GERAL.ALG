Algoritmo "matriz_geral"
//Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais.
//Em seguida, fazer as seguintes ações:
//a) calcular e imprimir a soma de todos os elementos positivos da matriz.
//b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos
//os elementos desta linha.
//c) fazer a leitura do índice de uma coluna da matriz e, daí,
//imprimir todos os elementos desta coluna.
//d) imprimir os elementos da diagonal principal da matriz.
//e) alterar a matriz elevando ao quadrado todos os números negativos da mesma.
//Em seguida imprimir a matriz alterada.
Var
      N, i, j, linha, coluna : inteiro
      mat: vetor[0..9,0..9] de real
      positivo : real
      
Inicio
      escreva("Qual a ordem da matriz? ")
      leia(N)
      positivo <- 0.0
      para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
           escreva("Elemento [",i,",",j,"]: ")
           leia(mat[i,j])
           se mat[i,j] > 0 entao
               positivo <- positivo + mat[i,j]
           fimse
        fimpara
      fimpara
      
      
      escreval("SOMA DOS POSITIVOS: ",positivo:3:1)
      
      
      escreva("Escolha uma linha: ")
      leia(linha)
      
      para i de 0 ate N-1 faca
          escreva(mat[linha,i]:3:1," ")
      fimpara
      
      escreval
      
      escreva("Escolha uma coluna: ")
      leia(coluna)
      
      para i de 0 ate N-1 faca
          escreva(mat[i,coluna]:3:1," ")
      fimpara
      
      escreval
      
      escreval("DIAGONAL PRINCIPAL: ")
      para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
           se i = j entao
             escreva(mat[i,j]:3:1," ")
           fimse
        fimpara
      fimpara
      
      escreval
      
      para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
           se mat[i,j] < 0 entao
             mat[i,j] <- mat[i,j] * mat[i,j]
           fimse
        fimpara
      fimpara
      
      
      escreval("MATRIZ ALTERADA: ")
      para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
             escreva(mat[i,j]:3:1," ")
        fimpara
        escreval
      fimpara
      


Fimalgoritmo