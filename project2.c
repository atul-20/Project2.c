#include<stdio.h>

char square[10] ={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void game();
void smartComputer();
void evilComputer();
void twoPlayer();

int main(){
char c;
int n,i=1;
printf("Enter your choice\n");
printf("1.Want to play with smart computer\n");
printf("2.Want to play with evil computer\n");
printf("3.Want to play with player\n");
printf("4.Exit\n");
printf("\n");
scanf("%d",&n);
system("cls");
switch(n){
case 1: smartComputer();
        break;
case 2: printf("Only twoplayer mode is working properly\n");
        break;
case 3: twoPlayer();
        break;
case 4:return 0;
        break;

}

return 0;
}
void game(){
printf("########################### Tic Tac Toe ############################\n\n");

 printf("First Player   X\n");
 printf("Second Player  O\n");
 printf("\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");

    printf("#########################################################################");
}
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}
void twoPlayer()
{
 int player = 1, i, choice;

    char mark;
    do
    {  system("cls");
        game();
        player = (player % 2) ? 1 : 2;

        printf("\nPlayer %d, Enter Marking Place:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    game();

    if (i == 1)
        printf("==>\a\nPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;

}
void smartComputer()
{
    int i,choice,flag=0;
    int player=1;
    char mark='X';
    char smartcomp ='O';
    do
    {
        system("cls");
        printf("                                       -----SMART COMPUTER MODE-----            \n");
        printf("\n\n\n");
        game();
        printf("\nPlayer %d, Enter Marking Place:  ", player);
        scanf("%d", &choice);

          if ((choice == 1 || choice ==2 || choice ==3 ||choice ==4||choice ==5||choice ==6||choice ==7||choice ==8||choice ==9) && square[1] == '1' && square[2] == '2' && square[3] == '3' && square[4] == '4' && square[5] == '5' && square[6] == '6' && square[7] == '7' && square[8] == '8' && square[9] == '9'){
            if(choice==5){
            square[5] = mark;
            square[3] = smartcomp;
          }
          if(choice==1){
            square[1] = mark;
            square[5] = smartcomp;
          }
            if(choice==3){
            square[3] = mark;
            square[5] = smartcomp;
          }
            if(choice==4){
            square[4] = mark;
            square[5] = smartcomp;
          }
            if(choice==2){
            square[2] = mark;
            square[3] = smartcomp;
          }
            if(choice==6){
            square[6] = mark;
            square[5] = smartcomp;
          }
            if(choice==7){
            square[7] = mark;
            square[5] = smartcomp;
          }
            if(choice==8){
            square[8] = mark;
            square[5] = smartcomp;
          }
            if(choice==9){
            square[9] = mark;
            square[5] = smartcomp;
          }
          }

            else if(choice ==2  && square[1]==mark && square[3]=='3' && square[5]==smartcomp){
            square[2]=mark;
            square[3]=smartcomp;
            }
            else if(choice ==4  && (square[1]==mark||square[2]==mark) && square[4]=='4' && square[5]==smartcomp && square[7]=='7'){
            square[4]=mark;
            square[7]=smartcomp;
            }
            else if(choice ==6  && (square[1]==mark||square[2]==mark) && square[6]=='6' && square[5]==smartcomp && square[9]=='9'){
            square[6]=mark;
            square[9]=smartcomp;
            }
            else if(choice ==8  && (square[1]==mark||square[2]==mark) && square[8]=='8' && square[5]==smartcomp && square[7]=='7'){
            square[8]=mark;
            square[7]=smartcomp;
            }
             else if(choice ==1  && square[2]==mark  && square[1]=='1' && square[3]==smartcomp && square[9]=='9'){
            square[1]=mark;
            square[9]=smartcomp;
            }
             else if(choice ==5  && square[2]==mark && square[5]==mark  && square[3]==smartcomp && square[9]=='9'){
            square[5]=mark;
            square[9]=smartcomp;
            }
              else if(choice ==5  && square[2]==mark  && square[1]=='1' && square[3]==smartcomp && square[8]=='8'){
            square[5]=mark;
            square[8]=smartcomp;
            }
            else if(choice ==7  && square[2]==mark  && square[1]==mark && square[3]==smartcomp && square[7]=='7'&& square[4]=='4'){
            square[7]=mark;
            square[4]=smartcomp;
            }
            else if(choice ==4  && square[2]==mark  && square[1]==mark && square[3]==smartcomp && square[7]=='7'&& square[4]=='4'){
            square[4]=mark;
            square[7]=smartcomp;
            }
             else if(choice ==6  && square[2]==mark  && square[1]==mark && square[3]==smartcomp && square[7]==mark&& square[4]==smartcomp){
            square[6]=mark;
            }
            else if(choice ==6  && square[2]==mark && square[3]==smartcomp && square[6]=='6'&& square[5]=='5'){
            square[6]=mark;
            square[5]=smartcomp;
            }
              else if(choice ==8  && square[2]==mark && square[3]==smartcomp && square[8]=='8'&& (square[7]=='7' || square[7]==mark)){
            square[8]=mark;
            }



              else{
            printf("Invalid move ");
            getch();
            }


    i = checkwin();
    }while(i== -1);

    //printf("\n\n\n\n\n\n\n\n\n\n");

    system("cls");
    printf("\n\n\n");
    printf("                                       -----SMART COMPUTER MODE-----            \n");
    game();
    if (i == 1 && flag ==0)
        printf("\a\n==>Player %d win ", player);
    else if(i==1 && flag ==1)
        printf("\a\n==>SmartComputer Won\n ");
    else
        printf("\a\n==>Game draw");

    getch();

    return 0;

}



