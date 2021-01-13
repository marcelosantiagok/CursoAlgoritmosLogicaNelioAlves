Algoritmo "glicose"
//Fazer um programa para ler a quantidade de glicose
//no sangue de uma pessoa e depois mostrar na tela a
//classificação desta glicose de acordo com a tabela de
//referência ao lado.
//Normal Até 100 mg/dl
//Elevado Maior que 100 até 140 mg/dl
//Diabetes Maior de 140 mg/dl
Var
      glicose : real

Inicio
     escreva("Digite a medida da glicose: ")
     leia(glicose)
     se glicose <101 entao
        escreval("Classificacao: Normal")
        senao
             se glicose <141 entao
                escreval("Classificacao: Elevado")
                 senao
                      escreval("Classificacao: Diabetes")
             fimse
     fimse

Fimalgoritmo