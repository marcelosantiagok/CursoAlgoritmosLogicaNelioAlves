Algoritmo "MEDIDAS"
//Fazer um programa para ler três medidas A, B e C. Em seguida,
//calcular e mostrar (imprimir os dados
//com quatro casas decimais):
//a) a área do quadrado que tem lado A
//b) a área do triângulo retângulo que base A e altura B
//c) a área do trapézio que tem bases A e B, e altura C
Var
      a,b,c, aQ, aTri, aTra : real


Inicio
      escreva("Digite a medida A: ")
      leia(a)
      escreva("Digite a medida B: ")
      leia(b)
      escreva("Digite a medida C: ")
      leia(c)
      aQ <- Exp(a,2)
      aTri <- (a * b) /2
      aTra <- ((a+b) * c) /2
      escreval("AREA DO QUADRADO = ", aQ:8:4)
      escreval("AREA DO TRIANGULO = ", aTri:8:4)
      escreval("AREA DO TRAPEZIO = ",aTra:8:4)


Fimalgoritmo