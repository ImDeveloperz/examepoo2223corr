#include"Livre.cpp"
#include"SerieLivre.cpp"
#include"SerieLivre_edition.cpp"
void main(){
    Livre L;
    SerieLivre L1;
    SerieLivre_edition L2;
    Livre copieL(L);//constructeur de copie de classe Livre
    SerieLivre copieL1(L1); //constructeur de copie de classe Livre
    SerieLivre_edition copieL2(L2); //constructeur de copie de classe Livre
    //complete other test ...
}