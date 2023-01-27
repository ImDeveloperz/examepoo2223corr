#include<iostream>
#include<string.h>
#include"SerieLivre__edition.h"
using namespace std;

SerieLivre_edition::SerieLivre_edition(char * edit,int nbp): SerieLivre(nbp){
    strcpy(edition,edit);
}

SerieLivre_edition::SerieLivre_edition(const SerieLivre_edition & Se): SerieLivre(Se.nbp){
    strcpy(edition,Se.edition);
    for(int i=0;i<nbp;i++)
         T[i]=Se.T[i]; //operateur affectation du premier partie 
}
void SerieLivre__edition::Afficher(){
    cout<<"l'edition est "<<edition<<endl;
    cout<<"le nbre de livre est "<<nbp<<endl;
    for(int i=0;i<nbp;i++)
          T[i].Afficher();
}