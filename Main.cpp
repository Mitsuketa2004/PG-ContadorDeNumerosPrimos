#include <iostream>
using namespace std;

int main(){
int nu,nu2,cont,cont2 = 0;
 begin:
 cout << "\n Escreva 2 números e será verificado quantos numeros primos tem entre eles: ";
 cin >> nu >> nu2;
 /*Recebe dois números e os registra como nu e nu2*/
 if (nu>=nu2){
     cout << "\n Coloque numeros válidos: ";
     goto begin;
 }
 /*Uso esse if, para que o  primeiro número seja menor que o segundo... não causando um erro futuro
  e caso ele introduza, o algoritmo vai voltar o código em "begin:"
 */
 for (nu; nu <= nu2; nu++){
/*Esse for faz com que o primeiro numero se torne o seu sucessor, até ele ser igual ao 
segundo número.
*/    cont=0;
    for (int i=1;i <= nu ; i++){
        /*
        Esse for por sí é responsável percorrer os  na variavel "i" até serem iguais a "nu".
        */
        if (nu%i==0){
            /*
            Esse if é responsável por dividir e verificar se a divisão de "nu" pelo numero percor-
            rido na vez, ou seja, "i" for igual a 0, se tornando uma divisão sólida, será acrescen
            tado a um contador, "cont".
            */
            cont++;
        }

    }
    if(cont==2){
        /*
        Se o Contador for 2, que pela lógica seria um número primo por ser divido por 1 e ele mesmo,
        ele exibe "nu" que está sendo percorrido e adiciona a um outro contador que no final nos 
        mostra o total de números primos encontrados entre os números que foram inseridos pelo usuário.
        */
        cout << "\n" << nu << "\n";
        cont2++;
    }

 }
 cout << "Feito! Encontrei "<< cont2 << " Numeros primos";
return 0;
}
/*
Código elaborado originalmente por:
    J. Leal.

Primeiro código q to colocando no github, espero que tenha ajudado em algo. :]
*/