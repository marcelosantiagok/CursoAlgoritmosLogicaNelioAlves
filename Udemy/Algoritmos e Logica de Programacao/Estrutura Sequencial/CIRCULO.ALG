Algoritmo "CIRCULO"
//Problema "circulo"
//Fazer um programa para ler o valor "r" do raio de um circulo,
//e depois mostrar o valor da area do
//circulo com tres casas decimais. A formula da area do circulo
//e a seguinte: ........ = ... ..... Voce pode
//usar o valor de .. fornecido pela biblioteca da sua linguagem de programacao,
//ou entao, se preferir, use
//diretamente o valor 3.14159.
Var
    raio, area : real


Inicio
      escreva("Digite o valor do raio do circulo: ")
      leia(raio)
      area <- PI * Exp(raio,2)
      escreval("AREA = ",area:5:3)
      


Fimalgoritmo