// Librerías necesarias
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

// Prototipos de funciones
void usuario_login(char usuario_login[25], char contrasenia_login[12], char usuario_registrado[25], char contrasenia_registrado[12], char usuario_admin[25], char contrasenia_admin[12]);
void mostrar_productos_usuario_anonimo();
void modificar_datos_personales();
void valorar_un_producto_funcion_registrado();
void funcion_recomendar_vendedor();
void mostrar_mis_vendedores_recomendados();
void mostrar_productos_mis_vendedores_recomendados();
//Funciones de administrador
void dar_de_alta_nuevo_usuario();
void modificar_datos_personales_cualquier_usuario();
void mostrar_informacion_todos_vendedores();
void mostrar_cada_vendedor_recomendado_2();
void mostrar_todos_los_nombres_a_la_venta();
void desconectarse_del_sistema();
// Función principal
int main(){
	//opciones en main
	int opcion_opciones_publicar_producto_registrado;
    int opcion;
    int opcion_elija_opcion_menu_registrado_usuario;
    int opcion_ver_mis_productos_registrado;
    //
	char nombre_usuario[25],  contrasenia_usuario[12], apellido_usuario[20];
    
    
    // Datos del usuario administrador
    char usuario_admin[25] = "Mauricio";
    char contrasenia_admin[12] = "12345";
    char apellido_admin[20] = "Ramos";
    // Datos del usuario registrado
    char usuario_registrado[25] = "Ramos";
    char contrasenia_registrado[12] = "1234";
    char apellido_usuario_registrado[20] = "Martinez";
    //publicar producto
    char  opcion_ingrese_nombre_producto[20];
    char descripcion_producto_publicado[40];
    int producto_publicado_precio;
    
    
    cout << "****************************" << endl;
    cout << "*    BIENVENIDO A I-BUY    *" << endl;
    cout << "****************************" << endl;
    cout << "1. Iniciar sesion" << endl;
    cout << "2. Ver productos" << endl;
    cout << "3. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    
    system("cls");

    // Condicionales
    if(opcion == 2){
    	mostrar_productos_usuario_anonimo();
    }
    
    
    if (opcion == 1) {
        usuario_login(nombre_usuario, contrasenia_usuario, usuario_registrado, contrasenia_registrado, usuario_admin, contrasenia_admin);
        
        // Si el usuario ingresado no coincide, no mostrar el menú
        if (strcmp(nombre_usuario, usuario_registrado) != 0 && strcmp(nombre_usuario, usuario_admin) != 0) {
            cout << "\nError: Nombre de usuario o contrasenia incorrectos\n" << endl;
            system("pause");
            return 0; // Termina el programa si el login falla
        }

        system("cls");
        if (strcmp(nombre_usuario, usuario_admin) == 0) {
    // Menú de administrador
    int opcion_admin_menu;
    cout << "--- MENU DE ADMINISTRADOR ---" << endl;
    cout << "1. Dar de alta un nuevo usuario" << endl;
    cout << "2. Modificar los datos personales de cualquier usuario" << endl;
    cout << "3. Mostrar la informacion de todos los vendedores" << endl;
    cout << "4. Mostrar todos los vendedores recomendados" << endl;
    cout << "5. Mostrar todos los productos a la venta" << endl;
    cout << "6. Desconectarse del sistema" << endl;
    cout << "7. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion_admin_menu;
          if(opcion_admin_menu==1){
          	dar_de_alta_nuevo_usuario();
          }
if(opcion_admin_menu==2){
	modificar_datos_personales_cualquier_usuario();
}
if(opcion_admin_menu==3){
	mostrar_informacion_todos_vendedores();
}
if(opcion_admin_menu==4){
	mostrar_cada_vendedor_recomendado_2();
}
if(opcion_admin_menu==5){
	mostrar_todos_los_nombres_a_la_venta();
}
if(opcion_admin_menu==6){
	desconectarse_del_sistema();
}


}     else {
    // Menú de usuario registrado
    cout << "--- MENU DE USUARIO REGISTRADO ---" << endl;
    cout << "1. Poner a la venta un producto" << endl;
      cout << "--" << endl;
    cout << "2. Modificar mis datos personales" << endl;
      cout << "--" << endl;
    cout << "3. Recomendar un vendedor" << endl;
      cout << "--" << endl;
    cout << "4. Ver los productos de mis vendedores recomendados" << endl;
      cout << "--" << endl;
    cout << "5. Ver todos los productos a la venta y poder valorarlos" << endl;
      cout << "--" << endl;
    cout << "6. Ver mis vendedores recomendados" << endl;
      cout << "--" << endl;
    cout << "7. Salir" << endl;
    
    cout << "Elija una opcion: ";
    cin >> opcion_elija_opcion_menu_registrado_usuario;
    cin.ignore();
     system("cls");
    if(opcion_elija_opcion_menu_registrado_usuario==1){
    	cout << "-- PUBLICAR PRODUCTO --" << endl;
    	
    cout << "Ingrese nombre del producto: ";
    cin.getline(opcion_ingrese_nombre_producto,20,'\n');
    
    cout << "Ingrese la descripcion del producto: ";
    cin.getline(descripcion_producto_publicado,40,'\n');
    
    cout << "Ingrese el precio: ";
    cin >> producto_publicado_precio;
    
    cout << "+ OPCIONES +" << endl;
    cout << "1. Ver mis productos" << endl;
    cout << "2. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion_ver_mis_productos_registrado;
    system("cls");
     if(opcion_ver_mis_productos_registrado==1){
    	cout << "-- MIS PRODUCTOS --" << endl;
    	
    	cout << "* PRODUCTO 1 *" << endl;
    	cout << "Nombre: " << opcion_ingrese_nombre_producto << endl;
    	cout << "Descripcion: " << descripcion_producto_publicado << endl;
    	cout << "Precio: " << producto_publicado_precio;
    }
	}
	
	
	if(opcion_elija_opcion_menu_registrado_usuario==2){
		modificar_datos_personales();
	}
	if(opcion_elija_opcion_menu_registrado_usuario==3){
		funcion_recomendar_vendedor();

   }  
	if(opcion_elija_opcion_menu_registrado_usuario==4){
		mostrar_productos_mis_vendedores_recomendados();
	}
	
	
	if(opcion_elija_opcion_menu_registrado_usuario==5)
	 valorar_un_producto_funcion_registrado();
 }
    if(opcion_elija_opcion_menu_registrado_usuario==6){
     mostrar_mis_vendedores_recomendados();
 }
 
} 

 } 	






