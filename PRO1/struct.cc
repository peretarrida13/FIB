struct Estudiant /* nou tipus */ {
    string nom; 
    string cognom1; 
    string cognom2;
    int edat; 
    string NIF; 
    bool dona; 
    double nota; 
    bool repetidor; 

}

int main(){
    Estudiant  e1, e2;

    e1.nom = "ajdal" /* es com crear vriables que han de tenir certs paramatres */

    /* per declarar un vector d'estudiant*/

    vector<Estudiant> v(x); 

    /* per ordenar el vector: 
        1--> ordenar per nota, en cas d'empat (ordenacó per nota decreixant)
        2--> pel cognom1, en cas d'empat (ordenació pel cognom1 creixent)
        3--> pel cognom2, en cos d'empat (ordenació pel cognom2 creixent)
        4--> pel NIF (ordenació creixent)
    */
   bool fcomp(const Estudiant& a, Estudiant& b){
        if(a.nota > b.nota) return true; 
        else if(a.nota < b.nota) return false; 
        else if(a.cognom1 < b.cognom1) return true; 
        else if(a.cognom1 > b.cognom1) return false; 
        else if(a.cognom2 < b.cognom2) return true; 
        else if(a.cognom2 > b.cognom2) return false;
        else if(a.NIF < b.NIF) return true;
        else if(a.NIF > b.NIF) return false; 
    }
}


/*creem un joc de proves en un fitxer a part.
1000000 Maria 10.0 0
2000000 Joan  10.0 0 
4000000 Noa   9.25 1

0 es no es repetidor 1 es repetidor.