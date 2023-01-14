#include"SerieLivre.h"
class SerieLivre_edition : public SerieLivre{
    char *edition;
    public:
        SerieLivre_edition(char * ,int); //constructeur usuel
        SerieLivre_edition(const SerieLivre_edition&); //constructeur recopie
        void Afficher();
}