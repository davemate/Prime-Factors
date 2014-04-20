#include "faktoros.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

void cleares( void )
{
	char c;
	c = getchar();
	while( c != '\n' )
    	c = getchar();
}
int faktoros(char *tomb,int *darab,unsigned long long int *tomb2)
{

unsigned long long int db=0;
unsigned long long int numb=0;
        if(tomb[0]=='-' || tomb[0]==' ')
        {
            printf("Adjon meg egy pozitiv egesz szamot.\n");
        }
        else
            {

                numb=strtoull(tomb,(char**)NULL,10);
                    if(numb==ULLONG_MAX)
                    {
                        printf("Tulcsordul!\n");
                        cleares();
                    }
			else{
                   			 long long int div=0;

                                        if(numb>1)
                                        {
                                            printf("\n A %llu szam prim faktorai ->   ",numb);
                                            div = 2;
                                            printf("[");
                                            while(numb%div==0)
                                            {
                                                printf("%llu ",div);
                                        	tomb2[db]=div;
                                                db++;
                                                numb=numb/2;
                                            }
                                                if(numb==0) printf("Az %llu szam nem bonthato primtenyezokre.\n",numb);
                                                else if(numb>1)
                                                {
                                                    long long int i;
                                                    for(i=3;i<=sqrt(numb);i=i+2)
                                                    {
                                                        while(numb%i==0)
                                                        {
                                                            printf("%llu ",i);
                                                           tomb2[db]=numb;
                                                            db++;
                                                            numb=numb/i;
                                                        }
                                                    }
                                                   if(numb>2) {
                                                     	tomb2[db]=numb;
                                                        db++;
                                                        printf("%llu ",numb);
                                                   }

                                                }
                                                printf("]\n");
                                        }
                                        else
                                        {
                                            printf("Adjon meg egy 1-nel nagyobb egesz szamot!\n");
                                        }
                }
            }
		*darab=db;
        	printf("\nKerem a szamot: ");
		return 0;
}

