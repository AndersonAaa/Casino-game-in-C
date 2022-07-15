#include <stdio.h>
#include <stdlib.h>

//User data
float cash = 0;
float bet = 0;

//This variable will help at the begginig of the program so the user won't be greeted twice 
int greetings = 0; 

//Option variable, it exists in order tho choose a game in the Casino
int op = 0;


//This variable will end the program if it turns into a 0
int flag = 1;



int main () {

    while (flag == 1)
    {

        printf("\n        CCCCCCCCCCCCC                                     iiii                                     ");
        printf("\n     CCC::::::::::::C                                    i::::i                                    ");
        printf("\n   CC:::::::::::::::C                                     iiii                                     ");
        printf("\n  C:::::CCCCCCCC::::C                                                                              ");
        printf("\n C:::::C       CCCCCC  aaaaaaaaaaaaa       ssssssssss   iiiiiii nnnn  nnnnnnnn       ooooooooooo   ");
        printf("\nC:::::C                a::::::::::::a    ss::::::::::s  i:::::i n:::nn::::::::nn   oo:::::::::::oo ");
        printf("\nC:::::C                aaaaaaaaa:::::a ss:::::::::::::s  i::::i n::::::::::::::nn o:::::::::::::::o");
        printf("\nC:::::C                         a::::a s::::::ssss:::::s i::::i nn:::::::::::::::no:::::ooooo:::::o");
        printf("\nC:::::C                  aaaaaaa:::::a  s:::::s  ssssss  i::::i   n:::::nnnn:::::no::::o     o::::o");
        printf("\nC:::::C                aa::::::::::::a    s::::::s       i::::i   n::::n    n::::no::::o     o::::o");
        printf("\nC:::::C               a::::aaaa::::::a       s::::::s    i::::i   n::::n    n::::no::::o     o::::o");
        printf("\n C:::::C       CCCCCCa::::a    a:::::a ssssss   s:::::s  i::::i   n::::n    n::::no::::o     o::::o");
        printf("\n  C:::::CCCCCCCC::::Ca::::a    a:::::a s:::::ssss::::::si::::::i  n::::n    n::::no:::::ooooo:::::o");
        printf("\n   CC:::::::::::::::Ca:::::aaaa::::::a s::::::::::::::s i::::::i  n::::n    n::::no:::::::::::::::o");
        printf("\n     CCC::::::::::::C a::::::::::aa:::a s:::::::::::ss  i::::::i  n::::n    n::::n oo:::::::::::oo ");
        printf("\n        CCCCCCCCCCCCC  aaaaaaaaaa  aaaa  sssssssssss    iiiiiiii  nnnnnn    nnnnnn   ooooooooooo   \n");

        if(greetings == 0){

            //The user will have to add an amount of money
            printf("\nWelcome!");
            printf("\nAt this pint you have 0.0 in cash :(, please enter an amount of money: ");
            scanf("%f", &cash);

        } else{
            //Remember to the user how much he owns 
            printf("\nRemeber!!! You have $%f", cash); 
        }
        //Change the value in order to cancel the previus condition when the user goes through this part again
        greetings = 1;

        //The user will have to choose a game
        printf("\nWhat game would you want to play todat sir/miss?");  
        printf("\n1. Horse Racing\n2. Coin Flipping\n3. Rock paper scissors");
        printf("\nREMEBER!!!! a diferent number will end the program, so if you want to stop playing you already know what to do ;)\nType a number: ");
        scanf("\n%d", &op);

        
        if(op == 1){
            
            printf("\n,--.  ,--.                                      ,------.                  ,--.                  ");
            printf("\n|  '--'  |  ,---.  ,--.--.  ,---.   ,---.       |  .--. '  ,--,--.  ,---. `--' ,--,--,   ,---.  ");
            printf("\n|  .--.  | | .-. | |  .--' (  .-'  | .-. :      |  '--'.' ' ,-.  | | .--' ,--. |      | | .-. | ");
            printf("\n|  |  |  | ' '-' ' |  |    .-'  `) |   --.      |  ||  |  | '-'  | | `--. |  | |  ||  | ' '-' ' ");
            printf("\n`--'  `--'  `---'  `--'    `----'   `----'      `--' '--'  `--`--'  `---' `--' `--''--' .`-  /  ");
            printf("\n                                                                                        `---'   ");


            printf("\nWelcome to Horse Racing!\nThe game is that you choose one of our 8 horses. The race will take place and show you the winning horse \n-If you get the result right you will win double the money wagered \n-If you do not get it right you will lose ALL your money bet.");
            printf("\nRemeber!!! You have $%f", cash); 
            
            //Choose the horse randomly
            //The value of horse can not be 0
            int flag = 0; 
            int horse; 
            while (flag == 0)
            {
                horse = rand() &2;
                if(horse != 0){
                    flag = 1;
                }
            }
            int horseid = 0;

            //Validates if the user is typing a valid amount of money
            int oph1 = 0;
            while(oph1 == 0){ 
                printf("\nHow much do you want to bet? \n");
                scanf("\n%f", &bet);

                if(bet > cash){
                    printf("\nYou dont't have that money pal :/ try it again\n");
                }else if(bet < 0 || bet == 0){
                    printf("\nC'mon man, dont't ask me for money\n");
                }else{
                    printf("\nAlrigth then...\n");
                    oph1 = 1;
                }
            }

            //The game starts

            //Validates if the user chooses a valid horse
            int oph2 = 0;
            while (oph2 == 0)
            {
                printf("\nWich horse do you want to choose?\n Remember, there are only 8 horses!!!\nEnter: ");
                scanf("%d", &horseid);

                if(horseid>0 && horseid<=8){
                    oph2 = 1;
                }else{
                    printf("\nEnter a valid number\n");
                }
            }

            //Validates the winner 
            if(horse == horseid){
                printf("\nCongratulations!!!! You've won!!\n");
                cash = cash + bet; 
            }else{
                printf("\nBetter luck next time pal :(, the winner horse was the number %d\n", horse);
                cash = cash - bet; 
            }

            //End of the game!!

        }else if(op == 2){

            printf("\n ,-----.         ,--.               ,---. ,--. ,--.                 ,--.                      ");
            printf("\n'  .--./  ,---.  `--' ,--,--,      /  .-' |  | `--'  ,---.   ,---.  `--' ,--,--,   ,---.      ");
            printf("\n|  |     | .-. | ,--. |      |     |  `-, |  | ,--. | .-. | | .-. | ,--. |      | | .-. |     ");
            printf("\n'  '--'| ' '-' ' |  | |  ||  |     |  .-' |  | |  | | '-' ' | '-' ' |  | |  ||  | ' '-' '     ");
            printf("\n `-----'  `---'  `--' `--''--'     `--'   `--' `--' |  |-'  |  |-'  `--' `--''--' .`-  /      ");
            printf("\n                                                    `--'    `--'                  `---'       ");

            printf("\nWelcome to Coin Flipping!!\nThe game consists that you have to choose one option, face or tale. Then the program will flip the coin and give you de answer\nIf you will, you will the the double of the money you've bet, but if you fail, you will lose everything :(");
            printf("\nRemeber!!! You have $%f", cash); 

            //Declare the variables of the game

            //The value of coin can not be 0
            int flag = 0; 
            int coin; 
            while (flag == 0)
            {
                coin = rand() &2;
                if(coin != 0){
                    flag = 1;
                }
            }
            
            int coinid;  

            //Validates if the user is typing a valid amount of money
            int opRPS1 = 0;
            while(opRPS1 == 0){ 
                printf("\nHow much do you want to bet? ");
                scanf("\n%f", &bet);

                if(bet > cash){
                    printf("You dont't have that money pal :/ try it again");
                }else if(bet < 0 || bet ==0){
                    printf("C'mon man, dont't ask me for money");
                }else{
                    printf("Alrigth then...");
                    opRPS1 = 1;
                }
            }
            
            //Validates if the user types a valid nomber
            int oph2 = 0;
            while (oph2 == 0)
            {
                printf("\nFace or tail?\nFace: 1, Tail: 2\nEnter: ");
                scanf("%d", &coinid);

                if(coinid>0 && coinid<=2){
                    oph2 = 1;
                }else{
                    printf("\nEnter a valid number\n");
                }
            }

            //Validates the winner 
            if(coin == coinid){
                printf("\nCongratulations!!!! You've won!!\n");
                cash = cash + bet*2; 
            }else{
                printf("\nBetter luck next time pal :( %d", coin);
                cash = cash - bet; 
            }

            //End of the game!!
            
        }else if(op == 3){


			int choose; 
			int machine; 
			
			printf(",------.              ,--.        ,------.                                   ,---.        ,--.                             \n");
			printf("|  .--. ' ,---.  ,---.|  |,-.     |  .--. ' ,--,--. ,---.  ,---. ,--.--.    '   .-'  ,---.`--' ,---.  ,---.  ,---. ,--.--. \n");
			printf("|  '--'.'| .-. || .--'|     /     |  '--' |' ,-.  || .-. || .-. :|  .--'    `.  `-. | .--',--.(  .-' (  .-' | .-. ||  .--' \n");
			printf("|  ||  | ' '-' '| `--.|  |  |     |  | --' | '-'  || '-' '|   --.|  |       .-'    || `--.|  |.-'  `).-'  `)' '-' '|  |    \n");
			printf("`--' '--' `---'  `---'`--'`--'    `--'      `--`--'|  |-'  `----'`--'       `-----'  `---'`--'`----' `----'  `---' `--'    \n");
			printf("                                                   `--'                                                                    \n");
			
			
			print("Well you know how it works. \n1. Rock\n2. Paper\n3. Scissors\n Enter a valid number");
			
            //Validates if the user is typing a valid amount of money
            int opC1 = 0;
            while(opC1 == 0){ 
                printf("\nHow much do you want to bet? ");
                scanf("\n%f", &bet);

                if(bet > cash){
                    printf("You dont't have that money pal :/ try it again");
                }else if(bet < 0 || bet == 0){
                    printf("C'mon man, dont't ask me for money");
                }else{
                    printf("Alrigth then...");
                    opC1 = 1;
                }
            }
            
            
            

        }else{
            flag = 0;
        }


    }
}   
