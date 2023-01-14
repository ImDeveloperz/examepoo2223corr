#include"Livre.h"
class SerieLivre{
    protected:
        int nbp;
        Livre *T;
    public:
        SerieLivre(int ); //constructeur usuel
        virtual void Afficher(); 
        friend bool coincide(const SerieLivre &,const SerieLivre &);
        bool SerieIndex();
        Livre& operator [] (int);
}