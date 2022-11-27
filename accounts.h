void accounts()
{
    system("CLS");
    Password();
    SetColor(28);
    accounts3();

}

void accounts2()
{
    system("CLS");
    SetColor(28);
    upper_box();

    int isFound=0;
    SetColor(28);
    gotoxy(59+65,36);t();SetColor(28);
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Login: \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        FILE *file;
        file= fopen("client_details.txt","rb");
        while(fread(&cli,sizeof(cli),1,file)==1){

            if(strcmp(cli.acc,logacc)==0)
            {
                isFound=1;
                break;
            }

        }
        fclose(file);
        if(isFound==1)
        {
                system("CLS");
                SetColor(28);
                gotoxy(80,22);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome.Login Success!!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                Sleep(1000);
                system("CLS");
                SetColor(28);
                balance_check();
        }
        else
            {
            system("CLS");
            SetColor(28);
            gotoxy(80,22);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User doesn't exist.!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            getch();
            }


}

void accounts3()
{
    int choice;
    system("CLS");


    while(1)
        {
            system("CLS");
            SetColor(28);
            upper_box();
        SetColor(28);
        gotoxy(59+65,36);t();SetColor(28);
        gotoxy(88,17);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  BUBT Bank  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(250);gotoxy(92,19);printf("\xDB\xDB\xDB\xB2\xB2  1. Money Deposit          \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,21);printf("\xDB\xDB\xDB\xB2\xB2  2. Money Withdraw         \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,23);printf("\xDB\xDB\xDB\xB2\xB2  3. Money Transfer         \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,25);printf("\xDB\xDB\xDB\xB2\xB2  4. Check Balance          \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,27);printf("\xDB\xDB\xDB\xB2\xB2  5. Main Menu              \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,29);printf("\xDB\xDB\xDB\xB2\xB2  6. Exit                   \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,31);printf("\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(92,33);printf("Enter your choice: ");
        choice = _getch()-'0';
        switch(choice){
            case 1:
                money_diposit();
                totaldiposit+=dipositedAmo;
                break;

            case 2:

                money_withdraw();
                if(withdrawAmo<=cli.balance)
                totalwithdraw+=withdrawAmo;
                break;
            case 3:

                accmoney_transfer();
                if(transferAmo<=cli.balance)
                totaltransfer+=transferAmo;
                break;
            case 4:
                accounts2();
                break;
            case 5:
                window();
                break;
            case 6:
                Exit_program();
            default:
                break;
        }

    }
}

void money_diposit()
{

    double now,prev;
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,36);t();
    SetColor(28);
            FILE *file;
        file= fopen("client_details.txt","rb+");
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter the Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        while(fread(&cli,sizeof(cli),1,file)==1){

            if(strcmp(cli.acc,logacc)==0)
            {
        system("CLS");
        SetColor(28);
        upper_box();
        SetColor(28);
        gotoxy(59+65,36);t();
        SetColor(28);
        gotoxy(87,17);
        printf("Enter the Amount you want to Deposit: ");
        fflush(stdin);
        scanf("%lf",&dipositedAmo);

            prev=cli.balance;
            now=prev+dipositedAmo;
            cli.balance=now;
            fseek(file,-sizeof(cli), SEEK_CUR);
            fwrite(&cli,sizeof(cli), 1, file);
            system("CLS");
            SetColor(2);
            gotoxy(80,22);
            printf("Diposit successful!!!");
            getch();
            break;
            }
            else
            {
                system("CLS");
                SetColor(28);
                gotoxy(80,22);
                printf("\aUser doesn't exist!!!!");
                getch();
            }
        }
            fclose(file);

}
void money_withdraw()
{
    double now,prev;
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,36);t();
    FILE *file;
    file=fopen("client_details.txt","rb+");
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter the Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    while(fread(&cli,sizeof(cli),1,file)==1)
    {
       if(strcmp(cli.acc,logacc)==0)
            {
            system("CLS");
            SetColor(28);
            upper_box();
            gotoxy(59+65,36);t();
            SetColor(28);
            gotoxy(87,17);
            printf("Enter the Amount you want to withdraw: ");
            scanf("%lf", &withdrawAmo);
           if(withdrawAmo<=cli.balance)
            {
                prev=cli.balance;
                now=prev-withdrawAmo;
                cli.balance=now;
                fseek(file,-sizeof(cli), SEEK_CUR);
                fwrite(&cli,sizeof(cli), 1, file);

                system("CLS");
                Sleep(500);
                SetColor(2);
                gotoxy(80,22);
                printf("Withdraw successful!!!");
                getch();
                break;
            }
            else
            {
            system("CLS");
            SetColor(28);
            gotoxy(80,22);
            printf("\aLess Amount or user not exist, Withdraw is not possible!!!!");
            getch();
            break;
            }
        }


    }
    fclose(file);

}

void accmoney_transfer()
{
    double now,prev;
    int isFound=0,notFound=0;
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,36);t();
    FILE *file;
    file=fopen("client_details.txt","rb+");
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter the Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    while(fread(&cli,sizeof(cli),1,file)==1)
    {
       if(strcmp(cli.acc,logacc)==0)
            {
            system("CLS");
            SetColor(28);
            upper_box();
            gotoxy(59+65,36);t();
            SetColor(28);
            gotoxy(87,17);
            printf("Enter the Amount you want to transfer: ");
            scanf("%lf", &transferAmo);
            gotoxy(87,19);
            printf("Enter the Account number where you want to transfer Money: ");
            scanf("%s",transferacc);
            }
    }

    file=fopen("client_details.txt","rb+");
    while(fread(&cli,sizeof(cli),1,file)==1)
    {
           if(strcmp(cli.acc,transferacc)==0)
           {
               isFound=1;
               break;
           }
    }
    fclose(file);
    file=fopen("client_details.txt","rb+");
    while(fread(&cli,sizeof(cli),1,file)==1)
    {
           if(strcmp(cli.acc,logacc)==0)
           {
            if((transferAmo<=cli.balance)&&(isFound==1))
                {
                prev=cli.balance;
                now=prev-transferAmo;
                cli.balance=now;
                fseek(file,-sizeof(cli), SEEK_CUR);
                fwrite(&cli,sizeof(cli), 1, file);
                system("CLS");
                Sleep(500);
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
    file=fopen("client_details.txt","rb+");
     while(fread(&cli,sizeof(cli),1,file)==1)
        {
             if(strcmp(cli.acc,transferacc)==0)
                {
                    prev=cli.balance;
                    now=prev+transferAmo;
                    cli.balance=now;
                    fseek(file,-sizeof(cli), SEEK_CUR);
                    fwrite(&cli,sizeof(cli), 1, file);
                    break;
                }
        }
        fclose(file);

}
void balance_check()
{
    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,30);t();
    gotoxy(94,22);
    printf("Account Balance is BDT : %.2lf.",cli.balance);
    getch();
}
