 #include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
void generate(char *, int,char,char,char,char);
void main()
{
   srand(time(NULL));
   int len;
   char c1,c2,c3,c4;
   printf("Enter length of password : ");
   scanf("%d",&len);
   getchar();
   printf("Do you want to include numbers : (Y/N) ");
   scanf("%c",&c1);
   getchar();
   printf("Do you want to include upper case alphabets : (Y/N) ");
   scanf("%c",&c2);
   getchar();
   printf("Do you want to include lower case alphabets : (Y/N) ");
   scanf("%c",&c3);
   getchar();
   printf("Do you want to include special characters : (Y/N)");
   scanf("%c",&c4);
   getchar();
   if((c1!='Y'&&c1!='N')||(c2!='Y'&&c2!='N')||(c3!='Y'&&c3!='N')||(c4!='Y'&&c4!='N'))
   {
      printf("INVALID INPUT!");
      exit(0);
   }
   char pass[len+1];
   generate(pass,len,c1,c2,c3,c4);
    puts(pass);
}
void generate(char *p, int l,char c11,char c22,char c33, char c44)
{
   if(c11=='Y'&&c22=='Y'&&c33=='Y'&&c44=='Y') //1111
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='Y'&&c33=='Y'&&c44=='N')//1110
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='Y'&&c33=='N'&&c44=='Y') //1101
   {
   char passchar[]= "QWERTYUIOPASDFGHJKLZXCVBNM1234567890!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='Y'&&c33=='N'&&c44=='N') //1100
   {
   char passchar[]= "QWERTYUIOPASDFGHJKLZXCVBNM1234567890";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='N'&&c33=='Y'&&c44=='Y') //1011
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='N'&&c33=='Y'&&c44=='N') //1010
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnm1234567890";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='N'&&c33=='N'&&c44=='Y') //1001
   {
   char passchar[]= "1234567890!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='Y'&&c22=='N'&&c33=='N'&&c44=='N') //1000
   {
   char passchar[]= "1234567890";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='Y'&&c33=='Y'&&c44=='Y')// 0111
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='Y'&&c33=='Y'&&c44=='N') //0110
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='Y'&&c33=='N'&&c44=='Y') //0101
   {
   char passchar[]= "QWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='Y'&&c33=='N'&&c44=='N') //0100
   {
   char passchar[]= "QWERTYUIOPASDFGHJKLZXCVBNM";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='N'&&c33=='Y'&&c44=='Y') //0011
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnm!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='N'&&c33=='Y'&&c44=='N') //0010
   {
   char passchar[]= "qwertyuiopasdfghjklzxcvbnm";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   else if(c11=='N'&&c22=='N'&&c33=='N'&&c44=='Y')//0001
   {
   char passchar[]= "!@#$%^&*()-=_+[];':,.<>/?";
   int lenpass = strlen(passchar);
   for(int i=0;i<l;i++)
   {
    p[i] = passchar[(rand()%lenpass)];
   }
   p[l]='\0';
   }
   if(c11=='N'&&c22=='N'&&c33=='N'&&c44=='N') //0000
   {
   printf("PASSWORD GENERTION ERROR!");
   exit(0);
}
}