#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
#define M 10

void main()
{
   /*Dkrasi Variabel*/
   clrscr();
 char  nobp[N][8],nama[N][20];
 char  mk[N][M][25],sks[N][M][2];
 char  nilai[N][M];
 float jml_sewa;
 int   i=1,j,jmlmhs=0,jummk[N];
 char lagi;

 	/*Input Data*/
   printf("\nINPUT NILAI MAHASISWA");
   printf("\n=====================");


 while(1)
 {

  printf("\n\nINPUT MAHASISWA KE :%d",i);
  printf("\n====================      : ");
  printf("\nNo Bp         : ");
  gets(&nobp[i][0]);
  printf("Nama Mahasiswa :");
  gets(&nama[i][0]);
  jummk[i]=0;
  j=1;


  while(1)
  {
  printf("\n\nINPUT MAHASISWA KE :%d",j);
  printf("\n====================      : ");
  printf("\nMata Kuliah         : ");
  gets(&mk[i][j][0]);
  printf("SKS    :");
  gets(&sks[i][j][0]);
  printf("NILAI  :");
  nilai[i][j]=getche();
  jummk[i]=jummk[i]+1;
  j++;

  printf("\nADA MATA KULIAH LAGI :[Y\T]");
  lagi=getche();
  if (lagi=='T'|| lagi=='t')
    break;
 }

 i++;
 jmlmhs=jmlmhs+1;
 printf("\nADA MAHASISWA LAGI : [Y\T]");
 lagi=getche();
 if (lagi=='T'||lagi=='t')
    break;
 }


 /*output data*/
 clrscr();
 printf("\nLEMBAR HASIL NILAI MAHASISWA");
 printf("\n===========================\n");
 for(i=1;i<=jmlmhs;i++)
 {
   printf("\n NOBP : %s",nobp[i]);
   printf("\n NAMA : %s",nama[i]);
   printf("\n=====================");
   printf("\n Mata Kuliah \t\tSKS \tNilai");
   printf("\n ====================");
   for(j=1;j<=jummk[i];j++)
   {
   printf("\n%s    \t%s  \t%c",mk[i][j],sks[i][j],nilai[i][j]);
   }
   printf("\n");
   }
   getch();
   }