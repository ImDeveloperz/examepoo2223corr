#include<iostream>
#include<string.h>
#include"SerieLivre__edition.h"


SerieLivre_edition::SerieLivre_edition(char * edit,int nbp): SerieLivre(nbp){
    for(int  i=0;i<=strelen(edit);i++)
        edition[i]=edit[i]; 
}

SerieLivre_edition::SerieLivre_edition(const SerieLivre_edition & Se){
    for(int  i=0;i<=strelen(edit);i++)
        edition[i]=edit[i];
}