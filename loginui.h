#ifndef LOGINUI_H_INCLUDED
#endif  LOGINUI_H_INCLUDED
#define LOGINUI_H_INCLUDED



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>
void timep()
{
    time_t t;
    time(&t);
    gotoxy(1,29);
    printf("Contact: 21pd@psgtech.ac.in");
    gotoxy(40,29);
    printf("%s",ctime(&t));
}

int loginPage()
{
    timep();
    int choice;
    gotoxy(43,8);
    printf("WELCOME :)");
    gotoxy(40,10);
    printf("1) Login");

    gotoxy(40,11);
    printf("2) Sign In");

    gotoxy(35,12);
    printf("Enter your choice :");
    scanf("%d",&choice);


    getch();
    return choice;
}
int signin()
{
    char userdet[3][15];
    system("cls");
    timep();
    gotoxy(43,8);
    printf("LOGIN >> :)");
    gotoxy(40,10);
    printf("1) NAME :");
    scanf("%s",userdet[0]);
    strcat(userdet[0]," ");

    gotoxy(40,11);
    printf("2) PASSWORD :");
    scanf("%s",userdet[1]);
    strcat(userdet[1]," ");

    fflush(stdin);

    gotoxy(40,12);
    printf("3) VECHILE TYPE :");
    scanf("%s",userdet[2]);
    strcat(userdet[2]," ");


    //into file

	FILE *filePointer1 ;


	filePointer1 = fopen("Login", "a") ;

	if ( filePointer1 == NULL )
	{
		printf( "file failed to open." ) ;
	}
	else
	{


		{

			fputs(userdet[0], filePointer1) ;
			fputs(userdet[1], filePointer1) ;
			fputs(userdet[2], filePointer1) ;
			fputs("\n", filePointer1) ;
		}

		fclose(filePointer1) ;

		printf("Data successfully Created..>\n");
		return 1;//printf("s");//main

	}
}

int login1()
{
    FILE *filePointer2 ;


	char dataToBeRead[50];

	filePointer2 = fopen("Login", "r") ;
	char s[15],pass[10];
        again :rewind(filePointer2);

		printf("Enter Name:");scanf("%s",s);
        printf("Enter password:");scanf("%s",pass);


		while(fgets (dataToBeRead, 50, filePointer2)!=NULL)
		{
            char *to = strtok(dataToBeRead," ");
            if(strcmp(to,s)==0)
            {
                //now pass
                to = strtok(NULL, " ");
                if(strcmp(to,pass)==0)
                    return 1;//main
                else
                    {
                        printf("Invaild username // password");
                        system("cls");
                        goto again;
                    }
            }
		}

        fclose(filePointer2) ;
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
