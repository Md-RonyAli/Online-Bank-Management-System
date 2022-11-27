void clientlist()
{

    int j=23,l=1,k=20;
    SetColor(28);
    upper_box();
    SetColor(45);
    gotoxy(41,20);printf("\xDB\xB2\xB2          Account type            Client Name              Account No         Address            Contact No              Balance       \xB2\xB2\xDB");
    gotoxy(41,21);printf("\xDB\xB2\xB2         ______________          _____________            ____________       _________          ____________            _________      \xB2\xB2\xDB");
    FILE *file;
    file = fopen("client_details.txt","rb");
    while(fread(&cli,sizeof(cli),1,file) == 1){

            k+=2;
        SetColor(45);
        gotoxy(105,17);
        printf("Client List");
        gotoxy(100,18);
        printf("_____________________");
        gotoxy(04+43,j);printf("%d.",l);
        gotoxy(12+43,j);printf("%s",cli.acctype);
        gotoxy(35+43,j);printf("%s",cli.fullname);
        gotoxy(59+43,j);printf("%s",cli.acc);
        gotoxy(78+43,j);printf("%s",cli.add);
        gotoxy(98+43,j);printf("%s",cli.phone_no);
        gotoxy(122+43,j);printf("%.2lf",cli.balance);
        j+=2;l++;SetColor(1);
        gotoxy(6+33,k-1);printf("%c",186);
        gotoxy(6+33,k);printf("%c",186);
        gotoxy(140+43,k-1);printf("%c",186);
        gotoxy(140+43,k);printf("%c",186);Sleep(50);
    }
    fclose(file);
    int i;
    for(i=k+1;i<k+8;i++){
        gotoxy(6+33,i);printf("%c",186);
        gotoxy(140+43,i);printf("%c",186);
    }
    gotoxy(6+33,i);printf("%c",200);
    gotoxy(140+43,i);printf("%c",188);
    for(int f = 7+33; f <140+43; f++){
        gotoxy(f,i);
        printf("%c",205);///for top horizontal line...
    }
    SetColor(45);
    gotoxy(45+43,j+2);printf("Enter any key to Continue..........>>>>>>>> ");
    SetColor(28);
    gotoxy(68+75,j+4);t();
    _getch();

        officer();
}


