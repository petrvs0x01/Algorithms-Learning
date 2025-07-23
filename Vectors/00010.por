Algoritmo "aprovados"

// Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
// no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
// os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
// igual a 6.0 (seis).

Var

   n, i : inteiro
   nota1,nota2, media : real
   pessoasaprovadas: vetor[0..9] de caractere
   pessoas : caractere
   counter : inteiro
   

Inicio
      counter <- 0
      escreva("Quantos alunso serão digitados? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Digite nome, primeira e segunda nota do ",i+1,"o aluno")
           leia(pessoas)
           leia(nota1)
           leia(nota2)
           media <- (nota1 + nota2) / 2
           se media >= 6 entao
              pessoasaprovadas[counter] <- pessoas
              counter <- counter + 1
           fimse
      fimpara
      escreval("Alunos aprovados:")
      para i de 0 ate counter faca
           escreval(pessoasaprovadas[i])
      fimpara

Fimalgoritmo
