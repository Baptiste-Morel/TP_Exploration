#include <stdio.h>
#include <stdlib.h>

int main(){

int choixJoueur;

printf("Vous etes dans un couloir, vous avez une porte a gauche et une porte a droite.\n\n");
printf("Qu'elle porte voulez vous ouvrir ? Tapez '1' pour gauche et '2' pour droite.\n\n");

scanf ("%d",&choixJoueur);

if (choixJoueur == 1)
{
	printf("Vous-avez ouvert la porte gauche, Il n'y a rien ici. Le sol s'effondre et vous chutez de 4 etages. Vous vous êtes empales sur un bareau en fer. Dommage.\n\n");
}
else if (choixJoueur == 2)
{
	printf("Vous avez ouvert la porte droite, une petite fille chelou vous regarde depuis le coin de la salle. Elle vous saute au cou et vous bouffe. Dommage.\n\n");
}
else 
{
	printf("choisis une direction.");
}
return 0;
}