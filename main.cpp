#include <iostream>
using namespace std;

#include <iomanip>

//Funciones
void menu_principal(int&);
void submenu_inventario(char&);
void submenu_pedido(char&);
void funci_submen_invent(char&);
char validar_letra(char&);
char mayus_minus(char&);
void ingr_pieza_inventario();

int main() {

    //Muestra los acentos en español
    setlocale(LC_ALL, "Spanish");

    int opc_menu = ' ';//opcion del menu
    char opc_submenu = ' ';//opcion de los submenu
    //Do/While que valida la salida del programa
    do {

        //Llama la funcion que muestra el menu principal
        menu_principal(opc_menu);
        //Valida la opcion elegida por el usuario
        switch(opc_menu) {
        case 1: //Inventario
            funci_submen_invent(opc_submenu);
            break;
        case 2://Pedido
            submenu_pedido(opc_submenu);
            break;
        case 3://Reporte de inventario
            break;
        case 4://Reporte de pedidos
            break;
        case 6://Salir
            break;
        default:
            cout << "Opción inválida, vuelva a intentarlo" << endl;
            system("PAUSE");//Para programa hasta presionar alguna tecla
            system("CLS");//Limpia pantalla
            break;
        }; //Fin del switch


    } while(opc_menu != 6);//Fin del do/while

    return 0;
}//Fin del método main

//Muestra el menu principal
void menu_principal(int& opc_menu) {

    cout << "Menú principal\n" << endl;

    cout << "1. Inventario" << endl;
    cout << "2. Pedido" << endl;
    cout << "3. Reporte de inventario" << endl;
    cout << "4. Reporte de pedidos" << endl;
    cout << "6. Salir" << endl;

    cout << "\nR/: ";
    cin >> opc_menu;
    cin.ignore();//Ignora campos en blanco
    cin.clear();//limpia el búfer
    system("CLS");//Limpia pantalla


}//Fin menu_principal

//Muestra el sub-menu de inventario
void submenu_inventario(char& opc_submenu) {

    cout << "Sub-menú inventario\n" << endl;

    cout << "a. Ingresar pieza al inventario." << endl;
    cout << "b. Consultar pieza del inventario." << endl;
    cout << "c. Modificar pieza del inventario." << endl;
    cout << "d. Eliminar pieza del inventario." << endl;
    cout << "e. Atrás" << endl;

    cout << "\nR/: ";
    cin >> opc_submenu;
    cin.ignore();//Ignora campos en blanco
    cin.clear();//limpia el búfer
    system("CLS");//Limpia pantalla

}//Fin menu_inventario

//Muestra el sub-menu de pedido
void submenu_pedido(char& opc_submenu) {

    cout << "Sub-menú pedido\n" << endl;

    cout << "a. Ingreso de pedido." << endl;
    cout << "b. Consulta de Pedido." << endl;
    cout << "c. Cancelar Pedido." << endl;
    cout << "d. Registrar entrega de pedido." << endl;
    cout << "e. Atrás" << endl;

    cout << "\nR/: ";
    //Tomamos la opcion tomada por el usuario y validamos que sea letra
    cin >> opc_submenu;
    cin.ignore();//Ignora campos en blanco
    cin.clear();//limpia el búfer
    system("CLS");//Limpia pantalla

}//Fin menu_inventario

//Funcionalidad del submenu inventario
void funci_submen_invent(char& opc_submenu) {
    do {

        //Mostramos el submenu de inventarios
        submenu_inventario(opc_submenu);
        //validamos minuscula y que sea una letra
        opc_submenu = validar_letra(opc_submenu);
        //Valida la opcion elegida por el usuario para hacer lo siguiente
        switch(opc_submenu) {
        case 'a'://Ingresar pieza al inventario.
            ingr_pieza_inventario();
            break;

        case 'b'://Consultar pieza del inventario.
            break;

        case 'c'://Modificar pieza del inventario.
            break;

        case 'd'://Eliminar pieza del inventario.
            break;

        case 'e'://Regresar al menu principal.
            break;

        default:
            cout << "Opción inválida, vuelva a intentarlo" << endl;
            system("PAUSE");//Para programa hasta presionar alguna tecla
            system("CLS");//Limpia pantalla
            break;
        }//Fin del switch
    } while(opc_submenu != 'e');//Repitase mientras opcion submenu sea diferente a 'e'
}//Fin de la funcion funci_submen_invent

//Ingresar pieza al inventario.
void ingr_pieza_inventario(){
    cout << "Ingrese el código de la pieza. (Formato: P + 8 Dígitos)" << endl;




}//Fin de la funcion ingr_pieza_inventario

//Valida que el caracter opcion ingresada por el usuario sea una letra
char validar_letra(char& letra) {
    char letra_char;

    //Si es un digito
    if(isdigit(letra)) {
        //inicialice letra en vacio nuevamente para que vaya al default
        letra_char = ' ';
    } else {
        letra_char = mayus_minus(letra);
    }//Fin del if/else

    //retornamos letra_char
    return letra_char;
}//Fin del metodo validar_letra

//Convierte cualquier caracter en minuscula
char mayus_minus(char& letra) {
    char letra_char;

    //convierte el caracter en minuscula
    letra_char = tolower(letra);

    //retornamos letra_char
    return letra_char;
}//Fin del metodo mayus_minus

bool validar_codigo(string& codigo){

}//Fin de validar_codigo


