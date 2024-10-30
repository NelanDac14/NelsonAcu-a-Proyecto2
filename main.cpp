#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

//Funciones
void menu_principal(int&);
void submenu_inventario(char&);
void submenu_pedido(char&);

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
            submenu_inventario(opc_submenu);
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
    cin >> opc_submenu;
    cin.ignore();//Ignora campos en blanco
    cin.clear();//limpia el búfer
    system("CLS");//Limpia pantalla

}//Fin menu_inventario
