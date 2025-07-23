Algoritmo "media_pares "

// Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
// aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
// digitado, mostrar a mensagem "NENHUM NUMERO PAR"


Var

   i,n,numero : inteiro
   vetorN: vetor[0..9] de inteiro
   soma, contador : inteiro
   media : real

Inicio
      soma <- 0
      contador <- 0
      escreva("Quantos elementos vai ter o vetor? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero:")
           leia(numero)
           vetorN[i] <- numero
           se numero % 2 = 0 entao
              soma <- numero + soma
              contador <- contador + 1
           fimse
      fimpara
      se contador = 0 entao
         escreval("NENHUM NUMERO PAR")
         senao
              media <- soma / contador
              escreval("MEDIA DOS PARES = ",media:1:1)
      fimse
Fimalgoritmo
