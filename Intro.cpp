/*Ejercicio 1: Sumar puntos al jugador
Pedir al usuario los puntos iniciales y los puntos ganados. Mostrar el total.
*/

//#include <iostream>
//
//
//
//int main()
//{
//    int puntosIniciales, puntosGanados, puntosTotales;
//
//    std::cout << "Ingrese los puntos iniciales: " <<std::endl;
//    std::cin >> puntosIniciales;
//
//    std::cout << "Ingrese los puntos ganados: " << std::endl;
//    std::cin >> puntosGanados;
//
//    puntosTotales = puntosIniciales + puntosGanados;
//
//    std::cout << "Los puntos totales son: " << puntosTotales << "." << std::endl;
//
//}

//Ejercicio 2: Calcular daño recibido
//Ingresar la vida actual del personaje y cuánto daño recibe.Restar el daño a la vida y mostrar la vida resultante.

//#include <iostream>
//
//int main() {
//    
//    int danioRecibido, vidaActual, vidaResultante;
//
//    std::cout << "Ingrese la vida actual del personaje: " << std::endl;
//    std::cin >> vidaActual;
//
//    std::cout << "Ingrese el danio recibido: " << std::endl;
//    std::cin >> danioRecibido;
//
//    vidaResultante = vidaActual - danioRecibido;
//
//    std::cout << "La vida resultante es " << vidaResultante << "." << std::endl;
//
//}

//Ejercicio 3: Curar al personaje
//Ingresar la vida actual y una cantidad de curación.Sumar la curación a la vida y mostrar la   nueva vida(aunque supere 100, ya que aún no usan condicionales).

//#include <iostream>
//
//int main() {
//
//    int curacion, vidaActual, vidaResultante;
//
//    std::cout << "Ingrese la vida actual del personaje: " << std::endl;
//    std::cin >> vidaActual;
//
//    std::cout << "Ingrese la curacion: " << std::endl;
//    std::cin >> curacion;
//
//    vidaResultante = vidaActual + curacion;
//
//    std::cout << "La vida resultante es " << vidaResultante << "." << std::endl;
//}

//Ejercicio 4: Calcular experiencia necesaria para subir de nivel
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel.

//#include <iostream>
//
//int main() {
//
//    int nivelActual, experienciaActual, experienciaNecesaria, experienciaNivel;
//
//    std::cout << "Ingrese el nivel actual del personaje: " << std::endl;
//    std::cin >> nivelActual;
//
//    std::cout << "Ingrese la experiencia actual del personaje: " << std::endl;
//    std::cin >> experienciaActual;
//
//    experienciaNivel = 100;
//
//    experienciaNecesaria = experienciaNivel - experienciaActual;
//
//
//    std::cout << "Necesitas " << experienciaNecesaria << " de experiencia para subir a nivel " << nivelActual + 1 << "." << std::endl;
//}

//Ejercicio 5: Multiplicar monedas recogidas por un multiplicador
//Pedir cantidad de monedas recogidas y un multiplicador.Mostrar el total de monedas multiplicadas.

//#include <iostream>
//
//int main() {
//
//    int cantidadMonedasActual, multiplicadorMonedas, monedasMultiplcadas;
//
//    std::cout << "Ingrese la cantidad de monedas actual del personaje: " << std::endl;
//    std::cin >> cantidadMonedasActual;
//
//    std::cout << "Ingrese multiplicador de monedas : " << std::endl;
//    std::cin >> multiplicadorMonedas;
//
//    monedasMultiplcadas = cantidadMonedasActual * multiplicadorMonedas;
//
//
//    std::cout << "El total de monedas es " << monedasMultiplcadas <<std::endl;
//}

//Ejercicio 6: Sistema simple de compra
//Ingresar la cantidad de monedas del jugador y el precio de un objeto.Restar el precio a las monedas y mostrar lo que le queda. (puede que se saque fiado : D)