// Función login con validación de usuario y contraseña
void usuario_login(char usuario_login[25], char contrasenia_login[12], char usuario_registrado[25], char contrasenia_registrado[12], char usuario_admin[25], char contrasenia_admin[12]){
    char nombre_ingresado[25], contrasenia_ingresada[12];
    cin.ignore();
    
    cout << "*        INICIO DE SESION      *" << endl;
    cout << "Ingrese su nombre: ";
    cin.getline(nombre_ingresado, 25, '\n');
    cout << "Ingrese su contrasenia: ";
    cin.getline(contrasenia_ingresada, 12, '\n');
    
    // Verificar credenciales y actualizar valores si son correctos
    if (strcmp(nombre_ingresado, usuario_registrado) == 0 && strcmp(contrasenia_ingresada, contrasenia_registrado) == 0) {
        cout << "\nInicio de sesion exitoso como usuario registrado\n" << endl;
        strcpy(usuario_login, nombre_ingresado);
        strcpy(contrasenia_login, contrasenia_ingresada);
    } 
    else if (strcmp(nombre_ingresado, usuario_admin) == 0 && strcmp(contrasenia_ingresada, contrasenia_admin) == 0) {
        cout << "\nInicio de sesion exitoso como administrador\n" << endl;
        strcpy(usuario_login, nombre_ingresado);
        strcpy(contrasenia_login, contrasenia_ingresada);
    } 
}

