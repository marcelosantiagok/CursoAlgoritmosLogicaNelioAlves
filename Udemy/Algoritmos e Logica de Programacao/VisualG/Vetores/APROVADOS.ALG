Algoritmo "aprovados"
//Fazer um programa para ler um conjunto de N nomes de alunos,
//bem como as notas que eles tiraram no 1º e 2º semestres.
//Cada uma dessas informações deve ser armazenada em um vetor.
//Depois, imprimir os nomes dos alunos aprovados,
//considerando aprovados aqueles cuja média das notas seja maior
// ou igual a 6.0 (seis).
Var
      N, i : inteiro
      nota1, nota2, aux : vetor[0..9] de real
      nome : vetor[0..9] de caractere

Inicio
      escreva("Quantos alunos serao digitados? ")
      leia(N)
      
      para i de 0 ate N-1 faca
          escreva("Digite nome, primeira e segunda nota do ",i+1,"o aluno: ")
          leia(nome[i])
          leia(nota1[i])
          leia(nota2[i])
          aux[i] <- (nota1[i] + nota2[i]) / 2
      fimpara
      
      escreval("Alunos aprovados ")
      para i de 0 ate N-1 faca
           se aux[i] >= 6.0 entao
              escreval(nome[i])
           fimse
      fimpara


Fimalgoritmo