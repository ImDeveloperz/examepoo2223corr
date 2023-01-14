//part 1 : 1 point pour la declaration du class
class Livre{
    char *titre;
    bool index;
    float prix;
    public:
            Livre(float ,bool ,char *); //constrcteur usuel  
            Livre(const Livre & ); //constructeur du recopie
            void Afficher();    
            char* getTitre();
            ~Livre();
            bool operator==(const Livre &);   // test l'egalite de deux class Livre 
            bool  operator!=(const Livre &);   // !(==)
            Livre & operator=(const Livre &);  // affectation on retourne l'objet Livre (A=B=C Dans ce cas B  prend la valeur du  C et retourne B et A prend la valeur retouner c'est B  dans ce cas) il faux retourner la reference sur l'objet courant 
            //pour eviter l' appele du constructeur de copie (passage par valeur)
};
