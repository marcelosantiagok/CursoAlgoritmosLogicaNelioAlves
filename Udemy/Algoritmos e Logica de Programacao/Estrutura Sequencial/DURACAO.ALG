Algoritmo "DURACAO"
//Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
//formato horas:minutos:segundos.

// 1 minuto = 60 segundos
// 1 hora = 60 minutos
// 1 hora = 3600 segundos
Var
      segundos, horas, minutos, duracao, resto: inteiro


Inicio
      escreva("Digite a duracao em segundos: ")
      leia(duracao)
      
      horas <- duracao \ 3600
      resto <- duracao % 3600
      minutos <- resto \ 60
      segundos <- resto % 60
      escreval(horas,":",minutos,":",segundos)


Fimalgoritmo