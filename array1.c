#include<stdio.h>
#include<conio.h>
 main()
 {
     int ar[5]={22,5,3,7,34};
     int a,b;
     printf("\nArray 1: ");
     for(a=0;a<5;a++){
        printf("%d ",ar[a]);
     }
     printf("\nArray 2: ");
     for(b=4;b>=0;b--)
     {
         printf("%d ",ar[b]);
     }
     getch();
 }
