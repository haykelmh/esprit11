#include <stdio.h>
#include <stdlib.h>
//ecrire un programme qui determine le caractere qui se répete le plus dans une chaine
int main()
{
    char c [50];
    int Frq [50];
    int i , j , n ; // n : C'EST un COMPTEUR
    int max , indice_max;
    puts ("entrer un nom ! : ");
    gets (c);
    for (i=0 ; i<strlen(c);i++){
        Frq[i]=-1;
    }
    n=1;
    for ( i=0 ; i<strlen(c); i++){
        for (j=i+1; j<strlen(c); j++){
            if (c[i]==c[j]){
                n++;
                Frq[j]=0;
            }
        }
    }
     for ( i=0 ; i<strlen(c); i++){
           if (Frq[i]!=0){
                Frq[i]=n;
            }
        }
    max = Frq[0];
    indice_max=0;
    for (i=0 ; i<strlen(c);i++){
            if (Frq[i]>max){
                max=Frq[i];
                indice_max=i;
            }
    }
    printf (" le caractere qui se repete le plus dans la chaine '%s' est : %c  ", c ,c[indice_max] );



    return 0;
}

