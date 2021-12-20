#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "time.h"
//#include "windows.h"
using namespace std;

int main(){
    INICIO:
    string palabra = " ";
    string palabraMostrada = " ";
    int vidas = 0;
    int nivel = 0;
    int intentos = 0;
    string letra = " ";
    bool fin = false;
    bool v = false;

    cout<<endl;
    cout<<"         Bienvenidos al Ahorcado"<<endl;
    cout<<endl;
    cout<<"   Este juego consiste en poder adivinar"<<endl;
    cout<<"   toda la palabra, letra por letra."<<endl;
    cout<<endl;
    NIVEL:
    cout<<endl;
    cout<<"   selecciona el nivel de juego"<<endl;
    cout<<endl;
    cout<<"   Nivel             Vidas           Escribe"<<endl;
    cout<<endl;
    cout<<"   Facil             8               1"<<endl;
    cout<<"   Medio             4               2"<<endl;
    cout<<"   Muy Dificil       1               3"<<endl;
    cout<<endl;
    cout<<"   Ingresa el tu Nivel: ";cin>>nivel;cout<<endl;

    switch (nivel) {
        case 1:
            palabra = "el ahorcado";
            palabraMostrada = "__ ________";
            vidas = 8;
            fin = false;
            intentos=0;
            //system("cls");
            break;
        case 2:
            palabra = "un juego";
            palabraMostrada = "__ _____";
            vidas = 4;
            fin = false;
            intentos=0;
            ////system("cls");
            break;
        case 3:
            palabra = "hecho";
            palabraMostrada = "_____";
            vidas = 1;
            fin = false;
            intentos=0;
            ////system("cls");
            break;
        default:
            ////system("cls");
            cout<<"   escribe un nivel valido entre 1 y 3"<<endl;
            goto NIVEL;
            break;
    }

    cout<<"                 El Ahorcado"<<endl;
    cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
    cout<<endl;
    cout<<"palabra: "<<palabraMostrada<<endl;
    cout<<endl;
    ///* logica del juego *///
    while (fin == false) {
        LETRA:
        cout<<"ingresa una letra: ";cin>>letra;cout<<endl;
        cout<<endl;
        if (letra.size() == 0) {
            cout<<"ingresa una letra"<<endl;
            goto LETRA;
        } else
        if (letra.size() == 1) {
            for (int i = 0; i < palabra.size(); i++){
                if (letra[0] == palabra[i]) {
                    palabraMostrada[i] = palabra[i];
                    v = true;
                }
            }
            if (v == false){vidas--;}
            intentos++;
            v = false;
        } else {
            cout<<"ingresa solo una letra"<<endl;
            goto LETRA;
        }
        if (palabraMostrada == palabra){
            ////system("cls");
            cout<<"                 El Ahorcado"<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
            cout<<"         Palabra: "<<palabra<<endl;
            cout<<endl;
            cout<<"                     HAS GANADO"<<endl;
            cout<<"                     Winner!!!"<<endl;
            cout<<endl;
            //Sleep(3000);
            //system("cls");
            cout<<endl;
            cout<<"                 Intentalo nuevamente"<<endl;
            //Sleep(1000);
            //system("cls");
            goto INICIO;
        }
        if (vidas == 0){fin = true;}
        letra = " ";
        //system("cls");
        cout<<"                 El Ahorcado"<<endl;
        cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
        cout<<endl;
        cout<<"palabra: "<<palabraMostrada<<endl;
        cout<<endl;

        if (fin == true) {
            //system("cls");
            cout<<"                 El Ahorcado"<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
            cout<<endl;
            cout<<"                     GAME OVER"<<endl;
            cout<<"                     Has perdido"<<endl;
            cout<<endl;
            //Sleep(2000);
            //system("cls");
            cout<<"Intentalo nuevamente"<<endl;
            //Sleep(1000);
            //system("cls");
            goto INICIO;
        }
    }

    return 0;
}
