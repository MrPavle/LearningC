#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleTitle("Pavles C Program");

    while(1)
    {
        char UserInput;

        system("@cls||clear");
        printf("\n");
        printf("========================================\n");
        printf("a) something\n");
        printf("q) quit program\n");
        printf("\n");
        printf("========================================\n");
        printf("->");
        UserInput = fgetc(stdin);
        
        if(UserInput == '\n' || UserInput == ' ' || UserInput == '\0' || UserInput == '\t') {
            
            printf("Try again...");
            fflush(stdin);
            getchar();

        } else {

            if(UserInput == 'a'){

                printf("Something special might happen here...\n");
                printf("\n\nPress Any Key to Continue\n");
                fflush(stdin);
                getchar();

            }//end if

            if(UserInput == 'q'){

                printf("bye!\n");
                return 0;

            }//end if

        }//end if

        fflush(stdin);

    }//end while

    return 0;
    
}// end main
