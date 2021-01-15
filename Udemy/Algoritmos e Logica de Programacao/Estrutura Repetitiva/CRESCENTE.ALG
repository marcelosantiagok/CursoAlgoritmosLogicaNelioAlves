Algoritmo "crescente"
//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.
//Escreva para cada X e Y uma mensagem que indique se estes valores
//foram digitados em ordem crescente ou decrescente.
//O programa deve finalizar quando forem digitados dois valores iguais.
Var
      x, y : inteiro

Inicio
      x <- 0
      y <- 1
      enquanto x <> y faca
         escreva("Digite dois numeros: ")
         leia(x)
         leia(y)
                se x > y entao
                   escreval("DECRESCENTE")
                   senao
                        se y > x entao
                        escreval("CRESCENTE")
                        fimse
                fimse
                
      fimenquanto


Fimalgoritmo