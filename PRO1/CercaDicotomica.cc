#include <iostream>
#include <vector>
using namespace std;
/* CERCA DICOTOMICA
Si el vector està ordenat de petit a gran --> mirem que hi ha al mig i depenent del que hi hagi el nostre element està en un lloc o en un altre ja que està ordenat.
Si el nombre que busquem es igual al del element, ja l'hem trobat, sinó em de tornar a cercar entre l'inici i la posició del mig de la meitat del vector on ens indiqui
l'anterior (recursivament).
si l'element hi és, l'acabarem trobant, sino arribarà un moment on no tindrem espai on buscar. si el un limit és mes petit que l'altre, no està. 
*/
int posicio(double x, const vector<double>& v, int esq, int dre){
    if(dre < esq) return -1; //si l'element no hi és els indexos s'acaben creuant
    //altrament si tenim espai on buscar fem la cerca...
    int mig = (esq + dre) / 2; 
    if(x < v[mig]) return posicio(x,v,esq, mig-1); 
    else if( x > v[mig]) return posicio(x, v, mig+1, dre);
    else return mig; 

}

