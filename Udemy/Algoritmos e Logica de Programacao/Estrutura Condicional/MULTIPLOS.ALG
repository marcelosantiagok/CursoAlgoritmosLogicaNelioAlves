Algoritmo "aumento"
//Uma empresa vai conceder um aumento percentual de
//salário aos seus funcionários dependendo de quanto
//cada pessoa ganha, conforme tabela ao lado. Fazer um
//programa para ler o salário de uma pessoa, daí mostrar
//qual o novo salário desta pessoa depois do aumento,
//quanto foi o aumento e qual foi a porcentagem de aumento.
// Salário atual  Até R$ 1000.00 20%
// Salário atual  Acima de R$ 1000.00 até R$ 3000.00 15%
// Salário atual  Acima de R$ 3000.00 até R$ 8000.00 10%
// Salário atual  Acima de R$ 8000.00 5%

Var
      salario, aumento, porcentagem : real
      

Inicio
      escreva("Digite o salario da pessoa:")
      leia(salario)
      
      
      se salario <= 1000.00 entao
           porcentagem <- 20
           aumento <- salario * porcentagem / 100
           salario <- salario + aumento

           senao
                se salario <= 3000.00 entao
                     porcentagem <- 15
                     aumento <- salario * porcentagem / 100
                     salario <- salario + aumento
                     senao
                          se salario <= 8000.00 entao
                             porcentagem <- 10
                             aumento <- salario * porcentagem / 100
                             salario <- salario + aumento
                             senao
                                  porcentagem <- 5
                                  aumento <- salario * porcentagem / 100
                                  salario <- salario + aumento
                          fimse
                fimse
      fimse
      escreval("Novo salario = ",salario:6:2)
      escreval("Aumento = ",aumento:6:2)
      escreval("Porcentagem = ",porcentagem," ")

      

Fimalgoritmo