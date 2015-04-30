//~ TP #03: Juego de preguntas y respuestas.
//~ Antonio Agustín Hardoy
//~ 30 de abril de 2015


#include <iostream>
using namespace std;

int main () {
	int tema;
	int rtanum;
	char consulta;
	string rtastr;
	int puntaje = 0;
	
	menu:
	
	cout << "Menú de temas         	      Puntaje: "<< puntaje << "\n\n";
	cout << "1) Química \n\n";
	cout << "2) Tierra Media \n\n";
	cout << "3) Biología \n\n";
	cout << "4) Salir \n\n";	
	cout << "Elegir un tema del menú por su número: ";
	cin >> tema;
	
	
	switch (tema) {
			case 1:
				goto tema1; //~Química
				break;
			case 2:
				goto tema2; //~Tierra Media
				break;
			case 3:
				goto tema3; //~Biología
				break;
			case 4:
				return 0; //~Salir
				break;
				
			default:
				cout << "Intente nuevamente\n";
				goto menu;
				break;
	}
	
//~ Dialogo para consultar si seguir con el juego
	consultar:
	
	cout << "¿Desea continuar el juego? (s/n): ";
	cin >> consulta;
	if (consulta == 's') {
		goto menu; }
			else {
				return 0;}

//~ Química

	tema1:
	//~ Pregunta 1
	cout << "¿Cuál es el número Z del Cloro?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtanum;
		if (rtanum==17) {
			cout << "Respuesta correcta \n\n";
			puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
			 
	//~ Pregunta 2
	cout << "¿Cuál es la atomicidad del Nitrato de Plata?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtanum;
		if (rtanum==5) {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ Pregunta 3
	cout << "¿Qué elemento tiene Z = 27?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="hierro") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ No más preguntas, consultar si se sigue
	
	goto consultar;

//~ Tierra Media

	tema2:
	//~ Pregunta 1
	cout << "¿Cuál es el nombre del enano hijo de Thráin, hijo de Thrór, Rey Bajo la Montaña?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="thorin") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else if (rtastr=="Thorin") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ Pregunta 2
	cout << "¿Cuántos anillos forjó Sauron para los Reyes Elfos bajo el cielo?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtanum==0) {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ Pregunta 3
	cout << "¿Quién construyó el palacio de Meduseld?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="brego") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else if (rtastr=="Brego") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	
	//~ No más preguntas, consultar si se sigue
	goto consultar;
	
	tema3:
//~ Biología
	//~ Pregunta 1
	cout << "¿Cuál es el orden de fases del proceso de mitosis?\n\n";
	cout << "a:		Profase, Prometafase, Interfase, Metafase, Anafase.\n";
	cout << "b:		Profase, Prometafase, Metafase, Interfase, Anafase.\n";
	cout << "c:		Interfase, Profase, Prometafase, Metafase, Anafase.\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="c") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ Pregunta 2
	cout << "¿Qué aminoácido está definido por el codón 'GGC'?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="glicina") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ Pregunta 3
	cout << "¿En qué mitocondria se lleva a cabo el ciclo de Krebs en los organismos eucariotas?\n\n";
	cout << "Ingrese su respuesta: ";
	cin >> rtastr;
		if (rtastr=="mitocondria") {
				cout << "Respuesta correcta \n\n";
				puntaje ++;
			} else {
				cout << "Respuesta incorrecta \n\n";
			}
	//~ No más preguntas, consultar si se sigue
	goto consultar;
}
