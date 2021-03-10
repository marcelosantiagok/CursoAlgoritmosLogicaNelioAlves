Algoritmo "CONSUMO"
// Problema "consumo"Fazer um programa para ler a distância total (em km)
// percorrida por um carro, bem como o total de combustível gasto por
// este carro ao percorrer tal distância. Seu programa deve mostrar
// o consumo médio do carro, com três casas decimais.
Var
        distancia, combustivel, calculo : real


Inicio
      escreva("Distancia percorrida: ")
      leia(distancia)
      escreva("Combustível gasto: ")
      leia(combustivel)
      calculo <- distancia/combustivel
      escreval("Consumo medio = ", calculo:5:3)

Fimalgoritmo