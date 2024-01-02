
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>
#include "loginui.h"

void soundCompose()
{
    char condition,check;
    printf("Press n/N to stop composing\n");
    printf("Start");
    char *p;
    int i=0,l,r,larr[100]={0},rarr[100]={0},j;

    /*p = malloc(1);
    while(condition !='N')
    {
        printf("E:");
        scanf("%c",&condition);
        *p = condition;
        i++;
        p = realloc(p,i);
    }*/
    while(condition !='n')
    {


        printf("LHS RHS:");
        scanf("%d %d",&l,&r);
        Beep(l*50,r*50);
        larr[i]=l*50;
        rarr[i]=r*50;
        i++;

        printf("Do u want to continue:");
        fflush(stdin);
        scanf("%c",&condition);
    }
    system("cls");
    printf("Music");
    for(j=0;j<=i;j++)
    {
        if(larr[j]==0)
            break;
        Beep(larr[j],rarr[j]);
    }
    printf("Do you want to save the file : y/n :");
    fflush(stdin);
    scanf("%c",&check);
    if(check=='y' || check == 'Y')
    {

        FILE *filePointer ;
        char filename[10];
        printf("Enter filename to be stored : ");
        fflush(stdin);
        gets(filename);

        int dataToBeWritten,i;

        filePointer = fopen(filename, "wb") ;


        if ( filePointer == NULL )
        {
            printf( "%s file failed to open.",filename ) ;
        }
        else
        {

            printf("The file is now opened.\n") ;

            for(i=0;i<=j;i++)
            {

                fwrite(&larr[i],4,1, filePointer) ;
            }
            fwrite(0,4,1,filePointer);//indicator for rhs starting
            for(i=0;i<=j;i++)
            {

                fwrite(&rarr[i],4,1, filePointer) ;
            }
            fclose(filePointer) ;

            printf("Data successfully written in file and stored in current buffer \n");

        }
    }
    else
        printf("YOU'RE dOnE wItH sOnG");
}
void sound()
{

    int i;
    for(i=0;i<15;i++)
    {
        Beep(500,500);
    }
    Beep(1000,1000);
}


/*void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}*/

