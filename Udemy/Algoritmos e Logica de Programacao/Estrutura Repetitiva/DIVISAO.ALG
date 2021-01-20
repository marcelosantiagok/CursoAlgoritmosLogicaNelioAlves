Algoritmo "divisao"
//Escreva um algoritmo que leia dois números e imprima o resultado da
//divisão do primeiro pelo segundo. Caso não for possível,
//mostre a mensagem “DIVISAO IMPOSSIVEL”.
Var
      x, i : inteiro
      numerador, denominador, divisao : real

Inicio
      escreva("Quantos casos voce vai digitar? ")
      leia(x)
      para i de 1 ate x faca
        escreva("Entre com o numerador: ")
        leia(numerador)
        escreva("Entre com o denominador: ")
        leia(denominador)
        se numerador >= 0 entao
        divisao <- numerador / denominador
            escreval("DIVISAO = ",divisao:3:2)
            senao
            escreval("DIVISAO IMPOSSIVEL")
        fimse
        
        
      fimpara

Fimalgoritmo