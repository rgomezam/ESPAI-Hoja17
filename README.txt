# ESPAI-Hoja17

Ejercicios capítulo 17

1. Dado el siguiente código:

class Vehiculo
{
protected:
string color;
int peso;
public:
Vehiculo(string color, int peso);
virtual void getInfo();
};
Vehiculo::Vehiculo(string color, int peso)
{
this->color = color;
this->peso = peso;
}
void Vehiculo::getInfo()
{
cout << "Vehiculo: color=" << color << " , peso=" << peso << endl;
}
//************************************************************************
class Coche : public Vehiculo
{
protected:
int numPuertas;
public:
Coche(string color, int peso, int numPuertas);
void getInfo();
void abrirMaletero();
};
Coche::Coche(string color, int peso, int numPuertas) : Vehiculo(color, peso)
{
this->numPuertas = numPuertas;
}
void Coche::getInfo()
{
cout << "Coche: color=" << color << " , peso=" << peso << " , numPuertas="
<< numPuertas << endl;
}
void Coche::abrirMaletero()
{
cout << "Coche: abriendo maletero";
}
//************************************************************************
int main() {
Vehiculo* v2 = new Vehiculo("Verde", 1000);
Vehiculo* c2 = new Coche("Amarillo", 1100, 6);
v2->getInfo();
c2->getInfo();
return 0;
}

Y el resultado de su ejecución:
Vehiculo: color=Verde , peso=1000
Coche: color=Amarillo , peso=1100 , numPuertas=6

Explica lo siguiente:

a. ¿Qué sudecería si borramos la palabra clave virtual? (marcada en verde)
¿Cuál sería el resultado de su ejecución, y porqué?

b. ¿Cuál sería la salida si en lugar de crear las variables como puntero, las creamos como
objeto asi?
Vehiculo v("Rojo", 800);
Coche c("Azul", 900, 5);

c. ¿Podríamos hacer c2->abrirMaletero()?
¿Porqué?


2. Explica porqué en caso de utilizar una funcion virtual, los destructores también deben serlo.

3. Añade destructores y constructores de copia al código del ejercicio 1.

4. Práctica final del capítulo
Vamos a crear un programa para gestionar una discoteca. Queremos tener almacenados todos
los discos existentes (singles o no) y conocer su duracion, titulo de la cancion y autor.
También se van a clasificar de manera que los mas duros tendrán un 10, y los discos más suaves
un 1.
La aplicación tendrá las siguientes opciones:
1. Introducir disco
2. Borrar disco
3. Crear lista de reproducción
a. Manual
b. Aleatoria
4. Ver lista de reproducción
5. Salir
La opcion 1 nos permitirá creas un disco, con un titulo, autor y lista de canciones del mismo
(con la duracion de cada una)
La opcion 2 permite borrar discos completos (no canciones)
La opcion 3 nos permite crear una lista de reproducción, donde escogeremos de forma manual
los temas que contiene.
La opcion 4 tambien crea una lista, pero la genera de forma aleatoria y teniendo en cuenta que
empezaremos con temas suaves, e irá subiendo hasta el maximo para luego volver a
descender. Así, los temas más suaves irán al principio y al final, y el más duro en medio de la
sesión.
La opción 5 nos muestra la última lista de reproducción creada. Cada línea de la lista seguirá
este formato:
Disco – titulo canción – autor – nivel – duración – es single (si o no)
Utiliza la herencia, polimorfismo y métodos virtuales en tu programa.
