/*
Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se
tienen los siguientes datos:
- Número de artículo (1 a 30)
- Día (1 a 31)
- Cantidad de artículos vendidos
- Importe recaudado por las ventas en ese día
Este lote finaliza con un registro con número de artículo igual a cero.
Los registros están agrupados por número de artículo. Se pide determinar e informar:
a) El número del artículo más vendido en total considerando las ventas de la primera
quincena. Se considera primera quincena los días del 1 al 15 inclusive.
b) Para cada uno de los artículos informar la recaudación total considerando todas las
ventas del mes.
c) Informar la semana en la que se vendió mayor cantidad de artículos en total. Se
considera:
Primera Semana: días 1 al 7. Segunda Semana: días 8 al 15.
Tercera Semana: días 16 al 23. Cuarta Semana: días 24 al 31.


*/

#include <iostream>

using namespace std;





int main()
{
    int art,cantArt,dia;
    float imp;
    int anterior;

    // punto A
    int artMasVendido=0;
    int cantArtMasVendido;
    int mayorCant=0;

    //punto B
    float recaudacionTotal;

    // PUNTO C
    int csem1=0;
    int csem2=0;
    int csem3=0;
    int csem4=0;



    cout << "INGRESE EL NUMERO DE ARTICULO: " ;
    cin >> art;


    while (art !=0)
    {
        cantArtMasVendido=0;
        anterior=art;
        recaudacionTotal=0;

        while (anterior==art)
        {


            cout << "INGRESE EL DIA: " ;
            cin >> dia;
            cout << "INGRESE LA CANTIDAD ARTICULOS VENDIDOS: " ;
            cin >> cantArt;
            cout << "INGRESE EL IMPORTE RECAUDADO: " ;
            cin >> imp;

            //PUNTO A
            if (dia<=15)
            {
                cantArtMasVendido+=cantArt;


            }
            if (cantArtMasVendido>mayorCant)
            {
                mayorCant=cantArtMasVendido;
                artMasVendido=art;
            }

            //PUNTO B
            recaudacionTotal+=imp;


            // PUNTO C

            if (dia<=7){
                csem1+=cantArt;

            }
            if (dia>=8 && dia<=15){
                csem2+=cantArt;

            }
            if (dia>=16 && dia<=23){
                csem3+=cantArt;

            }
            if (dia>=24 && dia<=31){
                csem4+=cantArt;

            }




            cout << "INGRESE EL NUMERO DE ARTICULO: " ;
            cin >> art;

        }

        cout << "PUNTO B: "<<endl ;
        cout << "RECAUDACION TOTAL: "<< recaudacionTotal<<endl ;
        cout << " DEL ARTICULO " << anterior<<endl ;



        cout <<endl<<endl<< "*********************************************************" <<endl;
        cout << "*********************NUEVO ARTICULO**********************" ;
        cout <<endl<< "*********************************************************" <<endl<<endl;

    }


    cout << "PUNTO A: "<<endl ;
    cout << "EL ARTICULO MAS VENDIDO DE LA PRIMERA QUINCENA ES EL : "<< artMasVendido<<endl ;
    cout << "CON " <<mayorCant << " UNIDADES VENDIDAS "<<endl ;

    // PUNTO C
    if (csem1>csem2 &&csem1>csem3 && csem1>csem4 ){

        cout << "PUNTO C: "<<endl ;
    cout << "LA SEMANA QUE MAS SE VENDIO ES LA PRIMER SEMANDA"<<endl ;
    cout << "CON " <<csem1 << " UNIDADES VENDIDAS "<<endl ;

    }
   if (csem2>csem1 &&csem2>csem3 && csem2>csem4 ){

        cout << "PUNTO C: "<<endl ;
    cout << "LA SEMANA QUE MAS SE VENDIO ES LA SEGUNDA SEMANDA"<<endl ;
    cout << "CON " <<csem2 << " UNIDADES VENDIDAS "<<endl ;

    }
    if (csem3>csem2 &&csem3>csem1 && csem3>csem4 ){

        cout << "PUNTO C: "<<endl ;
    cout << "LA SEMANA QUE MAS SE VENDIO ES LA TERCER SEMANDA"<<endl ;
    cout << "CON " <<csem3 << " UNIDADES VENDIDAS "<<endl ;

    }
    if (csem4>csem2 &&csem4>csem3 && csem4>csem1 ){

        cout << "PUNTO C: "<<endl ;
    cout << "LA SEMANA QUE MAS SE VENDIO ES LA CUARTA SEMANDA"<<endl ;
    cout << "CON " <<csem4 << " UNIDADES VENDIDAS "<<endl ;

    }

    return 0;
}


