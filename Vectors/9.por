Algoritmo "mais_velho"

Var

   i,n, idade,idadev : inteiro
   vidade : vetor[0..9] de inteiro
   vnome : vetor[0..9] de caractere
   nomev,nome : caractere

Inicio
      idadev <- 0
      escreva("Quantas pessoas vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Dados da ",i+1,"a pessoa")
           escreva("Nome:")
           leia(nome)
           vnome[i] <- nome
           escreva("Idade:")
           leia(idade)
           vidade[i] <- idade
           se idade > idadev entao
              idadev <- idade
              nomev <- nome
           fimse
      fimpara
      escreval("PESSOA MAIS VELHA: ",nomev)
Fimalgoritmo
