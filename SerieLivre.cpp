#include<iostream>
#include<string.h>
#include"SerieLivre.h"
using namespace std;
 
SerieLivre::SerieLivre(int taille) : nbp(taille){
  T= new Livre(nbp);
}

void SerieLivre::Afficher(){
    cout<<"les titres sont : ";
    for(int i=0;i<nbp;i++)
        cout<<"livre no "<<i+1<<endl<<T[i].Afficher(); 
}

bool coincide(const SerieLivre & livre1,const SerieLivre & livre2){
    int trouve;
    if(livre1.nbp==livre2.nbp){
        trouve=0;
        for(int i=0;i<nbp;i++){
            trouve=0;
            for(int i=0;i<nbp;i++){
                if(livre1.T[j]==livre2.T[i]) trouve=1; //utilisation d operateur == de la partie 1
            }
            if(!trouve) return false;
        }
        return true;
    }
    return false;
}

bool SerieLivre::SerieIndex(){
    for(int i=0;i<nbp;i++){
        if(this->T[i].index) return true;
    }
    return false;
}

Livre& SerieLivre::operator [] (int i){
    if(i>=0 && i<nbp)
        return  T[i];
    return NULL;
}