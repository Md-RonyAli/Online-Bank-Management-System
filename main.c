#include<stdio.h>

#include"others.h"
#include"authority.h"
#include"officers.h"
#include"accounts.h"
#include"user.h"


int main()
{
    system("color F0");
    SetConsoleTitle("A Project By Team Dynamites - On-line Bank Management System");
    Sleep(1000);
    Full_Screen();
    welcome();
    system("CLS");
    window();
    return 0;
}
