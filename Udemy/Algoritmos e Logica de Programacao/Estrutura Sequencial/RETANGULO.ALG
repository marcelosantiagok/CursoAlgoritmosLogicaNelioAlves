Algoritmo "Retangulo"
//Problema "retangulo" Fazer um programa para ler as medidas da base
//e altura de um retângulo. Em seguida, mostrar o valor da área,
//perímetro e diagonal deste retângulo, com quatro casas decimais,
//conforme exemplos.
Var
       base, altura, area, perimetro, diagonal : REAL

Inicio
       escreva("Base do retangulo: ")
       leia(base)
       escreva("Altura do retangulo: ")
       leia(altura)
       area <- base * altura
       escreval("AREA = ", area:2:4)
       perimetro <- (2*base) + (2*altura)
       escreval("PERIMETRO = ", perimetro:2:4)
       diagonal <- RaizQ(Exp(base,2)+Exp(altura,2))
       escreval("DIAGONAL = ", diagonal:1:4)

Fimalgoritmo