Algoritmo "media_idades"
//Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
//indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
//e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
//mostrar a mensagem "IMPOSSIVEL CALCULAR".

Var
      idade, soma, cont : inteiro
      media : real

Inicio
       idade <- 0
       cont <- 0
       soma <- 0
       media <- 0
       enquanto idade >= 0 faca
                escreva("Digite as idades: ")
                leia(idade)
                           se idade > 0 entao
                            soma <- soma + idade
                            cont <- cont + 1
                           fimse
       fimenquanto
       
       
       se cont = 0 entao
        escreval("IMPOSSIVEL CALCULAR")
          senao
          media <- soma / cont
           escreval("MEDIA = ",media:4:2)
       fimse
       

Fimalgoritmo