//#include <iostream>
//
//int main() {
//
//    int cantidadMonedasActual, precioObjeto, monedasDespuesDeComprar;
//
//    std::cout << "Ingrese la cantidad de monedas actual del personaje: " << std::endl;
//    std::cin >> cantidadMonedasActual;
//
//    std::cout << "Ingrese el precio del objeto: " << std::endl;
//    std::cin >> precioObjeto;
//
//    monedasDespuesDeComprar = cantidadMonedasActual - precioObjeto;
//
//
//    std::cout << "El total de monedas que te queda es " << monedasDespuesDeComprar << std::endl;
//}


//Ejercicio 7: Crear una función que sume dos números
//Crear una función llamada Sumar que reciba dos números y devuelva el resultado.Usarla para sumar puntos, monedas u otro recurso.

//#include <iostream>
//
//int suma(int num1, int num2) {
//    int resultado = num1 + num2;
//    return resultado;
//}
//int main() {
//
//    int cantidadPuntosActual, puntosDeMision, puntosTotales;
//
//    std::cout << "Ingrese la cantidad de puntos actual del personaje: " << std::endl;
//    std::cin >> cantidadPuntosActual;
//
//    std::cout << "Ingrese los puntos obtenidos de la mision: " << std::endl;
//    std::cin >> puntosDeMision;
//
//    puntosTotales = suma(cantidadPuntosActual, puntosDeMision);
//
//
//    std::cout << "El total de puntos obtenidos " << puntosTotales << std::endl;
//}

//Ejercicio 8: Crear una función que calcule daño
//La función CalcularDanio debe recibir ataque y defensa, y devolver el resultado de ataque menos defensa.No limitar el resultado.

//#include <iostream>
//
//int calcularDanio(int ataque, int defensa) {
//    int resultado = ataque - defensa;
//    return resultado;
//}
//int main() {
//
//    int ataqueJugador, defensaEnemigo, danioInflingido;
//
//    std::cout << "Ingrese el ataque del personaje: " << std::endl;
//    std::cin >> ataqueJugador;
//
//    std::cout << "Ingrese la defensa del enemigo: " << std::endl;
//    std::cin >> defensaEnemigo;
//
//    danioInflingido = calcularDanio(ataqueJugador, defensaEnemigo);
//
//
//    std::cout << "El danio causado fue de " << danioInflingido << std::endl;
//}

//Ejercicio 9: Ingresar los stats del jugador y mostrarlo en pantalla
//Pedir al usuario que ingrese su nombre, ataque, defensa, velocidad de ataque, vida maxima, multiplicador de danio critico  y mostrar sus stats.

//#include <iostream>
//
//int main() {
//
//    float ataque, defensa, velocidadDeAtaque, vidaMaxima, multiplicadorDeDanioCritico;
//    std::string nombre;
//
//    std::cout << "Ingrese el nombre del personaje: " << std::endl;
//    std::cin >> nombre;
//
//    std::cout << "Ingrese el ataque del personaje: " << std::endl;
//    std::cin >> ataque;
//
//    std::cout << "Ingrese la defensa del personaje: " << std::endl;
//    std::cin >> defensa;
//
//    std::cout << "Ingrese la velocidad de ataque del personaje: " << std::endl;
//    std::cin >> velocidadDeAtaque;
//
//    std::cout << "Ingrese la vida maxima del personaje: " << std::endl;
//    std::cin >> vidaMaxima;
//
//    std::cout << "Ingrese el danio critico del personaje: " << std::endl;
//    std::cin >> multiplicadorDeDanioCritico;
//
//
//    std::cout << "Tus stats son:" << std::endl;
//    std::cout << "Nombre: " << nombre <<std::endl;
//    std::cout << "Ataque: " << ataque << std::endl;
//    std::cout << "Defensa: " << defensa << std::endl;
//    std::cout << "Velocidad De Ataque: " << velocidadDeAtaque << std::endl;
//    std::cout << "Vida Maxima: " << vidaMaxima << std::endl;
//    std::cout << "Danio Critico: " << multiplicadorDeDanioCritico << std::endl;
//}

//Ejercicio 10: Calcular tiempo total de juego
//Pedir cuántos minutos jugó el jugador en tres días distintos.Mostrar el total y el promedio por Día y mostrarlos en pantalla en formato hs : mm

