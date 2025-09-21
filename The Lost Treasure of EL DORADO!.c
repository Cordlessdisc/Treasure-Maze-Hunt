
#include<stdio.h>
int main()
{
    char field[6][6];
    char move;
    int ph = 0;
    int pv = 0;

    printf("\t\t\t\t\t    ==The Lost Treasure of EL DORADO==\n\n");
    printf("\t\t\t Your'e a Brave Adventurer who is trying to find the Lost Treasure of EL DORADO!\n\n");
    printf("\t\t\t     To Reach your destination, You must travel through treacherous grounds.\n\n");
    printf("\t\t\t\t\t            Press W to go UP\n\n");
    printf("\t\t\t\t\t            Press S to go DOWN\n\n");
    printf("\t\t\t\t\t            Press A to go LEFT\n\n");
    printf("\t\t\t\t\t            Press D to go RIGHT\n\n");
    printf("\t\t\t         Best of Luck Adventurer! Trust me your'e gonna need it...\n\n");
    printf("\t\t\t\t\t              BEWARE OF TRAPS!!\n\n");

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(i == 0 && j == 0)
            {
                field[i][j] = 'S';
            }
            else if(i == 5 && j == 5)
            {
                field[i][j] = 'T';
            }
            else
            {
                field[i][j] = '*';
            }
        }
    }

    while(1)
    {
        for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
           printf("%c   ",field[i][j]);
        }
        printf("\n\n");
    }

    printf("Move: ");
    scanf(" %c",&move);

    if(move == 'W' || move == 'w')
    {
        if(pv > 0)
        {
            pv--;
        }
    }
    else if(move == 'S' || move == 's')
    {
       if(pv < 5)
       {
           pv++;
       }
    }
    else if(move == 'A' || move == 'a')
    {
        if(ph > 0)
        {
            ph--;
        }
    }
    else if(move == 'D' || move == 'd')
    {
        if(ph < 5)
        {
            ph++;
        }
    }
    else
    {
        printf("Invalid Move! Use W/A/S/D\n");
    }

    if(ph == 5 && pv == 5)
    {
        printf("\n\n\t\t\t    Congratulations! You have discovered the Lost Treasure of EL DORADO!!\n\n");
        return 0;
    }

    field[0][3] = 'X';
    field[1][1] = 'X';
    field[1][3] = 'X';
    field[1][5] = 'X';
    field[3][0] = 'X';
    field[3][4] = 'X';
    field[4][2] = 'X';
    field[4][3] = 'X';

    if (field[pv][ph] == 'X')
    {
        printf("\n\nOOPS! You Fell into a Trap! Maybe you aren't cut out for Adventuring, Adventurer.\n\n");
        return 0;
    }

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(field[i][j] == 'X')
            {
                field[i][j] = '*';
            }
        }
    }
    field[pv][ph] = 'x';
    }
}