// Función para mostrar productos a usuarios anónimos
void mostrar_productos_usuario_anonimo(){
    cout << "-     LISTA DE PRODUCTOS     -" << endl;
    cout << "* 1. Celular de segunda mano!" << endl;
      cout << "--" << endl;
    cout << "* 2. Televisor usado LG" << endl;
      cout << "--" << endl;
    cout << "* 3. Monitor SAMSUNG 140hz" << endl;
      cout << "--" << endl;
    cout << "* 4. Auriculares RedDragon usados" << endl;
      cout << "--" << endl;
    cout << "* 5. Celular Xiaomi barato!" << endl;
      cout << "--" << endl;
    cout << "* 6. Ventilador usado barato" << endl;
      cout << "--" << endl;
    cout << "* 7. Rtx 4060 Nvidia" << endl;
      cout << "--" << endl;
    cout << "* 8. Rtx 5090 Nvidia" << endl;
      cout << "--" << endl;
    cout << "* 9. Teclado RedDragon" << endl;
      cout << "--" << endl;
    cout << "* 10. Mouse RedDragon" << endl;
      cout << "--" << endl;
    cout << "* 11. Tarjeta de video grafica 1050 TI CASI NUEVA!!" << endl;
      cout << "--" << endl;
    cout << "* 12. Playstation 5 " << endl;
      cout << "--" << endl;
    cout << "* 13. Playstation 4 REBAJADA DE PRECIO!!!" << endl;
      cout << "--" << endl;
    cout << "* 14. Mouse Ryzen" << endl;
      cout << "--" << endl;
	cout << "* 15. HyperX Alloy Origins Core!!" << endl;
	  cout << "--" << endl;
	cout << "* 16. Auriculares HyperX Cloud II Rebaja 25%!!" << endl;
	  cout << "--" << endl;
	cout << "* 17. Teclado Logitech G213 Prodigy" << endl;
	  cout << "--" << endl;
	cout << "* 18. Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO)" << endl;
	  cout << "--" << endl;
	cout << "* 19. Asus TFU Gaming F15 (i5-11400h, Rtx 3050 Ti)" << endl;
	  cout << "--" << endl;
	cout << "* 20. MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!!";
	
	
}
//Función modificar datos personales
void modificar_datos_personales(){
	int opcion_modificar_datos_personales;
	int opcion_modificar_datos_personales_modificacion;

	string nueva_contrasenia_modificada;
	char modificacion_nombre[25];
	char modificacion_apellido[20];
	
	cout << "* MIS DATOS PERSONALES *" << endl;
	cout << "- Nombre : Ramos" << endl;
	cout << "Apellido : Martinez" << endl;
	cout << "- Contrasenia : *****" << endl;
	cout << "--------------------------" << endl;
	cout << "Opciones:" << endl;
    cout << "1. Cambiar mis datos personales" << endl;
	cout << "2. Salir" << endl;
	cout << "Introduzca la opcion deseada: ";
	cin >> opcion_modificar_datos_personales;
	system("cls");
	if(opcion_modificar_datos_personales==1){
	 cout << "1. Nombre: Ramos" << endl;
	 cout << "2. Contrasenia: *****" << endl;
	 cout << "3. Apellido: Martinez" << endl;
	 cout << "Introduzca la opcion deseada a cambiar: ";
	 cin >> opcion_modificar_datos_personales_modificacion;
	 system("cls");
	 if(opcion_modificar_datos_personales_modificacion==1){
	  cout << "* Modificacion de nombre de usuario *" << endl;
	  cout << "Introduzca el nuevo nombre: ";
	  cin >> modificacion_nombre;
	  cout << "Su nuevo nombre de usuario es: " << modificacion_nombre;
  	  }
  	  if(opcion_modificar_datos_personales_modificacion==2){
  	  	cout << "* Modificacion de la contrasenia *" << endl;
  	  	cout << "Introduzca su nueva contrasenia: ";
  	  	cin >> nueva_contrasenia_modificada;
  	  	cout << "Su nueva contrasenia es: " << nueva_contrasenia_modificada;
  	}
  	  	if(opcion_modificar_datos_personales_modificacion==3){
  	  		cout << "* Modificacion del apellido *" << endl;
  	  		cout << "Introduzca su nuevo apellido: ";
  	  		cin >> modificacion_apellido;
  	  		if(strlen(modificacion_apellido) == 0){
  	  			cout << "error al ingresar nuevo apellido";
  	  		}
  	  		else{
  	  			cout << "Su nuevo apellido es: " << modificacion_apellido;	
  	  		}
  	  	}
  	  	
	    }
	    
	      }	
	      void valorar_un_producto_funcion_registrado(){
	      	int opcion_valorar_producto;
	      	int opcion_calificar_producto;
	      	  cout << "-     LISTA DE PRODUCTOS     -" << endl;
    cout << "* 1. Celular de segunda mano!" << endl;
      cout << "--" << endl;
    cout << "* 2. Televisor usado LG" << endl;
      cout << "--" << endl;
    cout << "* 3. Monitor SAMSUNG 140hz" << endl;
      cout << "--" << endl;
    cout << "* 4. Auriculares RedDragon usados" << endl;
      cout << "--" << endl;
    cout << "* 5. Celular Xiaomi barato!" << endl;
      cout << "--" << endl;
    cout << "* 6. Ventilador usado barato" << endl;
      cout << "--" << endl;
    cout << "* 7. Rtx 4060 Nvidia" << endl;
      cout << "--" << endl;
    cout << "* 8. Rtx 5090 Nvidia" << endl;
      cout << "--" << endl;
    cout << "* 9. Teclado RedDragon" << endl;
      cout << "--" << endl;
    cout << "* 10. Mouse RedDragon" << endl;
      cout << "--" << endl;
    cout << "* 11. Tarjeta de video grafica 1050 TI CASI NUEVA!!" << endl;
      cout << "--" << endl;
    cout << "* 12. Playstation 5 " << endl;
      cout << "--" << endl;
    cout << "* 13. Playstation 4 REBAJADA DE PRECIO!!!" << endl;
      cout << "--" << endl;
    cout << "* 14. Mouse Ryzen" << endl;
      cout << "--" << endl;
	cout << "* 15. HyperX Alloy Origins Core!!" << endl;
	  cout << "--" << endl;
	cout << "* 16. Auriculares HyperX Cloud II Rebaja 25%!!" << endl;
	  cout << "--" << endl;
	cout << "* 17. Teclado Logitech G213 Prodigy" << endl;
	  cout << "--" << endl;
	cout << "* 18. Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO)" << endl;
	  cout << "--" << endl;
	cout << "* 19. Asus TFU Gaming F15 (i5-11400h, Rtx 3050 Ti)" << endl;
	  cout << "--" << endl;
	cout << "* 20. MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!!" << endl;
	cout << "Ingrese el numero del producto que desea valorar: " << endl;
	cin >> opcion_valorar_producto;
	
	system("cls");
	if(opcion_valorar_producto==1){
		cout << "* Celular de segunda mano! *" << endl;
		cout << "Vendedor: Julio hernandez" << endl;
		cout << "Descripcion: Celular de segunda mano barato, usado por 9 meses" << endl;
		cout << "Precio: 120 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 4 Bueno" << endl;
		cout << " 1 Excelente" << endl;
		cout << " 5 Pesimo" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		system("cls");
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
			
	}
	if(opcion_valorar_producto==2){
			cout << "* Televisor usado LG *" << endl;
		cout << "Vendedor: Martin Juarez" << endl;
		cout << "Descripcion: Televisor usado por 3 meses" << endl;
		cout << "Precio: 250 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 Bueno" << endl;
		cout << " 3 Excelente" << endl;
		cout << " 1 Pesimo" << endl;
		cout << " 2 intermedio" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
	
	}
	
	
	if(opcion_valorar_producto==3){
			cout << "*  Monitor SAMSUNG 140hz *" << endl;
		cout << "Vendedor: Juan suarez" << endl;
		cout << "Descripcion: Monitor usado por 11 meses" << endl;
		cout << "Precio: 280 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 1 pesimo" << endl;
		cout << " 1 intermedio" << endl;
		cout << " 2 Buen producto" << endl;
		cout << " 2 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
	     if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
		
		
	}
	      
	if(opcion_valorar_producto==4){
			cout << "*  Auriculares RedDragon *" << endl;
		cout << "Vendedor: Empresa GamingEX" << endl;
		cout << "Descripcion: Auriculares usado por 3 meses" << endl;
		cout << "Precio: 400 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 4 pesimo" << endl;
		cout << " 2 intermedio" << endl;
		cout << " 3 Buen producto" << endl;
		cout << " 5 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
	     if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
	
	
		
	      }
	      if(opcion_valorar_producto==5){
	     	cout << "* Celular Xiaomi barato! *" << endl;
		cout << "Vendedor: Empresa Ramon guitierrez" << endl;
		cout << "Descripcion: Xiomi usado por 7 meses" << endl;
		cout << "Precio: 200 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 7 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 2 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
		
	      }
	       if(opcion_valorar_producto==6){
	     	cout << "* Ventilador usado barato *" << endl;
		cout << "Vendedor: Julian maggi" << endl;
		cout << "Descripcion: Ventilador usado por 2 meses" << endl;
		cout << "Precio: 50 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
}
             if(opcion_valorar_producto==7){
	     	cout << "* RTX 4060 nvidia *" << endl;
		cout << "Vendedor: GamerFex" << endl;
		cout << "Descripcion: Nvidia rtx 4060 usado por 5 meses" << endl;
		cout << "Precio: 200 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
  if(opcion_valorar_producto==8){
	     	cout << "* RTX 5090 nvidia *" << endl;
		cout << "Vendedor: GamerFex" << endl;
		cout << "Descripcion: Nvidia rtx 5090 usado por 5 meses" << endl;
		cout << "Precio: 800 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
  if(opcion_valorar_producto==9){
	     	cout << "* Teclado RedDragon*" << endl;
		cout << "Vendedor: GamerFex" << endl;
		cout << "Descripcion:  usado por 7 meses" << endl;
		cout << "Precio: 200 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
        if(opcion_valorar_producto==10){
	     	cout << "* Mouse RedDragon *" << endl;
		cout << "Vendedor: PerifericosARG" << endl;
		cout << "Descripcion: MouseRedDragon usado por 2 meses" << endl;
		cout << "Precio: 100 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
        
} 
  if(opcion_valorar_producto==11){
	     	cout << "* Tarjeta de video grafica 1050 TI CASI NUEVA!! *" << endl;
		cout << "Vendedor:  Jose Luis" << endl;
		cout << "Descripcion: 1050 TI nvidia usada por 5 meses" << endl;
		cout << "Precio: 200 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
if(opcion_valorar_producto==12){
	     	cout << "* Playstation 5 *" << endl;
		cout << "Vendedor:  Jose Luis" << endl;
		cout << "Descripcion: Playstation usada por 1 mes" << endl;
		cout << "Precio: 500 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
if(opcion_valorar_producto==13){
	     	cout << "* Playstation 4 REBAJADA de precio! *" << endl;
		cout << "Vendedor:  Gerardo Emanuel" << endl;
		cout << "Descripcion:  Playstation usada por 8 meses" << endl;
		cout << "Precio: 250 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
if(opcion_valorar_producto==14){
	     	cout << "* Mouse Ryzen *" << endl;
		cout << "Vendedor:  Martin Martinez " << endl;
		cout << "Descripcion: Mouse Ryzen usado por 2 meses" << endl;
		cout << "Precio: 100 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
if(opcion_valorar_producto==15){
	     	cout << "*HyperX Alloy Origins Core!! *" << endl;
		cout << "Vendedor: PepeTechnologies" << endl;
		cout << "Descripcion: Nuevo HyperX Alloy Origins Core" << endl;
		cout << "Precio: 300 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
} 
if(opcion_valorar_producto==16){
	     	cout << "* Auriculares HyperX Cloud II Rebaja 25%!! *" << endl;
		cout << "Vendedor: PepeTechnologies" << endl;
		cout << "Descripcion: Auriculares HyperX Cloud II Rebaja 25%!!" << endl;
		cout << "Precio: 250 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
}
   if(opcion_valorar_producto==17){
   	cout << "Producto no disponible" << endl;
   	cout << "Aprete cualquier boton para salir";
   }
   
 if(opcion_valorar_producto==18){
	     	cout << "*Teclado Logitech G213 Prodigy *" << endl;
		cout << "Vendedor: PepeTechnologies" << endl;
		cout << "Descripcion: Teclado Logitech G213 Prodigy, nuevos" << endl;
		cout << "Precio: 300 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
}
if(opcion_valorar_producto==19){
	     	cout << "* Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO) *" << endl;
		cout << "Vendedor: EnergyGaming" << endl;
		cout << "Descripcion: Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO)" << endl;
		cout << "Precio: 450 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
}
if(opcion_valorar_producto==20){
	     	cout << "*  MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!! *" << endl;
		cout << "Vendedor: EnergyGaming" << endl;
		cout << "Descripcion:  MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!!" << endl;
		cout << "Precio: 450 dolares" << endl;
		cout << "---------------------" << endl;
		cout << "* Calificaciones *: " << endl;
		cout << " 2 pesimo" << endl;
		cout << " 4 intermedio" << endl;
		cout << " 1 Buen producto" << endl;
		cout << " 3 Excelente" << endl;
		cout << "Para calificar este producto, se debe tener en cuenta:" << endl;
		cout << "1. Malo/Pesimo" << endl;
		cout << "2. Intermedio" << endl;
		cout << "3. Bueno" << endl;
		cout << "4. Excelente" << endl;
		cout << "Ingrese la calificacion que le pondra al producto: ";
		cin >> opcion_calificar_producto;
		if(opcion_calificar_producto==1){
			cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de pesimo producto";
}
        if(opcion_calificar_producto==2){
	      cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de intermedio";
}
        if(opcion_calificar_producto==3){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de buen producto";
        }
        if(opcion_calificar_producto==4){
        	 cout << "Gracias por calificar este producto, ahora el producto tendra una calificacion de excelente";
        }
}
}
         void funcion_recomendar_vendedor(){
         	int opcion_recomendar_vendedor;
	      cout << "*  RECOMENDAR UN VENDEDOR *" << endl;
	      cout << "* Vendedores para recomendar:" << endl;
	      cout << "1. Julio Hernandez" << endl;
	      cout << "2. PepeTechnologies" << endl;
	      cout << "3. Martin Martinez" << endl;
	      cout << "4. PerifericosARG" << endl;
	      cout << "5. Gerardo Martinez" << endl;
	      cout << "6. GamingEX" << endl;
	       cin >> opcion_recomendar_vendedor;
	       system("cls");
	      if(opcion_recomendar_vendedor==1){
	      	cout << "Se agrego a su lista de vendedores favoritos:" << endl;
	      		cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "Julio Hernandez";
	      }
	      if(opcion_recomendar_vendedor==2){
	      		cout << "Se agrego a su lista de vendedores favoritos:" << endl;
	      			cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "PepeTechnologies";
	      }
	      	if(opcion_recomendar_vendedor==3){
	      				cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "Martin Martinez";
	      	}
	      	if(opcion_recomendar_vendedor==4){
	      				cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "PerifericosARG" << endl;
	      	}
	      	if(opcion_recomendar_vendedor==5){
	      		cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "Gerardo Martinez";
	      	}
	      	if(opcion_recomendar_vendedor==6){
	      	cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "GamingEX";
	      	}
}
        void mostrar_mis_vendedores_recomendados(){
        	int opcion_salir_ver_mis_vendedores;
        	cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "Aprete cualquier boton para salir: ";
        	cin >> opcion_salir_ver_mis_vendedores;
        }
        void mostrar_productos_mis_vendedores_recomendados(){
        	int opcion_ver_productos_vendedores_recomendados;
        		cout << "* VER LOS PRODUCTOS DE MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "1. Juan Hernandez" << endl;
        	cout << "2. Martin herrera" << endl;
        	cout << "3. Jose Luis" << endl;
        	cout << "4. EnergyGaming" << endl;
        	cout << "5. Salir" << endl;
        	cout << "Ingrese la opcion de los productos que quiere ver de su vendedor favorito: ";
        	cin >> opcion_ver_productos_vendedores_recomendados;
        	if(opcion_ver_productos_vendedores_recomendados==1){
        		cout << "* Juan Hernandez *" << endl;
        		cout << " PRODUCTO 1 *" << endl;
        		cout << " PC gamer completa!" << endl;
        		cout << "Descripcion: Pc gamer completa(rtx 4060, intel i5 core 4330, 12 ram)" << endl;
        		cout << "Precio: 120 dolares";
        	}
        if(opcion_ver_productos_vendedores_recomendados==2){
        	cout << "* Martin Herrera *" << endl;
        	cout << "Productos:" << endl;
        	cout << " Celular Samsung segunda mano usado" << endl;
        	cout << "Descripcion: Samsung de segunda mano usado por 2 meses" << endl;
        	cout << "Precio: 120 dolares";
        }	
        if(opcion_ver_productos_vendedores_recomendados==3){
        	cout << "* Jose Luis *" << endl;
        	cout << "Productos: " << endl;
        	cout << " Playstation 5" << endl;
        	cout << "Descripcion: Playstation usada por 1 meses" << endl;
        	cout << "Precio: 500 dolares" << endl;
        	cout << "----------------------------" << endl;
        	cout << "Producto 2 " << endl;
        	cout << "* Tarjeta de video grafica 1050 TI CASI NUEVA!! *" << endl;
        		cout << "Descripcion: 1050 TI nvidia usada por 5 meses" << endl;
		cout << "Precio: 200 dolares" << endl;
        }
        if(opcion_ver_productos_vendedores_recomendados==4){
        	cout << "* EnergyGaming *" << endl;
        	cout << "Productos: " << endl;
        	cout << "*  MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!! *" << endl;
        		cout << "Descripcion:  MSI GF63 Thin (i7-11800H, GTX 1650) Descuento 30%!!" << endl;
		cout << "Precio: 450 dolares" << endl;
        	
        	
        	cout << "----------------------------" << endl;
        	cout << "Producto 2 " << endl;
        	cout << "* Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO)  *" << endl;
        	cout << "Descripcion: Monitor Samsung Odyssey G5 (27, 144 HZ, CURVO)" << endl;
		cout << "Precio: 450 dolares" << endl;
        }
        }
        void dar_de_alta_nuevo_usuario(){
        	  char usuario_admin[25] = "Mauricio";
    char contrasenia_admin[12] = "12345";
    char apellido_admin[20] = "Ramos";
    // Datos del usuario registrado
    char usuario_registrado[25] = "Ramos";
    char contrasenia_registrado[12] = "1234";
    char apellido_usuario_registrado[20] = "Martinez";
    
    
        	char dar_de_alta_nuevo_usuario_nombre[25];
        	char dar_de_alta_nuevo_usuario_apellido[20];
        	string dar_de_alta_nuevo_usuario_contrasenia;
        	
        	cout << "* DAR DE ALTA UN NUEVO USUARIO *" << endl;
        	cout << " Nombre: ";
        	cin >> dar_de_alta_nuevo_usuario_nombre;
        	cout << "Apellido: ";
        	cin >>dar_de_alta_nuevo_usuario_apellido;
        	cout << "Contrasenia: ";
        	cin >> dar_de_alta_nuevo_usuario_contrasenia;
        	//if( strcmp(dar_de_alta_nuevo_usuario_nombre, usuario_registrado) == 0){
        		//cout << "error en el inicio de sesion";
        		
        	//}
			 if(dar_de_alta_nuevo_usuario_nombre==usuario_admin || dar_de_alta_nuevo_usuario_nombre==usuario_registrado){
			 	cout << "no se pudo";
			 }
			 
        }
        void modificar_datos_personales_cualquier_usuario(){
    // Datos del usuario registrado
    char usuario_registrado[25] = "Ramos";
    char contrasenia_registrado[12] = "1234";
    char apellido_usuario_registrado[20] = "Martinez";
    
        	int opcion_modificar_datos_usuario;
        	char nombre_usuario_modificacion[25];
        	char contrasenia_usuario_modificacion[12];
        	char apellido_usuario_modificacion[20];
        	
        	cout << "* MODIFICAR DATOS DE CUALQUIER USUARIO REGISTRADO *" << endl;
        	cout << "Si desea modificar los datos de un usuario registrado aprete 1, si desea salir de la aplicacion aprete 2: ";
        	cin >> opcion_modificar_datos_usuario;
        	system("cls");
        	if(opcion_modificar_datos_usuario==1){
        		cout << "* LOGIN PARA LA MODIFICACION *" << endl;
        		cout << "para cambiar los datos del usuario registrado, debera hacer login en su cuenta del usuario deseado" << endl;
        
        	cout << "Nombre: ";
        	cin >> nombre_usuario_modificacion;
        	cout << "Contrasenia: ";
        	cin >> contrasenia_usuario_modificacion;
        	if (strcmp(nombre_usuario_modificacion, usuario_registrado) == 0 && strcmp(contrasenia_usuario_modificacion, contrasenia_registrado) == 0){
        		cout << "MODIFICACION DE DATOS" << endl;
        		 modificar_datos_personales();
        	}
        	 
        	}
        	
        }
        void mostrar_informacion_todos_vendedores(){
        	int opcion_info_todos_vendedores;
        	cout << "Para ver todos los productos de los vendedores, primero debe hacer login en sus cuentas" << endl;
        	
        	
        	cout << "* VENDEDORES Y SUS PRODUCTOS *" << endl;
        	cout << "1. Gaming Fex" << endl;
        	cout << "2. PepeTechnologies" << endl;
        	cout << "3. Gerardo emanuel" << endl;
        	cout << "4. EnergyGaming" << endl;
        	cout << "5. PerifericosARG" << endl;
        	cout << "6. Jose Luis" << endl;
        	cout << "7. Juan Hernandez" << endl;
        	cout << "8. Julio hernandez" << endl;
        	cout << "9. Martin Martinez" << endl;
        	cout << "10. GamerFex" << endl;
        	cout << "11. Juan suarez" << endl;
        	cout << "12. Empresa Ramon Gutierrez" << endl;
        	cout << "13. Julian Maggi" << endl;
        	cout << "14. Empresa GamingEx" << endl;
        	cout << "15. Martin Juarez" << endl;
        	cout << "Ingrese la opcion del vendedor que desea ver su informacion: ";
        	cin >> opcion_info_todos_vendedores;
        	system("cls");
        	if(opcion_info_todos_vendedores==1){
        	cout << "* GAMING FEX *" << endl;
        	cout << " Nombre: Lopez ( *encargado de la cuenta certificado* )" << endl;
        	cout << "Apellido: Armandillo" << endl;
        	cout << "Contrasenia: 1945" << endl;
        	cout << "Vendedores favoritos: Martin Martinez";
		
        	}
        	if(opcion_info_todos_vendedores==2){
        	cout << "* PepeTechnologies *" << endl;
        	cout << "Nombre: Pepe" << endl;
        	cout << "Apellido: Juarez" << endl;
        	cout << "Contrasenia: 12430" << endl;
        	cout << "Vendedores favoritos: Julian Maggi";
        	}
        	if(opcion_info_todos_vendedores==3){
        	cout << "* Gerardo emanuel *" << endl;
        	cout << "Nombre: Gerardo" << endl;
        	cout << "Apellido: Emanuel" << endl;
        	cout << "Contrasenia: 124351" << endl;
        	cout << "Vendedores favoritos: PerifericosARG";
        	}
        	if(opcion_info_todos_vendedores==4){
        	cout << "* EnergyGaming *" << endl;
        	cout << "Nombre: Alfonso" << endl;
        	cout << "Apellido: Rodriguez" << endl;
        	cout << "Contrasenia: 1326" << endl;
        	cout << "Vendedores favoritos: PerifericosARG";
        	}
        	if(opcion_info_todos_vendedores==5){
        	cout << "* PerifericosARG *" << endl;
        	cout << "Nombre: Ruperto" << endl;
        	cout << "Apellido: Magno" << endl;
        	cout << "Contrasenia: 144251" << endl;
        	cout << "Vendedores favoritos: GamerFex";
        	}
        	 if(opcion_info_todos_vendedores==6){
        	cout << "* PerifericosARG *" << endl;
        	cout << "Nombre: Ruperto" << endl;
        	cout << "Apellido: Magno" << endl;
        	cout << "Contrasenia: 144251" << endl;
        	cout << "Vendedores favoritos: GamerFex";
        	}
        	if(opcion_info_todos_vendedores==7){
        	cout << "* Juan hernandez *" << endl;
        	cout << "Nombre: Juan" << endl;
        	cout << "Apellido: Hernandez" << endl;
        	cout << "Contrasenia: 153241" << endl;
        	cout << "Vendedores favoritos: Martin Juarez";
        	}
        	if(opcion_info_todos_vendedores==8){
        	cout << "* Julio Hernandez *" << endl;
        	cout << "Nombre: Julio " << endl;
        	cout << "Apellido: Hernandez" << endl;
        	cout << "Contrasenia: 154612" << endl;
        	cout << "Vendedores favoritos: PepeTechnologies";
        	}
        	if(opcion_info_todos_vendedores==9){
        	cout << "* Martin Martinez *" << endl;
        	cout << "Nombre: Martin " << endl;
        	cout << "Apellido: Martinez" << endl;
        	cout << "Contrasenia: 1578294245" << endl;
        	cout << "Vendedores favoritos: PerifericosARG";
        	}
        		if(opcion_info_todos_vendedores==10){
        	cout << "* GamerFex *" << endl;
        	cout << "Nombre: Martin " << endl;
        	cout << "Apellido: Juan" << endl;
        	cout << "Contrasenia: 1981994" << endl;
        	cout << "Vendedores favoritos: Julian Maggi";
        	}
        		if(opcion_info_todos_vendedores==11){
        	cout << "* Juan Suarez *" << endl;
        	cout << "Nombre: Juan " << endl;
        	cout << "Apellido: Suarez" << endl;
        	cout << "Contrasenia: 1125652" << endl;
        	cout << "Vendedores favoritos: GamerFex";
        	}
        		if(opcion_info_todos_vendedores==12){
        	cout << "* Empresa Ramon guitierrez *" << endl;
        	cout << "Nombre: Ramon " << endl;
        	cout << "Apellido: Guitierrez" << endl;
        	cout << "Contrasenia: 29554166892231" << endl;
        	cout << "Vendedores favoritos: Gerardo emanuel";
        	}
        		if(opcion_info_todos_vendedores==13){
        	cout << "* Empresa Julian Maggi *" << endl;
        	cout << "Nombre: Julian " << endl;
        	cout << "Apellido: Maggi" << endl;
        	cout << "Contrasenia: 912159221" << endl;
        	cout << "Vendedores favoritos: Gerardo emanuel";
        	}
        		if(opcion_info_todos_vendedores==14){
        	cout << "* Empresa GamingEX *" << endl;
        	cout << "Nombre: Julio " << endl;
        	cout << "Apellido: Armonez" << endl;
        	cout << "Contrasenia: 125791689445" << endl;
        	cout << "Vendedores favoritos: EnergyGaming";
        	}
        	if(opcion_info_todos_vendedores==15){
        	cout << "* Martin Juarez *" << endl;
        	cout << "Nombre: Martin " << endl;
        	cout << "Apellido: Juarez" << endl;
        	cout << "Contrasenia: 22019" << endl;
        	cout << "Vendedores favoritos: EnergyGaming";
        	}
       }
         void mostrar_cada_vendedor_recomendado(){
         	char nombre_ver_vendedor_recomendado[25];
         	char apellido_ver_vendedor_recomendado[20];
         	char contrasenia_ver_vendedor_recomendado[12];
         	//Registrado
         	 char usuario_registrado[25] = "Ramos";
             char contrasenia_registrado[12] = "1234";
             char apellido_usuario_registrado[20] = "Martinez";
    
         	cout << "Haga Login en el usuario deseado para ver sus vendedores recomendados" << endl;
         	cout << "Nombre: ";
         	cin >> nombre_ver_vendedor_recomendado;
         	cout << "Contrasenia: ";
         	cin >> contrasenia_ver_vendedor_recomendado;
         	if (strcmp(nombre_ver_vendedor_recomendado, usuario_registrado) == 0 && strcmp(contrasenia_ver_vendedor_recomendado, contrasenia_registrado) == 0){
         		cout << "Ver vendedores recomendados" << endl;
        	cout << "* MIS VENDEDORES RECOMENDADOS *" << endl;
        	cout << "Juan Hernandez" << endl;
        	cout << "Martin herrera" << endl;
        	cout << "Jose Luis" << endl;
        	cout << "EnergyGaming" << endl;
        	cout << "GamingEX";
    }
    
}
         void mostrar_cada_vendedor_recomendado_2(){
        cout << "* VENDEDORES RECOMENDADOS *" << endl;
          cout << "1. Julio Hernandez" << endl;
	      cout << "2. PepeTechnologies" << endl;
	      cout << "3. Martin Martinez" << endl;
	      cout << "4. PerifericosARG" << endl;
	      cout << "5. Gerardo Martinez" << endl;
	      cout << "6. GamingEX" << endl;
	      cout << "7. PepeTechnologies" << endl;
	      cout << "8. Julian Maggi";
         }
         void mostrar_todos_los_nombres_a_la_venta(){
         	mostrar_productos_usuario_anonimo();
         }
         void desconectarse_del_sistema(){
         		int opcion_opciones_publicar_producto_registrado;
    int opcion;
    int opcion_elija_opcion_menu_registrado_usuario;
    int opcion_ver_mis_productos_registrado;
    //
	char nombre_usuario[25],  contrasenia_usuario[12], apellido_usuario[20];
    
    
    // Datos del usuario administrador
    char usuario_admin[25] = "Mauricio";
    char contrasenia_admin[12] = "12345";
    char apellido_admin[20] = "Ramos";
    // Datos del usuario registrado
    char usuario_registrado[25] = "Ramos";
    char contrasenia_registrado[12] = "1234";
    char apellido_usuario_registrado[20] = "Martinez";
    //publicar producto
    char  opcion_ingrese_nombre_producto[20];
    char descripcion_producto_publicado[40];
    int producto_publicado_precio;
    
    cout << "****************************" << endl;
    cout << "*    BIENVENIDO A I-BUY    *" << endl;
    cout << "****************************" << endl;
    cout << "1. Iniciar sesion" << endl;
    cout << "2. Ver productos" << endl;
    cout << "3. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    
    system("cls");

    // Condicionales
    if(opcion == 2){
    	mostrar_productos_usuario_anonimo();
    }
    
    
    if (opcion == 1) {
        usuario_login(nombre_usuario, contrasenia_usuario, usuario_registrado, contrasenia_registrado, usuario_admin, contrasenia_admin);
        
        // Si el usuario ingresado no coincide, no mostrar el menú
        if (strcmp(nombre_usuario, usuario_registrado) != 0 && strcmp(nombre_usuario, usuario_admin) != 0) {
            cout << "\nError: Nombre de usuario o contrasenia incorrectos\n" << endl;
            system("pause");
            
            
        }
         }
     }
