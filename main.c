#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int CODE_PIN = 1234;
	int saise_utilisateur = 0000;
	int nombre_essaie = 3;


	for (nombre_essaie = 3; nombre_essaie > 0; nombre_essaie --)
	{
		printf("Veuillez Saisir votre CODE PIN vous avez %d tentative:\n", nombre_essaie);
		scanf("%d", &saise_utilisateur);

		if (saise_utilisateur == CODE_PIN)
		{
			printf("TELEPHONE DEVEROUILLER\n");
			break;
			
		}
		else
		{
			printf("Code incorrect\n");
		}
		
	}

	return 0;
}