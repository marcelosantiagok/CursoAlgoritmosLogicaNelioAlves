Algoritmo "soma_impares"
//Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir,
//calcule e mostre a soma dos números impares entre eles.

Var
       i, x, y , troca, soma : inteiro

Inicio
      escreval("Digite dois numeros: ")
      leia(x)
      leia(y)
      
      se x > y entao
           troca <- x
           x <- y
           y <- troca
      fimse
      
      para i de x+1 ate y-1 faca
           se i mod 2 <> 0 entao
               soma <- soma + i
           fimse
      fimpara
     escreval("SOMA DOS IMPARES = ",soma)

Fimalgoritmo