 #include <Iostream>
 #include<stdio.h>
 #include<conio.h>
 using namespace std;
 int main ()
 {
     int array[10]={0};
     int n,a,max=array[0],min,modus,x,y;
     for (a=0; a<10; a++)
     {
         printf("Masukan angka ke-%d :", a+1);
         scanf("%d", &n);
         array[a]=n;
         if (a==1)
            min=array[a];
         if(array[a]>max)
            max=array[a];
         if(array[a]<min)
            min=array[a];
     }
     for (x=0; x<10; x++)
     {
         for(y=1; y<10; y++)
         {
             if(array[y]==array[y-1])
             {
                 modus=array[y];
             }
         }
     }
     printf("Nilai Maximal = %d\n", max);
     printf("Nilai Minimal = %d\n", min);
     printf("Frekuensi kemunculan angka = %d", modus);
     return 0;
 }
