#include<stdio.h>
void main()
{
    char a[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};
    int n=5,pos1,pos2,f; 
    printf("WELCOME!!!! TO THE GAME OF TIC TAC TOE\n");
    printf("Player 1 is X and Player 2 is O\n");
    printf("Player 1 will start the game\n");
    printf("The positions of the matrix are as follows:\n");
    printf("1 2 3\n4 5 6\n7 8 9\n");
    printf("lets start the game\n");
    printf("\n");
     printf("TIC TAC TOE\n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%c ",a[i][j]);
            }
            printf("\n");
        }
    while(n>0)
    {
        if(pos1=='X' || pos2=='O')
        {
            printf("the position is already filled\n");
        }
        else
        {
            printf("Enter the position of player 1:");
            scanf("%d",&pos1);
            
            switch(pos1)
            {
                case 1:
                    a[0][0]='X';
                    break;
                case 2:
                    a[0][1]='X';
                    break;
                case 3:
                    a[0][2]='X';
                    break;
                case 4:
                    a[1][0]='X';
                    break;
                case 5:
                    a[1][1]='X';
                    break;
                case 6:
                    a[1][2]='X';
                    break;
                case 7:
                    a[2][0]='X';
                    break;
                case 8:
                    a[2][1]='X';
                    break;
                case 9:
                    a[2][2]='X';
                    break;
            }
            if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
        else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
        else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
                break;
            }
            else if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
          
            }
            else if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            } 
            else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%c ",a[i][j]);
            }
            printf("\n");
        }
            printf("Enter the position of player 2:");
            scanf("%d",&pos2);
            switch(pos2)
            {
                case 1:
                    a[0][0]='O';
                    break;
                case 2:
                    a[0][1]='O';
                    break;
                case 3:
                    a[0][2]='O';
                    break;
                case 4:
                    a[1][0]='O';
                    break;
                case 5:
                    a[1][1]='O';
                    break;
                case 6:
                    a[1][2]='O';
                    break;
                case 7:
                    a[2][0]='O';
                    break;
                case 8:
                    a[2][1]='O';
                    break;
                case 9:
                    a[2][2]='O';
                    break;
            }
            for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%c ",a[i][j]);
            }
            printf("\n");
        }
        }
    
        if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
        else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
        else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
                break;
            }
            else if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='X')
            {
                printf("Player 1 is the winner\n");
                f=1;
                break;
          
            }
            else if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            } 
            else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
            else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='O')
            {
                printf("Player 2 is the winner\n");
                f=1;
                break;
            }
        n--;
    }
    if(f!=1)
    {
        printf("the game is draw\n");
    }
    printf("the game is over\n");
    printf("thank you for playing the game\n");
    }