void check_details()
{


    system("CLS");
    SetColor(2);
    upper_box();
    SetColor(2);
    gotoxy(59+65,40);t();
    gotoxy(105,17);
    printf("Details");
    gotoxy(87,18);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    int isFound = 0;

    FILE *file;
    file = fopen("client_details.txt","rb");
    while(fread(&cli,sizeof(cli),1,file) == 1){
        if(strcmp(logacc,cli.acc) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
        {
        gotoxy(87,19);printf("\xB2 The record is Found");
        gotoxy(132,19);printf("\xB2");
        gotoxy(87,20);printf("\xB2 ");
        gotoxy(132,20);printf("\xB2 ");
        gotoxy(87,21);printf("\xB2 Name                 : %s.",cli.fullname);
        gotoxy(132,21);printf("\xB2 ");
        gotoxy(87,22);printf("\xB2 Account Type         : %s.",cli.acctype);
        gotoxy(132,22);printf("\xB2 ");
        gotoxy(87,23);printf("\xB2 Account number       : %s.",cli.acc);
        gotoxy(132,23);printf("\xB2 ");
        gotoxy(87,24);printf("\xB2 Father's Name        : %s.",cli.Fname);
        gotoxy(132,24);printf("\xB2 ");
        gotoxy(87,25);printf("\xB2 Mother's Name        : %s.",cli.Mname);
        gotoxy(132,25);printf("\xB2 ");
        gotoxy(87,26);printf("\xB2 Date of birth        : %s.",cli.db);
        gotoxy(132,26);printf("\xB2 ");
        gotoxy(87,27);printf("\xB2 Address              : %s.",cli.add);
        gotoxy(132,27);printf("\xB2 ");
        gotoxy(87,28);printf("\xB2 Phone number         : %s.",cli.phone_no);
        gotoxy(132,28);printf("\xB2 ");
        gotoxy(87,29);printf("\xB2 Blood group          : \"%s\"",cli.bgrp);
        gotoxy(132,29);printf("\xB2 ");
        gotoxy(87,30);printf("\xB2 Nationality          : %s.",cli.nat);
        gotoxy(132,30);printf("\xB2 ");
        gotoxy(87,31);printf("\xDB ");
        gotoxy(132,31);printf("\xDB ");
        gotoxy(87,32);printf("\xDB ");
        gotoxy(132,32);printf("\xDB ");
        gotoxy(87,33);printf("\xB2 ");
        gotoxy(132,33);printf("\xB2 ");
        gotoxy(87,34);printf("\xB2 Main balance         : $ %.2lf.",cli.balance);
        gotoxy(132,34);printf("\xB2 ");
        gotoxy(87,35);printf("\xB2 ");
        gotoxy(132,35);printf("\xB2 ");
        gotoxy(87,36);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    }
    else
    {
        system("CLS");
        SetColor(28);
        gotoxy(80,22);printf("Sorry, No record found in the database");
        getch();
    }
    SetColor(28);
    fclose(file);
    lol:
        gotoxy(87,38);
        printf("Do you want to do more(y/n)?");///Here we  ask user if he/she want to search for more student info.
        int c;
    if(getch()=='y')
            c=1;
    else if(getch()=='n')
            c=2;
    switch(c)
    {
        case 1:
            system("CLS");
            main_window();
            break;
        case 2:
            system("CLS");
            Exit_program();
            break;
        default:
            goto lol;
    }
}

void client_modify()
{
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,42);t();
    SetColor(28);
    int isFound=0;
    gotoxy(87,18);
    printf("Enter the Account no you want to modify: ");
    fflush(stdin);
    gets(mod_acc);
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    FILE *file;
    file= fopen("client_details.txt","rb+");
    while(fread(&cli,sizeof(cli),1,file) == 1)
    {
        if(strcmp(mod_acc,cli.acc) == 0)
        {
           fflush(stdin);
        gotoxy(87,17);printf("\xB2 Account Type     : ");gets(cli.acctype);
        gotoxy(87,19);printf("\xB2 Name             : ");gets(cli.fullname);
        gotoxy(87,21);printf("\xB2 Account no       : ");gets(cli.acc);
        gotoxy(87,23);printf("\xB2 Account Password : ");gets(cli.pass);
        gotoxy(87,25);printf("\xB2 Father's name    : ");gets(cli.Fname);
        gotoxy(87,27);printf("\xB2 Mother's name    : ");gets(cli.Mname);
        gotoxy(87,29);printf("\xB2 Date of birth    : ");gets(cli.db);
        gotoxy(87,31);printf("\xB2 Address          : ");gets(cli.add);
        gotoxy(87,33);printf("\xB2 Phone Number     : ");gets(cli.phone_no);
        gotoxy(87,35);printf("\xb2 Blood group      : ");fflush(stdin);gets(cli.bgrp);
        gotoxy(87,37);printf("\xB2 Nationality      : ");gets(cli.nat);
        fseek(file,-sizeof(cli), SEEK_CUR);
        fwrite(&cli, sizeof(cli), 1, file);
        SetColor(2);
        gotoxy(87,40); printf("Modify Successful!!!!!");
        getch();
        isFound = 1;
        break;
        }

    }
    if(!isFound){
            SetColor(28);
        gotoxy(87,22);
        printf("\xdb No Record Found!!!!!");
        getch();
    }
    fclose(file);
    system("CLS");
    lol:
        SetColor(28);
    gotoxy(80,22);
    printf("\xdb\xb2 Do you want to modify more(y/n)?");
    int c;
    fflush(stdin);
    Sleep(1000);
    if(getch()=='y')
            c=1;
    else if(getch()=='n')
            c=2;
    switch(c)
    {
        case 1:
            client_modify();
            break;
        case 2:
            officer();
            break;
        default:
            goto lol;
    }


}

void delete_account()
{
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,36);t();
    int isFound = 0,p=45;
    gotoxy(87,17);
    printf("\xB2 Enter Account number to Delete: ");
    fflush(stdin);
    gets(delete_acc);
    FILE *file, *temp;
    file = fopen("client_details.txt","rb+");
    temp = fopen("temp.txt","wb+");
    while(fread(&cli, sizeof(cli),1,file) == 1)
        {
        if(strcmp(delete_acc,cli.acc) != 0){
            fseek(temp,0,SEEK_CUR);
            fwrite(&cli,sizeof(cli),1,temp);
        }
        else{
                isFound=1;
            }
    }
    fclose(file);
    fclose(temp);
    fflush(stdin);
    remove("client_details.txt");
    rename("temp.txt","client_details.txt");
    if(isFound==0){
            SetColor(28);
        gotoxy(80,25);printf("The Record Not Found..");
        getch();
    }
    else{
            system("CLS");
    SetColor(28);
        gotoxy(80,25);printf("The Account is successfully deleted");
        getch();
    }
    SetColor(28);
    lol:
        gotoxy(80,27);printf("Do you want to delete more(y/n)?");
    int c;fflush(stdin);
    if(getch()=='y')
            c=1;
    else if(getch()=='n')
            c=2;
    switch(c)
    {
        case 1:
            delete_account();
            break;
        case 2:
            officer();
            break;
        default:
            goto lol;
    }
}

