#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nom[20];
    char prenom[20];
    int age;


}persson;



int main()
{
    persson p1;



    printf("entrer votre nom:");
    scanf(" %[^\n]s",&p1.nom);
    printf("entrer votre prenom:");
    scanf(" %[^\n]s",&p1.prenom);
    printf("entrer votre age:");
    scanf("%d",&p1.age);

    printf("Votre nom est : %s\n",p1.nom);
    printf("Votre prenom:%s\n",p1.prenom);
    printf("Votre age:%d\n",p1.age);




    return 0;
}
