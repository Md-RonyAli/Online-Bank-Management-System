#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>



void gotoxy(int x, int y);
void SetColor(int ForgC);
int t(void);


char transferacc[20];
char logacc[20];
char logacctype[20];
char log_pass[20];
char Reg_acc[20];
char Reg_acctype[20];
char search_acctype[20];
char mod_acc[20];
char delete_acc[20];


double dipositedAmo=0,withdrawAmo=0,transferAmo=0,transferAmo1=0,totaldiposit=0,totalwithdraw=0,totaltransfer=0;


void load_screen();
void Password();

void welcome();
void login();
void reg();
void window();
void window1();
void main_window();
void balance_check();
void money_diposit();
void money_withdraw();
void money_transfer();
void accmoney_transfer();
void check_details();
void delete_account();
void Exit_program();
void officero();
void officer();
void officer2();
void officer3();
void officer4();
void accounts();
void accounts2();
void accounts3();
void clientlist();
void acctype_search();
void client_modify();
void change_pass();
void drawRectangle();
void upper_box();
char User_id[20] ={"team dynamites"};
char password[15]={"123456"};
COORD coord = {0,0};
struct client cli;




void Password(void){ ///For password option.-----------------------------------------------------------------------------------------
    system("CLS");
    gotoxy(59+65,36);t();
    SetColor(3);
    char d[25]="Password Protected";
    char ch,pass[15],uid[20];
    int i=0,j;
    gotoxy(80,20);
    for(j=0;j<20;j++)
    {
        Sleep(50);
        printf("*");
    }
    for(j=0;j<18;j++)
    {
        Sleep(50);
        printf("%c",d[j]);
    }
    for(j=0;j<20;j++)
    {
        Sleep(50);
        printf("*");
    }
    gotoxy(80,22);
    printf("Enter User Id :");fflush(stdin);gets(uid);
    gotoxy(80,23);fflush(stdin);
    printf("Enter Password:");

    while(ch!=13)
    {
        ch=_getch();
        if(ch!=13 && ch!=8){///in this loop we put a * in case we enter a character in pass string..........
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';
    if(strcmp(uid,User_id)==0){
        if(strcmp(pass,password)==0){
            gotoxy(80,26);
            SetColor(2);
            printf("---->>\xb2\xdb Password match  \xdb\xb2<<------");
            gotoxy(80,28);
            printf("---->>\xb2\xdb Press any key to continue----->>>>");
            _getch();
        }
    else
        {
            system("CLS");
            gotoxy(80,20);
            SetColor(4);
            printf("\a\xb3\xb3\xb3\xb3 Warning!! Incorrect Password-->>Try Again..");
            _getch();
            Password();
        }
    }
    else{
        system("CLS");
        gotoxy(80,20);
        SetColor(4);
        printf("\a\xb3\xb3\xb3\xb3 Warning !! User Doesn't Exist-->>Try Again..");
        _getch();
        Password();
    }
}

int t(void)
{
    time_t t;
    time(&t);
    printf("Date and time:%s\n",ctime(&t));


    return 0 ;
}

struct client
{
    char acctype[20];
    char fullname[20];
    char acc[20];
    char pass[20];
    char Fname[20];
    char Mname[20];
    char phone_no[20];
    char db[20];
    char add[20];
    char bgrp[20];
    char nat[20];
    double balance;


};

void Full_Screen()
{
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
    return;
}

void gotoxy(int x, int y)
{
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC){///This will set the foreground color for printing in a console window.-------------------------------------
     WORD wColor;
     ///We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     ///We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
        ///Mask out all but the background attribute, and add in the foreground color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void drawRectangle(){///This box is for Main Menu,Search,Delete student option.------------------------------------------------------

    int i, j;
    gotoxy(70,6);
    printf("%c",201);///for top left corner...
    for(i = 1; i < 80; i++){
        gotoxy(i+70, 6);
        printf("%c",205);///for top horizontal line...
    }
    gotoxy(80+70,6);
    printf("%c",187);///for top right corner.....
    for(i = 7; i < 14; i++){
        gotoxy(80+70, i);
        if(i == 13){
            printf("%c",185);///for middle right corner...
        }else{
            printf("%c",186);///for right vertical line...
        }
    }
    gotoxy(80+70, 14);
    printf("%c",188);///for bottom right corner...
    for(i = 1; i <80; i++){
        gotoxy(i+70,14);
            printf("%c",205);///for bottom horizontal line.....

    }
    gotoxy(70,14);
    printf("%c",200);///for bottom left corner...
    for(i = 13; i > 6; i--){
        gotoxy(25+45,i);
        if(i == 13){
            printf("%c",204);///for middle left corner....
        }else{
            printf("%c",186);///for left vertical line...
        }
    }

    for(i = 1; i < 80; i++){
        gotoxy(i+70,13);
        printf("%c",205);///for middle horizontal line....
    }


}

void upper_box(){///We use this in //main menu,Search_student,Delete_student// search --------------------------------------------------
    system("CLS");
    drawRectangle();
    gotoxy(88,8);
    SetColor(17);
    printf(" \xDB\xB2 ===Online Bank Management System=== \xB2\xDB");
    gotoxy(99,9);
    printf("\xDB\xB2 ====BUBT Bank==== \xB2\xDB");
    gotoxy(97,10);
    printf("\xDB\xDB\xDB\xB2\xB2 = Estd : 2020 = \xB2\xB2\xDB\xDB\xDB");
    gotoxy(25+45,24);
    SetColor(17);

}
