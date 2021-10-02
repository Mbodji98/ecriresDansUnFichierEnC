#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX=1000

int main()
{
    FILE* fichier=NULL;
    fichier=fopen("monTexte.txt","w");
    if (fichier!=NULL)
    {
        fputs("Je m\'appelle Papa Abdou Mbodji",fichier);
        fclose(fichier);
        remove("monTexte.txt");
    }
    return 0;
}
