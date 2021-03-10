Algoritmo "PAGAMENTO"
//Fazer um programa para ler o nome de um(a) funcionário(a),
//o valor que ele(a) recebe por hora, e a
//quantidade de horas trabalhadas por ele(a). Ao final,
//mostrar o valor do pagamento do funcionário com
//uma mensagem explicativa, conforme exemplo.
Var
       nome : caractere
       valorHora, horaTrabalhada, calculo : real


Inicio
      escreva("Nome: ")
      leia(nome)
      escreva("Valor por hora: ")
      leia(valorHora)
      escreva("Horas trabalhadas: ")
      leia(horaTrabalhada)
      calculo <- valorHora * horaTrabalhada
      escreval("O pagamento para ",nome," deve ser ",calculo:4:2)


Fimalgoritmo