
void welcome()
{
    system("color F0");
    Sleep(50);
    gotoxy(80,20);
    printf("\xdb\xb2\xb2  To Bank Management System Project  \xb2\xb2\xdb");
    gotoxy(80,22);
    printf("\xdb\xb2\xb2          By TEAM DYNAMITES          \xb2\xb2\xdb");
    Sleep(500);
    gotoxy(80,25);
    SetColor(28);
    char E[52]={"Press Any Key to Verify Authority.........>>>>>>>>>"};
    for(int i=0;i<51;i++){
        Sleep(50);
        printf("%c",E[i]);
    }
    _getch();
}


void window()//for the user and authority accesse5e
{
    system("CLS");

    upper_box();
    SetColor(28);
    gotoxy(59+65,36);t();SetColor(28);
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BUBT Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("\xDB\xDB\xDB\xDB\xB2  < 1 > Authority Access");
    gotoxy(87,21);
    printf("\xDB\xDB\xDB\xDB\xB2  < 2 > User Access\n\n");
    gotoxy(87,23);
    printf("\xDB\xDB\xDB\xDB\xB2  < 3 > Exit\n\n");
    gotoxy(87,25);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    gotoxy(87,27);
    printf("Enter your Choice: ");
    int num;
    scanf("%d",&num);
    if(num==1)
    {
        system("CLS");
        SetColor(28);
        window1();
    }

    else if(num==2)
    {
        system("CLS");
        SetColor(2);
        login();
    }
    else if(num==3)
    {
        system("CLS");
        Exit_program();
    }
}



void window1()//for the authorized access
{
    system("CLS");
    upper_box();
    SetColor(28);
    gotoxy(59+65,38);t();SetColor(28);
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BUBT Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,20);
    printf("\xDB\xDB\xDB\xDB\xB2  < 1 > Officer's Section ");
    gotoxy(87,22);
    printf("\xDB\xDB\xDB\xDB\xB2  < 2 > Account Section\n\n");
    gotoxy(87,24);
    printf("\xDB\xDB\xDB\xDB\xB2  < 3 > Back to Main Menu\n\n");
    gotoxy(87,26);
    printf("\xDB\xDB\xDB\xDB\xB2  < 4 > Exit\n\n");
    gotoxy(87,29);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    gotoxy(87,31);
    printf("Enter your Choice: ");
    int num;
    scanf("%d",&num);
    if(num==1)
    {
        system("CLS");
        SetColor(2);
        officero();
    }

    else if(num==2)
    {
        system("CLS");
        SetColor(28);
        accounts();

    }
    else if(num==3)
    {
        system("CLS");
        SetColor(28);
        window();
    }
    else if(num==4)
    {
        system("CLS");
        Exit_program();
    }
}
