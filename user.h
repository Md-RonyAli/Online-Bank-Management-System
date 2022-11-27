char a[20];

void login()
{
    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,36);t();

    int isFound=0,i=0;
    char ch;
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Login: \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter your Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("Enter your password: ");
     while(ch!=13)
    {
        ch=_getch();
        if(ch!=13 && ch!=8){///in this loop we put a * in case we enter a character in pass string..........
            putch('*');
            log_pass[i] = ch;
            i++;
        }
    }
    log_pass[i] = '\0';
    gotoxy(87,23);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        FILE *file;
        file= fopen("client_details.txt","rb");
        while(fread(&cli,sizeof(cli),1,file)==1){

            if((strcmp(cli.acc,logacc)==0)&&(strcmp(cli.pass,log_pass)==0))
            {
                isFound=1;
                break;
            }

        }
        if(isFound==1)
        {
                system("CLS");
                strcpy(a,cli.acc);
                SetColor(2);
                gotoxy(80,22);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome.Login Success!!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                Sleep(1000);
                fclose(file);
                system("CLS");
                main_window(a);
        }
        else
            {
            system("CLS");
            fclose(file);
            SetColor(28);
            gotoxy(80,22);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Incorrect Password or User doesn't exist.!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            getch();
            }


        int c;
        SetColor(28);
        lol:
            gotoxy(80,22);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Do you want to login or register again(y/n)??? \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            fflush(stdin);
        if(getch()=='y')
            c=1;
        else if(getch()=='n')
                c=2;
            switch(c)
                {
                    case 1:
                        SetColor(2);
                        login();
                        break;
                    case 2:
                        window();
                        break;
                    default:
                        goto lol;
    }


}
void main_window(char a[20]){///Main menu of the project.--------------------------------------------------------------------------------------


    int choice;
    system("CLS");

    while(1)
        {
        SetColor(2);
        upper_box();
        SetColor(2);
        gotoxy(59+65,38);t();SetColor(2);
        gotoxy(87,17);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  BUBT Bank  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(250);gotoxy(91,20);printf("\xDB\xDB\xDB\xB2\xB2  1. Money Transfer         \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,22);printf("\xDB\xDB\xDB\xB2\xB2  2. Check Details          \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,24);printf("\xDB\xDB\xDB\xB2\xB2  3. Check Balance          \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,26);printf("\xDB\xDB\xDB\xB2\xB2  4. Change Password        \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,28);printf("\xDB\xDB\xDB\xB2\xB2  5. Log out                \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,30);printf("\xDB\xDB\xDB\xB2\xB2  6. Exit                   \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,32);printf("\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,34);printf("Enter your choice: ");
        choice = _getch()-'0';
        switch(choice){
            case 1:

                money_transfer(a);
                if(transferAmo<=cli.balance)
                totaltransfer+=transferAmo;
                break;
            case 2:
                check_details();
                break;
            case 3:
                balance_check();
                break;
            case 4:
                change_pass();
                break;
            case 5:
                system("CLS");
                SetColor(28);
                window();
            case 6:
                Exit_program();
            default:
                break;
        }

    }

}

void money_transfer(char a[20])
{
    double now,prev;
    int isFound=0;
    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,36);t();
    FILE *file;
    file=fopen("client_details.txt","rb+");
    gotoxy(87,17);
    printf("Enter the Amount you want to Transfer: ");
    scanf("%lf", &transferAmo);
    gotoxy(87,19);
    printf("Enter the Account number you want to transfer Money: ");
    scanf("%s",transferacc);
    while(fread(&cli,sizeof(cli),1,file)==1)
    {
            if(strcmp(transferacc,cli.acc)==0){
                    prev=cli.balance;
                now=prev+transferAmo;
                cli.balance=now;
                fseek(file,-sizeof(cli), SEEK_CUR);
                fwrite(&cli,sizeof(cli), 1, file);
                break;
            }
    }
    fclose(file);
    file=fopen("client_details.txt","rb+");
    while(fread(&cli,sizeof(cli),1,file)==1)
    {
        if(strcmp(transferacc,cli.acc)==0){
                isFound=1;
                break;
        }
    }
    fclose(file);
    file=fopen("client_details.txt","rb+");

    while(fread(&cli,sizeof(cli),1,file)==1)
    {
    if(strcmp(a,cli.acc)==0){
                if((transferAmo<=cli.balance)&&(isFound==1))
                {
                prev=cli.balance;
                now=prev-transferAmo;
                cli.balance=now;
                fseek(file,-sizeof(cli), SEEK_CUR);
                fwrite(&cli,sizeof(cli), 1, file);
                system("CLS");
                SetColor(2);
                gotoxy(80,22);
                printf("Transfer successful!!!");
                getch();
                break;
            }
            else
            {
            system("CLS");
            SetColor(28);
            gotoxy(80,22);
            printf("\aLess Amount or Transfer Account not Found, Transfer is not possible!!!!");
            getch();
            break;
            }

        }

    }

    fclose(file);

}

void change_pass()
{
    char change_pass[20];
    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,42);t();
    SetColor(28);
    int isFound=0;
    gotoxy(87,18);
    printf("Enter the Old Password to Change: ");
    fflush(stdin);
    gets(change_pass);
    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,42);t();
    SetColor(2);
    FILE *file;
    file= fopen("client_details.txt","rb+");
    while(fread(&cli,sizeof(cli),1,file) == 1)
    {
        if(strcmp(change_pass,cli.pass) == 0)
        {
           fflush(stdin);
        gotoxy(87,23);printf("\xB2 Enter the New Password: ");gets(cli.pass);

        fseek(file,-sizeof(cli), SEEK_CUR);
        fwrite(&cli, sizeof(cli), 1, file);
        SetColor(2);
        gotoxy(80,40); printf("Password changed Successfully!!!!");
        getch();
        isFound = 1;
        break;
        }

    }
    if(!isFound){
            SetColor(28);
        gotoxy(80,22);
        printf("\xdb No Record Found!!!!!");
        getch();
    }
    fclose(file);
    login();

}
