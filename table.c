#include <stdio.h>

int main(void)
{
    int table = 0;
    int multiplicateur = 1; 
    printf("Rentre la table que tu veux afficher : ");
    scanf("%d", &table);

    
    while(multiplicateur <= 10)
    {
        int resultat = table * multiplicateur;
        printf("%d x %d = %d\n", table, multiplicateur, resultat);
        multiplicateur++;
    }
}
