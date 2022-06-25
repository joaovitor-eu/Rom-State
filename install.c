#include <stdio.h>
#include <stdlib.h>

int main()
{
    int shell, consoles, games;
    system("clear");
    printf("ROM STATE (TO DOWNLOAD ALL ROM'S, TYPE: 1997):\n\n");
    printf("[ 1 ] = SNES\n");
    printf("[ 2 ] = N64\n");
    printf("[ 3 ] = PSX\n\n");
    printf("-> ");
    scanf("%d", &shell);
    if (shell == 1)
    {
        system("clear");
        printf("ROM STATE:\n\n");
        printf("[ ! ] = #");
        printf("[ 0 ] = #All Games\n");
        printf("[ 1 ] = A\n");
        printf("[ 2 ] = B\n");
        printf("[ 3 ] = C\n");
        printf("[ 4 ] = D\n");
        printf("[ 5 ] = E\n");
        printf("[ 6 ] = F\n");
        printf("[ 7 ] = G\n");
        printf("[ 8 ] = H\n");
        printf("[ 9 ] = I\n");
        printf("[ 10 ] = J\n");
        printf("[ 11 ] = K\n");
        printf("[ 12 ] = L\n");
        printf("[ 13 ] = M\n");
        printf("[ 14 ] = N\n");
        printf("[ 15 ] = O\n");
        printf("[ 16 ] = P\n");
        printf("[ 17 ] = Q\n");
        printf("[ 18 ] = R\n");
        printf("[ 19 ] = S\n");
        printf("[ 20 ] = T\n");
        printf("[ 21 ] = U\n");
        printf("[ 22 ] = V\n");
        printf("[ 23 ] = W\n");
        printf("[ 24 ] = X\n");
        printf("[ 25 ] = Y\n");
        printf("[ 26 ] = Z\n");
        printf("\n> ");
        scanf("%d", &consoles);
        system("clear");
        if (consoles == 1)
        {
            printf("[ 1 ] = A.S.P.:Air Strike Patrol\n");
            printf("[ 2 ] = Aaahh!!! Real Monsters\n");
            printf("[ 3 ] = ABC Monday Night Football\n");
            printf("[ 4 ] = Accele Brid\n");
            printf("[ 5 ] = Accelebrid\n");
            printf("[ 6 ] = Ace Wo Nerae\n");
            printf("[ 7 ] = ACME Animation Factory\n");
            printf("[ 8 ] = Acrobat Mission\n");
            printf("[ 9 ] = Act Raiser 2 - Chinmoku Heno Seisen\n");
            printf("[ 10 ] = Action Pachio\n");
            printf("[ 11 ] = ActRaiser\n");
            printf("[ 12 ] = ActRaiser2\n");
            printf("[ 13 ] = AD&D - Eye Of The Beholder\n");
            printf("[ 14 ] = Addams Family Values\n");
            printf("[ 15 ] = Addams Family\n");
            printf("[ 16 ] = Addams Family, The: Pugsley's Scavenger Hunt\n");
            printf("[ 17 ] = Advanced Dungeons & Dragons: Eye of the Beholder\n");
            printf("[ 18 ] = Adventures of Batman & Robin\n");
            printf("[ 19 ] = Adventures of Dr. Franken\n");
            printf("[ 20 ] = Adventures of Kid Kleets\n");
            printf("[ 21 ] = Adventures of Rocky and Bullwinkle and Friends\n");
            printf("[ 22 ] = Adventures of Tintin, The Prisioners Of The Sun\n");
            printf("[ 23 ] = Adventures of Yogi Bear\n");
            printf("[ 24 ] = Aero Fighters\n\n");
            printf("> ");
            scanf("%d", &games);
            system("clear");
            if (games == 1)
            {
                system("clear");
                system("sh bin/snes/asp.sh");
            }
            if (games == 2)
            {
                system("clear");
                system("sh bin/snes/arm.sh");
            }
            if (games == 3)
            {
                /*parei aqui*/
            }
        }
    }
    if (shell == 2)
    {
        system("clear");
        printf("ROM STATE:\n\n");
        printf("[ 1 ] = Mario Kart 64\n");
        printf("\n> ");
        scanf("%d", &consoles);
        if (consoles == 1)
        {
            system("clear");
            system("sh bin/n64/mariokart64.sh");
        }
    }
    if (shell == 3)
    {
        system("clear");
        printf("ROM STATE:\n\n");
        printf("[ 1 ] = Resident Evil\n");
        printf("\n> ");
        scanf("%d", &consoles);
        if (consoles == 1)
        {
            system("clear");
            system("sh bin/psx/residentevil.sh");
        }
    }
    if (shell == 1997)
    {
        for(;;)
        {
        system("clear");
        system("sh bin/n64/mariokart64.sh");
        system("sh bin/snes/supermarioworld.sh");
        system("sh bin/snes/testdrive2.sh");
        system("sh bin/psx/residentevil.sh");
        break;
        }
    }
    printf("\nROM'S FOLDER (ON ~/Downloads/ROM-STATE):\n\n");
}