void Exit_program()
{

    system("CLS");
    system("color F2");
    Sleep(50);
    gotoxy(70,16);
    Sleep(50);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\t     Software Development CSE-100 project  \t\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,18);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\t        Online Bank Management system      \t\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,20);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\t             is brought to you by          \t\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,22);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\t                TEAM DYNAMITES             \t\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,24);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2   ******* *    *   ***   *   * *   *  *****     \xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,25);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2      *    *    * *     * **  * * *   *          \xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,26);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2      *    ****** ******* * * * *      *****     \xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,27);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2      *    *    * *     * *  ** * *         *    \xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(70,28);
    Sleep(100);
    printf("\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2      *    *    * *     * *   * *   *  *****     \xB2\xB2\xB2\xB2\xDB\xDB\xDB");
    gotoxy(65,33);
    SetColor(4);
    char E[40]={"Exiting in 2 second...........>>>>>>>>>"};
    for(int i=0;i<39;i++){
        Sleep(50);
        printf("%c",E[i]);
    }
    printf("\n\n");
    Sleep(2000);///This will delay 3 second......
    SetColor(0);
    exit(0);

}

void officero()
{
    system("CLS");
    SetColor(28);
    Password();
    officer();

}

void officer()//officers access
{
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,45);t();SetColor(28);
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BUBT Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,20);
    printf("\xDB\xDB\xDB\xDB\xB2  < 1 > Login");
    gotoxy(87,22);
    printf("\xDB\xDB\xDB\xDB\xB2  < 2 > Register\n\n");
    gotoxy(87,24);
    printf("\xDB\xDB\xDB\xDB\xB2  < 3 > Delete Account");
    gotoxy(87,26);
    printf("\xDB\xDB\xDB\xDB\xB2  < 4 > View client list");
    gotoxy(87,28);
    printf("\xDB\xDB\xDB\xDB\xB2  < 5 > Modify client details");
    gotoxy(87,30);
    printf("\xDB\xDB\xDB\xDB\xB2  < 6 > Back to Main Menu");
    gotoxy(87,32);
    printf("\xDB\xDB\xDB\xDB\xB2  < 7 > Exit");
    gotoxy(87,35);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    gotoxy(87,39);
    printf("Enter your Choice: ");
    int num;
    scanf("%d",&num);
    if(num==1)
    {
        system("CLS");
        SetColor(28);
        officer2();
    }

    else if(num==2)
    {
        system("CLS");
        SetColor(28);
        reg();
    }
    else if(num==3)
    {
        system("CLS");
        SetColor(28);
        delete_account();
    }
    else if(num==4)
    {
        system("CLS");
        SetColor(28);
        clientlist();
    }
    else if(num==5)
    {
        system("CLS");
        SetColor(28);
        client_modify();
    }

    else if(num==6)
    {
        system("CLS");
        SetColor(28);
        window();
    }
    else if(num==7)
    {
        system("CLS");
        Exit_program();
    }
}