//#include <iostream>
//
//void tiempoJuego(int minutosTotales) {
//    int horas = minutosTotales / 60;
//    int minutosRestantes = minutosTotales % 60;
//    std::cout << horas << ":" << minutosRestantes;
//}
//
//int main() {
//
//    int minutosDia1, minutosDia2, minutosDia3, minutosTotales, promedio, tiempoTotal, promedioFormato;
//
//    std::cout << "Ingrese los minutos de juego del dia 1: " << std::endl;
//    std::cin >> minutosDia1;
//    std::cout << "Ingrese los minutos de juego del dia 2: " << std::endl;
//    std::cin >> minutosDia2;
//    std::cout << "Ingrese los minutos de juego del dia 3: " << std::endl;
//    std::cin >> minutosDia3;
//
//    minutosTotales = minutosDia1 + minutosDia2 + minutosDia3;
//    promedio = minutosTotales / 3;
//    
//    
//
//    std::cout << "EL tiempo total jugado fue de "; tiempoJuego(minutosTotales); std::cout << std::endl;
//    std::cout << "EL promedio de tiempo jugado fue de "; tiempoJuego(promedio); std::cout << std::endl;
//
//
//   
//}



//Ejercicio 11: Simulación de combate simple.
//Crear un programa que pida el nombre, vida, ataque y defensa del jugador, y también los datos del enemigo.
// Usar una función para calcular el daño del jugador al enemigo y viceversa(ataque menos defensa).
// Restar los daños a las vidas de ambos personajes.Mostrar los resultados en pantalla : vida inicial y final del jugador y del enemigo.
// simplemente mostrar todos los valores resultantes después del intercambio de ataques.

//#include <iostream>
//
//float calcularDanio(float ataque, float defensa) {
//    float resultado = ataque - defensa;
//    if (resultado < 0)
//        return 0; // Agrego eso porque si la defensa es mas grande que el ataque despues me da valores de vida mas grandes que antes de pelear :(
//    return resultado;
//}
//int main() {
//
//    float ataqueJugador, defensaJugador, vidaJugador, ataqueEnemigo, defensaEnemigo, vidaEnemigo, danioAlEnemigo, danioAlJugador, vidaFinalJugador, vidaFinalEnemigo;
//    std::string nombreJugador, nombreEnemigo;
//
//    std::cout << "Ingrese el nombre del personaje: " << std::endl;
//    std::cin >> nombreJugador;
//
//    std::cout << "Ingrese la vida del personaje: " << std::endl;
//    std::cin >> vidaJugador;
//
//    std::cout << "Ingrese el ataque del personaje: " << std::endl;
//    std::cin >> ataqueJugador;
//
//    std::cout << "Ingrese la defensa del personaje: " << std::endl;
//    std::cin >> defensaJugador;
//
//    std::cout << "Ingrese el nombre del enemigo: " << std::endl;
//    std::cin >> nombreEnemigo;
//
//    std::cout << "Ingrese la vida del enemigo: " << std::endl;
//    std::cin >> vidaEnemigo;
//
//    std::cout << "Ingrese el ataque del enemigo: " << std::endl;
//    std::cin >> ataqueEnemigo;
//
//    std::cout << "Ingrese la defensa del enemigo: " << std::endl;
//    std::cin >> defensaEnemigo;
//
//    danioAlJugador = calcularDanio(ataqueEnemigo, defensaJugador);
//    danioAlEnemigo = calcularDanio(ataqueJugador, defensaEnemigo);
//
//    vidaFinalJugador = vidaJugador - danioAlJugador;
//    vidaFinalEnemigo = vidaEnemigo - danioAlEnemigo;
//
//    std::cout << "Vida inicial del jugador: " << vidaJugador << std::endl;
//    std::cout << "Vida final del jugador: " << vidaFinalJugador << std::endl;
//
//    std::cout << "Vida inicial del enemigo: " << vidaEnemigo << std::endl;
//    std::cout << "Vida final del enemigo: " << vidaFinalEnemigo << std::endl;
//}