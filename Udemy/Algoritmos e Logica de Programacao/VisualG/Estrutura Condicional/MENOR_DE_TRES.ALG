Algoritmo "menor_de_tres"
//Fazer um programa para ler três números inteiros.
//Em seguida, mostrar qual o menor dentre os três
//números lidos. Em caso de empate, mostrar apenas uma vez.
Var

   primeiro, segundo, terceiro, menor : inteiro


Inicio
      escreva("Primeiro valor: ")
      leia(primeiro)
      escreva("Segundo valor: ")
      leia(segundo)
      escreva("Terceiro valor: ")
      leia(terceiro)
      
      se (primeiro < segundo) e (primeiro < terceiro) entao
         menor <- primeiro
         senao
              se (segundo < terceiro) entao
              menor <- segundo
                    senao
                    menor <- terceiro
              fimse
      fimse
      
      escreval("MENOR = ",menor)


Fimalgoritmo