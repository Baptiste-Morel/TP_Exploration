#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char reponse[50];
char gauche[50] = ("salle gauche");
char droite[50] = ("salle droite");

printf("Vous etes dans un couloir, vous avez une porte a gauche et une porte a droite.\n\n");
printf("Qu'elle porte voulez vous ouvrir ? Tapez 'salle gauche' pour gauche et 'salle droite' pour droite.\n\n");

scanf ("%[^\n]",&reponse);

if (strcmp(reponse,gauche) == 0)
{
	printf("Vous-avez ouvert la porte gauche, Il n'y a rien ici. Le sol s'effondre et vous chutez de 4 etages. Vous vous êtes empales sur un bareau en fer. Dommage.\n\n");
}

else if (strcmp(reponse,droite) == 0)
{
	printf("Vous avez ouvert la porte droite, une petite fille chelou vous regarde depuis le coin de la salle. Elle vous saute au cou et vous bouffe. Dommage.\n\n");
}
return 0;
}