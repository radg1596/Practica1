//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//Desiderio Gonz�lez Ricardo Abraham
//Versi�n visual: 2015
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
//D
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(0.0f, 19.0f, -1.2f);
		glVertex3f(4.0f, 16.0f, -1.2f);
		glVertex3f(4.0f, 13.0f, -1.2f);
		glVertex3f(0.0f, 10.0f, -1.2f);
	glEnd();

//G: Se usar�n 5 poligonos
	//1)
	glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(6.0f, 19.0f, -1.2f);
		glVertex3f(12.0f, 19.0f, -1.2f);
		glVertex3f(12.0f, 17.0f, -1.2f);
		glVertex3f(8.0f, 17.0f, -1.2f);
	glEnd();
	
	//2)
	glBegin(GL_POLYGON);
		glColor3f(1.0, 0.0, 1.0);
		glVertex3f(6.0f, 19.0f, -1.2f);
		glVertex3f(8.0f, 17.0f, -1.2f);
		glVertex3f(8.0f, 13.0f, -1.2f);
		glVertex3f(6.0f, 10.0f, -1.2f);
	glEnd();

	//3)
	glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(8.0f, 13.0f, -1.2f);
		glVertex3f(10.0f, 13.0f, -1.2f);
		glVertex3f(12.0f, 10.0f, -1.2f);
		glVertex3f(6.0f, 10.0f, -1.2f);
	glEnd();

	//4)
	glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 1.0);
		glVertex3f(10.0f, 14.0f, -1.2f);
		glVertex3f(12.0f, 16.0f, -1.2f);
		glVertex3f(12.0f, 10.0f, -1.2f);
		glVertex3f(10.0f, 13.0f, -1.2f);
	glEnd();

	//5)
	glBegin(GL_POLYGON);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(9.0f, 16.0f, -1.2f);
		glVertex3f(12.0f, 16.0f, -1.2f);
		glVertex3f(10.0f, 14.0f, -1.2f);
		glVertex3f(9.0f, 14.0f, -1.2f);
	glEnd();

//D: Un bucle y dos lineas
	//1)	
	glBegin(GL_LINE_LOOP);
		glColor3f(0.5, 1.0, 1.0);
		glVertex3f(14.0f, 19.0f, -1.2f);
		glVertex3f(19.0f, 19.0f, -1.2f);
		glVertex3f(19.0f, 15.0f, -1.2f);
		glVertex3f(14.0f, 15.0f, -1.2f);
	glEnd();

	//2)
	glBegin(GL_LINES);
	glColor3f(0.5, 1.0, 1.0);
		glVertex3f(14.0f, 15.0f, -1.2f);
		glVertex3f(19.0f, 10.0f, -1.2f);
	glEnd();

	//3)
	glBegin(GL_LINES);
	glColor3f(0.5, 1.0, 1.0);
		glVertex3f(14.0f, 15.0f, -1.2f);
		glVertex3f(14.0f, 10.0f, -1.2f);
	glEnd();

//A: Se usan  6 poligonos
	//1)
	glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(21.0f, 19.0f, -1.2f);
		glVertex3f(27.0f, 19.0f, -1.2f);
		glVertex3f(25.0f, 18.0f, -1.2f);
		glVertex3f(23.0f, 18.0f, -1.2f);
	glEnd();

	//2)
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
		glVertex3f(21.0f, 19.0f, -1.2f);
		glVertex3f(23.0f, 18.0f, -1.2f);
		glVertex3f(23.0f, 14.0f, -1.2f);
		glVertex3f(21.0f, 10.0f, -1.2f);
	glEnd();

	//3)
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
		glVertex3f(23.0f, 14.0f, -1.2f);
		glVertex3f(23.0f, 10.0f, -1.2f);
		glVertex3f(21.0f, 10.0f, -1.2f);
	glEnd();

	//4)
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
		glVertex3f(25.0f, 14.0f, -1.2f);
		glVertex3f(27.0f, 10.0f, -1.2f);
		glVertex3f(25.0f, 10.0f, -1.2f);
	glEnd();

//5)
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
		glVertex3f(25.0f, 18.0f, -1.2f);
		glVertex3f(27.0f, 19.0f, -1.2f);
		glVertex3f(27.0f, 10.0f, -1.2f);
		glVertex3f(25.0f, 14.0f, -1.2f);
	glEnd();

//6)
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
		glVertex3f(23.0f, 16.0f, -1.2f);
		glVertex3f(25.0f, 16.0f, -1.2f);
		glVertex3f(25.0f, 14.0f, -1.2f);
		glVertex3f(23.0f, 14.0f, -1.2f);
	glEnd();

//Estrella: Se usaran 6 poligonos
//1)
	glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(12.0f, 8.0f, -1.2f);
		glVertex3f(14.0f,5.0f, -1.2f);
		glVertex3f(10.0f, 5.0f, -1.2f);
	glEnd();

	//2)
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
		glVertex3f(7.0f, 5.0f, -1.2f);
		glVertex3f(10.0f, 5.0f, -1.2f);
		glVertex3f(10.0f, 3.0f, -1.2f);
	glEnd();

	//3)
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
		glVertex3f(14.0f, 5.0f, -1.2f);
		glVertex3f(10.0f, 5.0f, -1.2f);
		glVertex3f(10.0f, 3.0f, -1.2f);
		glVertex3f(12.0f, 2.0f, -1.2f);
		glVertex3f(14.0f, 3.0f, -1.2f);
		glVertex3f(17.0f, 5.0f, -1.2f);
	glEnd();

	//4)
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(10.0f, 3.0f, -1.2f);
	glVertex3f(12.0f, 2.0f, -1.2f);
	glVertex3f(7.0f, 0.0f, -1.2f);
	glEnd();

	//5)
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(14.0f, 3.0f, -1.2f);
	glVertex3f(17.0f, 0.0f, -1.2f);
	glVertex3f(12.0f, 2.0f, -1.2f);
	glEnd();

	glFlush();

}
 
void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,30,-10,25,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut funci�n de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

