#include<iostream>
#include<string.h>
#include"Livre.h"
Livre::Livre(float prix,bool p,char *titre): prix(prix),index(p){
    //copier titre dans titre
     for(int  i=0;i<=strelen(titre);i++)
        this->titre[i]=titre[i];
}
Livre::Livre(const Livre & livre){
    prix=livre.prix;
    index=livre.index;
    //copier titre dans titre
    for(int  i=0;i<=strelen(titre);i++)
        titre[i]=livre.titre[i];
}
void Livre::afficher(){
    cout<<"le prix du livre est : "<<prix<<endl;
    if(index) cout<<"le livre est indexe"<<endl;
    else  cout<<"le livre n'est pas indexe"<<endl;
    //affichage du titre
    cout<<"le titre est  : ";
    for(int i=0;i<strlen(titre);i++)
       cout<<titre[i];
}

char* Livre::getTitre(){
    return titre;
}

Livre::~Livre(){
    delete char;
}

bool Livre::operator==(const Livre &livre){
    if(index==livre.index && prix==livre.prix){
        if(!strcmp(titre,livre.titre)) return true;
        return false;
    }
    return false;
}

bool Livre::operator!=(const Livre &livre){
     return !(*this==livre);
}

Livre& Livre::operator=(const Livre &livre){
    if(this!=&livre){
        prix=livre.prix;
        index=livre.index;
        //copier titre dans titre
        for(int  i=0;i<=strelen(titre);i++)
            titre[i]=livre.titre[i];
    }
    return *this;
}