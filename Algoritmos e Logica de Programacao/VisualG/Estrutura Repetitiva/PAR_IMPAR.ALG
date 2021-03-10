Algoritmo "par_impar"
//Leia um valor inteiro N. Este valor será a quantidade de números inteiros
//que serão lidos em seguida. Para cada valor lido, mostre uma mensagem
//dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO
//ou NEGATIVO. No caso do valor ser igual a zero (0),
//seu programa deverá imprimir apenas NULO.

Var
      x, i, nro : inteiro

Inicio
      escreva("Quantos numeros voce vai digitar? ")
      leia(x)
      para i de 1 ate x faca
      escreva("Digite um numero: ")
      leia(nro)
      se nro = 0 entao
         escreval("NULO")
            senao
            se nro mod 2 <> 0 entao
               se nro < 0 entao
                  escreval("IMPAR NEGATIVO")
                  senao
                  escreval("IMPAR POSITIVO")
               fimse
                    senao
                    se nro > 0 entao
                         escreval("PAR POSITIVO")
                         senao
                         escreval("PAR NEGATIVO")
                    fimse
            fimse
      fimse

      
      
      fimpara

Fimalgoritmo