int main()
{
    printf("Press q to quit \nPress s to start");
    int retu;
    retu = system("cnewpack");

    //if(1)
        //system("cnewpack");
    system("cls");
    printf("dd%d",retu);
    fflush(stdin);
    int choice=0;
    int y,s,opening=0;
    int loginchoice=0;

    loginchoice=loginPage();

    if(loginchoice==1)
        opening = login1();
    if(loginchoice==2)
        opening = signin();
    printf("%d",opening);


    if(opening==1)
    {
        system("cls");
     //system("START www.youtube.com/watch?v=FJBOY0YNlsE");
     Lmain : system("cls");
     gotoxy(35,2);
     printf("Choices  Available:");
     gotoxy(10,3);
     printf("1) Open Youtube --**>");
     gotoxy(10,4);
     printf("2) Open Spotify --**>");
     gotoxy(10,5);
     printf("3) Open News --**>");

     gotoxy(10,6);
     printf("4) Alarm and irittate me:--**>");

     gotoxy(10,7);
     printf("5) Compose Song:--**>");

     gotoxy(10,8);
     printf("6) Radio:--**>");

     gotoxy(10,9);
     printf("7) Movie Time:--**>");
      gotoxy(10,10);
      printf("8) Live news:--**>");

     gotoxy(20,11);
     printf("Enter ur choice : ");
     scanf("%d",&choice);
     //system("cls");
     switch(choice)
     {
         case 0 : {
             printf("Hope u will not sleep \n");
             break;
         }
         L2: case 1:{
                printf("Opening Youtube..........\n");
                printf("1.Tamil songs Playlist\n");
                printf("2.Kannada songs:\n");
                printf("3.English songs:\n");
                printf("4.Telugu songs:\n");
                printf("5.Malayalam songs:\n");
                scanf("%d",&y);
                switch(y)
                {
                    case 1: {
                            system("START https://youtu.be/YUvVmN99sE4");
                            break;
                            }
                            case 2:
                                {
                                    system("START https://youtu.be/avutwbGvc_g");
                                    break;
                                }
                            case 3:
                                {
                                    system("START https://youtu.be/z8y8UZMQaLo");
                                    break;
                                }
                            case 4:
                                {
                                    system("START https://youtu.be/MFtMUBVcM0U");
                                    break;
                                }
                            case 5:
                                {
                                    system("START https://youtu.be/WiU3q9GzGRM");
                                    break;
                                }
                        default :
                        {
                            printf("RE-ENTER \n:");
                            goto L2;
                        }


                }goto Lmain;
                break;
         }
            L1: case 2:{ printf("Spotify opening\n");
                    printf("1.Kanadasa Karakuda\n");
                    printf("2.Kanna Vessi\n");
                    printf("3.Nejukala Nee\n");
                    printf("4.Adi Penne\n");
                    printf("5.Kadhalikathey\n");
                    printf("6.Meherezyla\n");
                    printf("7.Tum Tum\n");
                    printf("8.Laali Laali\n");
                    printf("9.Kadhale Kadhale\n");
                    printf("10.Kadhal Sadhugutu\n");
                    scanf("%d",&s);
                    switch(s)
                    {
                    case 1: {
                        system("START https://open.spotify.com/track/5i2HAgKyxC6NRlsiAgofe8?si=64ff894a926b4465");
                        break;
                    }
                    case 2:{
                         system("START https://open.spotify.com/track/58ys6AEobZzd9e5ctW4Vm2?si=4ac686e000414b8e");
                         break;
                    }
                    case 3:{
                         system("START https://open.spotify.com/track/1VBkQidkoJXhQPJsAvSkNP?si=2d5282a69d274358");
                         break;
                    }
                    case 4: {
                        system("START https://open.spotify.com/track/6XmBh5HSdVzEAaqzEftL9t?si=305d00019ff84a2a");
                        break;
                    }
                    case 5: {
                        system("START https://open.spotify.com/track/2ll0Hczs61IOC6Jj7igd4T?si=fa49442475d04526");
                        break;
                    }
                    case 6: {
                        system("START https://open.spotify.com/track/2HPVvTJ5BZGLOXTyrPH3wy?si=0af3ddc995ea4c44");
                        break;
                    }
                    case 7: {
                        system("START https://open.spotify.com/track/3H3x4NhR3wJh6IvRHmPvkd?si=d05b266cde414cc8");
                        break;
                    }
                    case 8:{
                         system("START https://open.spotify.com/track/1DVzoi8VvpTDVg4Knd1IQs?si=0add2c130078483c");
                         break;
                    }
                    case 9: {
                        system("START https://open.spotify.com/track/2ll0Hczs61IOC6Jj7igd4T?si=fa3cbac7244241a5");
                        break;
                    }
                    case 10: {
                        system("START https://open.spotify.com/track/4shmzSwbjpKUIlNhxzlVeC?si=b1bcda5310a843c7");
                        break;
                    }
                    default :
                        {
                            printf("RE-ENTER \n:");
                            goto L1;
                        }


                }goto Lmain;
                break;

            }
            L3: case 3:{
                printf("Opening News.........\n");
                printf("1.Headlines:\n");
                printf("2.Buissness News:\n");
                printf("3.State News:\n");
                printf("4.Entertainment News:\n");
                printf("5.Sports News:\n");
                int n;
                scanf("%d",&n);
                switch(n)
                {
                    case 1:
                        {
                            system("START https://timesofindia.indiatimes.com");
                            break;
                        }
                    case 2:
                        {
                            system("START https://timesofindia.indiatimes.com/business");
                            break;
                        }
                    case 3:
                        {
                            system("START https://timesofindia.indiatimes.com/india/tamil-nadu");
                            break;
                        }
                    case 4:
                        {
                            system("START https://timesofindia.indiatimes.com/etimes");
                            break;
                        }
                    case 5:
                        {
                            system("START https://timesofindia.indiatimes.com/sports ");
                            break;

                        }
                    default:
                        {
                            printf("RE-ENTER:");
                            goto L3;
                        }



                }goto Lmain;
                break;
            }
             case 4:
                {
                    sound();
                    break;
                    system("cls");
                    goto Lmain;

                }
            L5: case 5:
                {

                    soundCompose();

                    break;
                }
                L6:case 6:
                    {
                       printf("Enter ur Choices:\n");
                       printf("1.Mirchi\n");
                       printf("2.Num Tamil Radio\n");
                       printf("3.Radio City \n");
                       printf("4.Radio IBC\n");
                       int r;
                       scanf("%d",&r);
                       switch(r)
                              {
                                 case 4:
                                 {
                                     system("START https://onlineradiofm.in/stations/ibc-tamil");
                                     break;
                                 }
                                 case 3:
                                 {
                                     system("START https://onlineradiofm.in/stations/city-tamil");
                                     break;
                                 }
                                 case 2:
                                 {
                                     system("START https://onlineradiofm.in/stations/num-tamil");
                                     break;
                                 }
                                 case 1:
                                 {
                                     system("START https://onlineradiofm.in/stations/mirchi");
                                     break;
                                 }
                                 default:
                                    {
                                        printf("RE-ENTER");
                                        goto L6;
                                    }


                              }goto Lmain;
                              break;

                    }
                    L7: case 7:{
                printf("1. Ghilli\n");
                printf("2. Meeyasa Murukku\n");
                printf("3. Kanchana-3\n");
                printf("4.Jumanji-the-next-level\n");
                printf("5.American-Mummy\n");
                int m;
                scanf("%d",&m);
                switch(m)
                            {
                              case 5:
                                {

                                    system("START www.mxplayer.in/movie/watch-american-mummy-tamil-dubbed-movie-online-16255959f41db79296ac445d3047910d?watch=true");
                                    break;
                                }
                                 case 4:
                                 {
                                     system("START www.mxplayer.in/movie/watch-jumanji-the-next-level-tamil-dubbed-movie-online-15e124c39824d0213245f428495aa845?watch=true");
                                     break;
                                 }
                                 case 3:
                                 {
                                     system("START www.mxplayer.in/movie/watch-kanchana-3-movie-online-cae4d0f40ae9046775ea0072f093381a?watch=true");
                                     break;
                                 }
                                 case 2:
                                 {
                                     system("START www.mxplayer.in/movie/watch-meesaya-murukku-movie-online-66ccf5e2b52b0caa6918ba3f45dacb2f?watch=true");
                                     break;
                                 }
                                 case 1:
                                 {
                                     system("START www.mxplayer.in/movie/watch-ghilli-movie-online-1ccc0a9cdade97d0b2e9c6e883cadcc8?watch=true");
                                     break;
                                 }
                                 default:
                                    {
                                        printf("RE-ENTER");
                                        goto L5;
                                    }goto Lmain;
                                    break;
                              }
                    }
                    L8:  case 8:
                                    {
                                        printf("Enter ur choice:");
                                        printf("1.Tamil news:\n");
                                        printf("2.English news:\n");
                                        printf("3.Telugu news:\n");
                                        printf("4.Kannada news:\n");
                                        printf("5.Malayalam news:\n");
                                        int l;
                                        scanf("%d",&l);
                                        switch(l)
                                        {
                                        case 1:
                                            {
                                                system("START https://youtu.be/r44SqwmQ3Bo");
                                                break;
                                            }
                                        case 2:
                                            {
                                                system("START https://youtu.be/WB-y7_ymPJ4");
                                                break;
                                            }
                                        case 3:
                                            {
                                                system("START https://youtu.be/8cufCFrA1E8");
                                                break;
                                            }
                                        case 4:
                                            {
                                                system("START https://youtu.be/jdJoOhqCipA");
                                                break;
                                            }
                                        case 5:
                                            {
                                                system("START https://youtu.be/JtLBF_Gjeiw");
                                                break;
                                            }
                                        default:
                                            {
                                                printf("RE-ENTER:");
                                                goto L8;
                                            }
                                        }
                                        break;
                                    }
            default :
            {
                printf("In deep sleep IG");
                system("cls");
                goto Lmain;
            }


    }
    }
}
