/*
KIs Dávid alkotása :)

A program EOF-ig újra és újra számokat kér be.
Mivel csak 1-nél nagyobb pozitv számokat lehet primtényezőkre bontani, ezért az 1et sem fogadja el bemenetként.
Miután be<rtunk egy számot, és lenyomtukaz ENTER-t , akkor máris generálja a primtényezős felbontást. Amit a képernyőre ir ki.
*/
#include "faktoros.h"

int main()
{
    
    	char tomb[30];
	int darabok=0;
	unsigned long long int tomb2[40];//Hogy minnél nagyobb számot tudjak primtényezőkre bontani, ezért unsigned long long int-et használtam.
	printf("Kerem a szamot:");
    while((fgets(tomb,sizeof(tomb)-1,stdin))!=NULL)
{
	faktoros(tomb,&darabok,tomb2);	//ezzel valósitom meg a primtényezőkre bontást		
}
printf("\n");    	
return 0;
}
