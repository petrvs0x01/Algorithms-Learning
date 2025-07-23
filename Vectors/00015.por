Algoritmo "dados_pessoas"

// Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
// que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
// de homens.

Var

   i, n : inteiro
   genero : caractere
   alto,menor,mediaM,alturaM,contadorM,numeroH,altura : real
Inicio
      alto <- 0
      contadorM <- 0
      menor <- 3
      alturaM <- 0
      numeroH <- 0
      
      escreva("Quantas pessoas serão digitadas? ")
      leia(n)

      para i de 0 ate n-1 faca
           escreva("Altura da ",i+1,"a pessoa:")
           leia(altura)
           escreva("Genero da ",i+1,"a pessoa:")
           leia(genero)
           escolha genero
                   caso "M"
                        numeroH <- numeroH + 1
                   caso "F"
                        alturaM <- altura + alturaM
                        contadorM <- contadorM + 1
           fimescolha
           se altura < menor entao
              menor <- altura
              senao
                   se altura > alto entao
                      alto <- altura
                   fimse
           fimse
      fimpara

      mediaM <- alturaM / contadorM
      escreval("MENOR ALTURA = ",menor:1:2)
      escreval("MAIOR ALTURA = ",alto:1:2)
      escreval("MEDIA MULHERES = ",mediaM:1:2)
      escreval("TOTAL HOMENS = ",numeroH)
      
Fimalgoritmo
