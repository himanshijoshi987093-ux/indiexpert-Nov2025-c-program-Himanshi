#include<stdio.h>
int main()
{
char name[5][20];
char rollno[5][12];
char address[5][50];
char emailid[5][50];
char number[5][12];
char course[5][20];
 printf( "\n please enter student name:");
 scanf("  %[^\n]",&name);
 printf(" \n please enter student rollno:");
 scanf("   %[^\n]",&rollno);
printf(" \n please enter student address:");
scanf( " %[^\n]",&address);
printf(" \n please enter student emailid:");
scanf("  %[^\n]",&emailid);
printf( " \n please enter student number:");
scanf(" % [^\n]",&number);
printf( " \n please enter student course:");
scanf(" %[^\n]",&course);
////
printf("\n ******Student Deatails Area*******:");
printf( "\n Student name:%s",name);
printf(" \n student rollno: %s",rollno);
printf("\n Student address:%s",address);
printf("\n student emailid:%s",emailid);
printf(" \n student number:%s",number);




    return 0;
}