void officer2()
{
    system("CLS");
    SetColor(28);
    upper_box();

    //char logacc[20];
    int isFound=0;
    SetColor(28);
    gotoxy(59+65,38);t();SetColor(28);
    gotoxy(87,17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Login: \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(87,19);
    printf("Enter your Account number: ");
    fflush(stdin);
    gets(logacc);
    gotoxy(87,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

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
                Sleep(1500);
                system("CLS");
                officer3();
        }
        else
            {
            system("CLS");
            SetColor(28);
            gotoxy(80,22);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User doesn't exist.!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            getch();
            system("CLS");
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
                        officer();
                        break;
                    case 2:
                        Exit_program();
                        break;
                    default:
                        goto lol;
    }


}

void officer3()
{
     SetColor(28);
     upper_box();
     int choice;

    while(1)
        {
        SetColor(28);
        gotoxy(59+65,36);t();SetColor(28);
        gotoxy(87,17);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  BUBT Bank  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(250);gotoxy(91,22);printf("\xDB\xDB\xDB\xB2\xB2  1. Check Details          \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,24);printf("\xDB\xDB\xDB\xB2\xB2  2. Main Menu              \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,26);printf("\xDB\xDB\xDB\xB2\xB2  3. Back                   \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,28);printf("\xDB\xDB\xDB\xB2\xB2  4. Exit                   \xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,30);printf("\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB");
        Sleep(250);gotoxy(91,32);printf("Enter your choice: ");
        choice = _getch()-'0';
        switch(choice){
            case 1:
                system("CLS");
                SetColor(28);
                officer4();
                break;
            case 2:
                system("CLS");
                SetColor(28);
                window();
            case 3:
                system("CLS");
                SetColor(28);
                officer();
            case 4:
                Exit_program();
                break;
            default:
                break;
        }

    }

}

void officer4()
{
    system("CLS");
    SetColor(28);
    upper_box();
    SetColor(28);
    gotoxy(59+65,44);t();SetColor(28);
    gotoxy(102,17);
    printf("Details");
    gotoxy(87,18);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    int isFound = 0;

    FILE *file;
    file = fopen("client_details.txt","rb");
    while(fread(&cli,sizeof(cli),1,file) == 1){
        if(strcmp(logacc,cli.acc) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
        {
        gotoxy(87,19);printf("\xB2 The record is Found");
        gotoxy(132,19);printf("\xB2");
        gotoxy(87,20);printf("\xB2 ");
        gotoxy(132,20);printf("\xB2 ");
        gotoxy(87,21);printf("\xB2 Name                 : %s.",cli.fullname);
        gotoxy(132,21);printf("\xB2 ");
        gotoxy(87,22);printf("\xB2 Account Type         : %s.",cli.acctype);
        gotoxy(132,22);printf("\xB2 ");
        gotoxy(87,23);printf("\xB2 Account number       : %s.",cli.acc);
        gotoxy(132,23);printf("\xB2 ");
        gotoxy(87,24);printf("\xB2 Father's Name        : %s.",cli.Fname);
        gotoxy(132,24);printf("\xB2 ");
        gotoxy(87,25);printf("\xB2 Mother's Name        : %s.",cli.Mname);
        gotoxy(132,25);printf("\xB2 ");
        gotoxy(87,26);printf("\xB2 Date of birth        : %s.",cli.db);
        gotoxy(132,26);printf("\xB2 ");
        gotoxy(87,27);printf("\xB2 Address              : %s.",cli.add);
        gotoxy(132,27);printf("\xB2 ");
        gotoxy(87,28);printf("\xB2 Phone number         : %s.",cli.phone_no);
        gotoxy(132,28);printf("\xB2 ");
        gotoxy(87,29);printf("\xB2 Blood group          : \"%s\"",cli.bgrp);
        gotoxy(132,29);printf("\xB2 ");
        gotoxy(87,30);printf("\xB2 Nationality          : %s.",cli.nat);
        gotoxy(132,30);printf("\xB2 ");
        gotoxy(87,31);printf("\xDB ");
        gotoxy(132,31);printf("\xDB ");
        gotoxy(87,32);printf("\xDB ");
        gotoxy(132,32);printf("\xDB ");
        gotoxy(87,33);printf("\xB2 ");
        gotoxy(132,33);printf("\xB2 ");
        gotoxy(87,34);printf("\xB2 Main balance         : $ %.2lf.",cli.balance);
        gotoxy(132,34);printf("\xB2 ");
        gotoxy(87,35);printf("\xB2 ");
        gotoxy(132,35);printf("\xB2 ");
        gotoxy(87,36);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    }
    else
    {
        system("CLS");
        gotoxy(80,22);printf("Sorry, No record found in the database");
        getch();
    }
    SetColor(28);
    fclose(file);
    lol:
        gotoxy(80,42);
        printf("Do you want to do more(y/n)?");///Here we  ask user if he/she want to search for more student info.
        fflush(stdin);
        int c;
    if(getch()=='y')
            c=1;
    else if(getch()=='n')
            c=2;
    switch(c)
    {
        case 1:
            system("CLS");
            officer3();
            break;
        case 2:
            system("CLS");
            Exit_program();
            break;
        default:
            goto lol;
    }
}
void reg()
{
    system("CLS");
    SetColor(28);
    upper_box();
    int isFound=0;
    SetColor(28);
    gotoxy(59+65,40);t();SetColor(28);
    gotoxy(94,17);
    printf("Enter Account number: ");
    fflush(stdin);
    gets(Reg_acc);
    gotoxy(94,19);
    printf("Enter your Account type: ");
    fflush(stdin);
    gets(Reg_acctype);
    system("CLS");
    FILE *file;
    file= fopen("client_details.txt","ab+");
    while(fread(&cli,sizeof(cli),1,file) == 1){
        if((strcmp(Reg_acc,cli.acc) == 0)&&(strcmp(Reg_acctype,cli.acctype)==0)){///We check here is that Id is already exist or not....
            isFound = 1;
            break;
        }


    }
        if(isFound==0){///if The information was not exist already we entered in the loop...
        fflush(stdin);
        SetColor(28);
        upper_box();
        SetColor(28);
        gotoxy(59+65,42);t();

        gotoxy(87,17);printf("\xB2 Account Type             : ");gets(cli.acctype);
        gotoxy(87,19);printf("\xB2 Name                     : ");gets(cli.fullname);
        gotoxy(87,21);printf("\xB2 Account no               : ");gets(cli.acc);
        gotoxy(87,23);printf("\xB2 Account Password         : ");gets(cli.pass);
        gotoxy(87,25);printf("\xB2 Father's name            : ");gets(cli.Fname);
        gotoxy(87,27);printf("\xB2 Mother's name            : ");gets(cli.Mname);
        gotoxy(87,29);printf("\xB2 Date of birth            : ");gets(cli.db);
        gotoxy(87,31);printf("\xB2 Address                  : ");gets(cli.add);
        gotoxy(87,33);printf("\xB2 Phone Number             : ");gets(cli.phone_no);
        gotoxy(87,35);printf("\xb2 Blood group              : ");fflush(stdin);gets(cli.bgrp);
        gotoxy(87,37);printf("\xB2 Nationality              : ");gets(cli.nat);
        gotoxy(87,39);printf("\xB2 Enter Initial Deposit    : ");scanf("%lf",&cli.balance);

        fwrite(&cli, sizeof(cli), 1, file);

        gotoxy(87,41); printf("Register Successful");
        getch();
        }
        else{///else the program will give  us a warning....
            gotoxy(80,22);printf("\xb2 \aThe Information Already Exist........");
            getch();

        }
        fclose(file);
        officer();
}
