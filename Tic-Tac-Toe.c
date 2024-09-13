#include<stdio.h>
#include<stdlib.h>
// it's a function for printing board
void playboard();

int main(){
	char a[10]={' ','1','2','3','4','5','6','7','8','9'};
	char b[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int player;
	int count=1;
	int input=-1;
	char mark;
	int win=0;

	while(count<10){
		system("clear");
		playboard(a);

		if(count%2!=0){
			player=1;
			mark='O';
		}
		else{
			player=2;
			mark='X';
		}
		printf("| enter the choice of player-%d |-->",player);
		scanf("%d",&input);

		if(input<1||input>9){
			printf("you insert wrong input...\n\n");
			continue;
		}
		if(a[input]=='X'||a[input]=='O'){
			printf("choose other place..\n\n");
			continue;
		}
		if(input==1){ a[1]=mark; b[1]=mark;}
		else if(input==2){ a[2]=mark; b[2]=mark;}
		else if(input==3){ a[3]=mark; b[3]=mark;}
		else if(input==4){ a[4]=mark; b[4]=mark;}
		else if(input==5){ a[5]=mark; b[5]=mark;}
		else if(input==6){ a[6]=mark; b[6]=mark;}
		else if(input==7){ a[7]=mark; b[7]=mark;}
		else if(input==8){ a[8]=mark; b[8]=mark;}
		else if(input==9){ a[9]=mark; b[9]=mark;}
		
        //wining conditions for row
        if( ( a[1] == a[2] && a[2] == a[3] ) || ( a[4] == a[5] && a[5] == a[6] ) || ( a[7] == a[8] && a[8] == a[9] ) ){
            win = 1;
            break;
        }
         //wining conditions for columns
        else if( ( a[1] == a[4] && a[4] == a[7] ) || ( a[2] == a[5] && a[5] == a[8] ) || ( a[3] == a[6] && a[6] == a[9] ) ){
            win = 1;
            break;
        }
         //wining conditions for diagonal
        else if( ( a[1] == a[5] && a[5] == a[9] ) || (  a[3] == a[5] && a[5] == a[7] )  ){
            win = 1;
            break;
        }
          
        count++;
	}
	system("clear");
	
	if( win==1 ){
		printf("--------| congratulation ! |----------\n");
		printf("     ____________________\n");
		printf("    |      |      |      |\n");
		printf("    |   %c  |  %c   |  %c   | \n",b[1],b[2],b[3]);
		printf("    |______|______|______|\n");
		printf("    |      |      |      |\n");
		printf("    |   %c  |  %c   |  %c   | \n",b[4],b[5],b[6]);
		printf("    |______|______|______|\n");
		printf("    |      |      |      |\n");
		printf("    |   %c  |  %c   |  %c   |  \n",b[7],b[8],b[9]);
		printf("    |______|______|______|\n");
		printf("\n");
		printf("\nplayer-%d is a winner....\n",player);
		printf("\ngame over....\n\n");
	}
    else if( count == 10 ){
        printf("\n\n....Game draw !...<(*-*)>\n\n");
        return 0;
    }
}

void playboard(char*p){
	printf(" _____________________________\n");
	printf("|                             |\n");
	printf("|    WELCOME ALL OF YOU IN    |\n");
	printf("|   ====  tic-tac-toe  ====   |\n");
	printf("|            GAME             |\n");
	printf("|_____________________________|\n");
	printf("\n ");
	printf("    ____________________\n");
	printf("    |      |      |      |\n");
	printf("    |   %c  |  %c   |  %c   | \n",p[1],p[2],p[3]);
	printf("    |______|______|______|\n");
	printf("    |      |      |      |\n");
	printf("    |   %c  |  %c   |  %c   | \n",p[4],p[5],p[6]);
	printf("    |______|______|______|\n");
	printf("    |      |      |      |\n");
	printf("    |   %c  |  %c   |  %c   |  \n",p[7],p[8],p[9]);
	printf("    |______|______|______|\n");
	printf("\n");
}