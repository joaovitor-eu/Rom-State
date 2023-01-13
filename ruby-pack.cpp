/*

Esse Projeto É Protegido Pela Licença GPL 2.0
O Projeto Tem Nascionalidade Brasileira, E Qualquer Redistribuição Deve Ser Informado em: mailto::victordreamland@protonmail.com
be a nice guy.

*/

#include <iostream>
#include <string.h>
#include <unistd.h>
#define COLOR_GREEN "\033[1;32m"
#define COLOR_RED "\033[1;31m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_YELLOW "\033[1;33m"
#define RESET_COLOR "\033[0;0m"
using namespace std;

char langSet[2];
char gbaSet[256];

void languageSet(){
    for(;;){
        system("clear");
            system("clear");
            std::cout<<COLOR_MAGENTA "ruby-pack - stable\n" RESET_COLOR<<std::endl;
            std::cout<<"Roms Language:\n"<<std::endl;
            std::cout<<"[ 1 ] - EUA"<<std::endl;
            std::cout<<"[ 2 ] - PT"<<std::endl;
            std::cout<<"[ 3 ] - JP"<<std::endl;
            std::cout<<"[ 4 ] - GE"<<std::endl;
            std::cout<<COLOR_YELLOW "\n<<back = 0" RESET_COLOR<<std::endl;
            std::cout<<"\n> ";
            scanf("%s", &langSet);
            if(strcmp(gbaSet,"1") == 0 && strcmp(langSet,"1") == 0){
                system("clear");
                //aqui começa baixar as isos em ingles
                break;
            }
            if(strcmp(gbaSet,"1") == 0 && strcmp(langSet,"2") == 0){
                system("clear")
                //aqui começa baixar as isos em portugues
                break;
            }
            if(strcmp(gbaSet,"1") == 0 && strcmp(langSet,"3") == 0){
                system("clear");
                //aqui começa baixar as isos em japones
                break;
            }
            if(strcmp(gbaSet,"1") == 0 && strcmp(langSet,"4") == 0){
                system("clear");
                //aqui começa baixar as isos em alemao
                break;
            }
      }
}

void finalstep(){
    static char finalop[256];
    for(;;){
        system("clear");
        std::cout<<COLOR_MAGENTA "ruby-pack - stable\n" RESET_COLOR<<std::endl;
        std::cout<<"[ 1 ] - Download Another Rom's Pack"<<std::endl;
        std::cout<<"[ 2 ] - View Ruby-Pack Sourcecode"<<std::endl;
        std::cout<<"[ 3 ] - Exit"<<std::endl;
        std::cout<<"\n> ";
        scanf("%s", &finalop);
        system("clear");
        if(strcmp(finalop,"1") == 0){
            break;
        }
        if(strcmp(finalop,"2") == 0){
            system("clear");
            system("xdg-open https://github.com/joaovitor-eu");
            exit(EXIT_SUCCESS);
        }
        if(strcmp(finalop,"3") == 0){
            system("clear");
            exit(EXIT_SUCCESS);
        }
    }
}
void gba(){
    for(;;){
        system("clear");
        std::cout<<COLOR_MAGENTA "ruby-pack - stable\n" RESET_COLOR<<std::endl;
        std::cout<<"[ 01 ] - Nintendo Gameboy TM (1989);;";
        std::cout<<COLOR_GREEN "working" RESET_COLOR<<std::endl;
        std::cout<<"[ 02 ] - Virtual Boy (1995);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 03 ] - Nintendo Gameboy Pocket (1996);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 04 ] - Nintendo Gameboy Light (1998);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 05 ] - Nintendo Gameboy Color (1998);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 06 ] - Nintendo Gameboy Advance (2001);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 07 ] - Nintendo Gameboy Advance SP (2003);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 08 ] - Nintendo DS (2004);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 09 ] - Nintendo Gameboy Micro (2005);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 10 ] - Nintendo DS Lite (2006);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 11 ] - Nintendo DSi (2008);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 12 ] - Nintendo DSi XL (2009);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 13 ] - Nintendo 3DS (2011);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 14 ] - Nintendo 3DS XL (2012);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 15 ] - Nintendo 2DS (2013);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 16 ] - New Nintendo 3DS (2014);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 17 ] - New Nintendo 3DS XL (2014);;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 18 ] - All Roms In A Nutshell;;";
        std::cout<<COLOR_GREEN "partial/working"<<std::endl;
        std::cout<<COLOR_YELLOW "\n<<back = 0" RESET_COLOR<<std::endl;
        std::cout<<"\n> ";
        scanf("%s", &gbaSet);
        system("clear");
        if(strcmp(gbaSet,"0") == 0){
            system("clear");
            break;
        }
        if(strcmp(gbaSet,"01") == 1){
            system("clear");
            languageSet();
        }
    }
}
void segaSaturn(){

}
int main(){
    char set[256];
    system("clear && mkdir ~/ruby-pack-roms && clear");
    for(;;){
        system("clear");
        std::cout<<COLOR_MAGENTA "ruby-pack - stable\n" RESET_COLOR<<std::endl;
        std::cout<<"[ 1 ] - GBA (Gameboy, All Gen...);;";
        std::cout<<COLOR_GREEN "partial/working" RESET_COLOR<<std::endl;
        std::cout<<"[ 2 ] - Sega Saturn;;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 3 ] - SNES;;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 4 ] - PSX;;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 5 ] - PS2;;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 6 ] - N64;;";
        std::cout<<COLOR_RED "not working" RESET_COLOR<<std::endl;
        std::cout<<"[ 7 ] - "
        std::cout<<"[ 999 ] - All Roms Pack In A Nutshell;;";
        std::cout<<COLOR_GREEN "partial/working" RESET_COLOR<<std::endl;
        std::cout<<COLOR_YELLOW "\n<<view sourcecode = 0" RESET_COLOR<<std::endl;
        std::cout<<"\n> ";
        scanf("%s", &set);
        system("clear");
        if(strcmp(set,"1") == 0){
            system("clear");
            gba();
        }
        if(strcmp(set,"2") == 0){
            system("clear");
            segaSaturn();
        }
        if(strcmp(set,"0") == 0){
            system("clear");
            system("xdg-open https://github.com/joaovitor-eu");
            system("clear");
        }
    }
}