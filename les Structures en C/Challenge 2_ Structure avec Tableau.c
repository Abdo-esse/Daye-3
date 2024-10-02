#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nom[20];
    char prenom[20];
    float note[100];
}etudian;



int main()
{
    etudian p1;
    int n;

    printf("\n\t Remplire le information suivant\n");
    printf("Entrer le nom d'etudiant:");
    scanf("%[^\n]s",&p1.nom);

    printf("Entrer le prenom d'etudiant:");
    scanf("%[^\n]s",&p1.prenom);

    printf("Entrer le nombre des notes:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Entrer la note n%d:",i+1);
        scanf("%f",&p1.note[i]);

    }

    printf("Le nom d'etudiant est : %s\n",p1.nom);

    printf("Le prenom d'etudiant est:%s\n",p1.prenom);

   for(int i=0;i<n;i++){

        printf("VOTRE note :%.2f\n",p1.note[i]);
   }





    return 0;
}
