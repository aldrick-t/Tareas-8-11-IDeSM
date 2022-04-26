//explicacion_8

//Se definen las siguientes variables a numeros de pines en el arduino.
int Led_Rojo = 10; 
int Led_Verde = 9;
int Pulsador_NA = 8;

//Esta variable se define como un bit de control/informacion. Para guardar en memoria un dato de numero entero(int).
int Estado_Pulsador_NA = 0;

//En este setup se delcaran el modo de pin de los pines definidos anteriormente.
void setup(){
  pinMode(Led_Rojo, OUTPUT); //La variable, que es igual a 10 (pin 10), se declara como SALIDA.
  pinMode(Led_Rojo, OUTPUT);  //la variable, que es igual a 9 (pin 9), se declara como SALIDA.
  pinMode(Pulsador_NA, INPUT); //la variable, que es igual a 8 (pin 8), se declara como ENTRADA.

}

//En ese bloque se repite infinitamente el programa.
void loop(){
/* 
  Se define la variable de informacion Estado_Pulsador_NA como el valor de la lectura digital
  del Pulsador_NA (pin 8). Al ser digital, se interpretan valores binarios/booleanos 0 y 1 (ALTO y BAJO).
  */
  Estado_Pulsador_NA = digitalRead(Pulsador_NA);

//Entramos al Arbol Logico del programa: 
  //Aqui decimos (condicion): SI el valor de Estado_Pulsador_NA es BAJO (0), entonces ejecutar el bloque de codigo.
  //En este caso, (teoricamente) el led rojo va prender y el verde se apagara, se mantiene por 100 millisegundos y se reversa.
  //Se mantiene este ciclo hasta que se haga FALSA la condicion.
  if(Estado_Pulsador_NA == LOW){
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, LOW);
    delay(100);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, HIGH);
    delay(100);
  }
  //En cualquier otro caso (ver funcion de: else*), ejecutar el siguiente bloque (saltando el anterior):
  //Parpadear ambos LEDs por dos ciclos con un intervalo de 1 segundo entre prender y apagar.
  else{
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, HIGH);
    delay(1000);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, LOW);
    delay(1000);
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, HIGH);
    delay(1000);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, LOW);
    delay(1000);
  }
}

/*

else* :
  En un arbol logico de "if", se utiliza para definir que ejecutar si todas las condiciones anteriores son falsas.
  https://www.arduino.cc/reference/en/language/structure/control-structure/else/

Circuito simulado en: https://www.tinkercad.com/things/eBA8KWzrzRe

*/