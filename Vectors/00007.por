Algoritmo "abaixo_da_media"

//Fazer um programa para ler um número inteiro N e depois um vetor de N números
//reais.
//Em seguida, mostrar na tela a média aritmética de todos elementos
//com três casas decimais. Depois mostrar todos
//os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.


Var

   i,n : inteiro
   vetorS: vetor[0..9] de real
   numero,media,soma:real

Inicio
      soma <- 0
      escreva("Quantos elementos vai ter o vetor? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero:")
           leia(numero)
           vetorS[i] <- numero
           soma <- soma + numero
      fimpara
      escreval("")
      media <- soma / n
      escreval("MEDIA DO VETOR = ",media:1:3)
      escreval("ELEMENTOS ABAIXO DA MEDIA:")
      para i de 0 ate n-1 faca
           se vetorS[i] < media entao
              escreval(vetorS[i])
           fimse
      fimpara
Fimalgoritmo
