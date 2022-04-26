//explicacion_11

int Led_Rojo = 10; 
int Led_Verde = 9;
int Pulsador_NA = 8;
int Estado_Pulsador_NA = 0;

void setup(){
  pinMode(Led_Rojo, OUTPUT);
  pinMode(Led_Rojo, OUTPUT); 
  pinMode(Pulsador_NA, INPUT); 

}


void loop(){
  Estado_Pulsador_NA = digitalRead(Pulsador_NA);
/*
Entramos al Arbol Logico del programa: 
  Igual a explicacion_8.
  Aqui decimos (condicion): SI el valor de Estado_Pulsador_NA es BAJO (0), entonces ejecutar el bloque de codigo.
  En este caso, (teoricamente) el led rojo va prender y el verde se apagara, se mantiene por 100 millisegundos y se reversa.
  Se mantiene este ciclo hasta que se haga FALSA la condicion. 
  */
  if(Estado_Pulsador_NA == LOW){
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, LOW);
    delay(100);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, HIGH);
    delay(100);
  }
  /*
  En cualqier otro caso (cuando la condicion anterior se vuelva falsa), es decir, al presionar el boton:
  Se va iniciar un ciclo for (ver: for*), como inicializacion/incremento se tiene que la variable "i" aumentara de 1 cada ves
  que se repita el ciclo (hasta que se vuelva falsa la condicion). 
  La condicion de este ciclo es: MIENTRAS "i" sea MENOR a 5, repetir ciclo. Cuando sea mayor a 5, salir del ciclo.

  Este ciclo se puede iniciar con un solo pulso ALTO del pulsador (un pulso = inicializacion --> 5 ciclos).
  Al mantenserse pulsado el pulsador, este ciclo se repetira cada ves que se inicie, es decir, si se mantiene pulsado por 2 parpadeos/ciclos,
  el programa va completar los 5 parpadeos/ciclos. Si se mantiene por 7, el programa va completar los 10 parpadeos/ciclos.
  */
  else{
    for(int i = 0; i < 5; i++){
      digitalWrite(Led_Rojo, HIGH);
      digitalWrite(Led_Verde, HIGH);
      delay(1000);
      digitalWrite(Led_Rojo, LOW);
      digitalWrite(Led_Verde, LOW);
      delay(1000);
    }
  }
}

/*

for* :
  Un ciclo for es aquel que repite el bloque de codigo hasta que se vuelva falsa la condicion,
  en contraste de otros ciclos, este tiene una declaracion de incremento.
  Este incremento/decremento se ejecuta cada vez que se repite el ciclo, esto hace que sea un ciclo FINITO.
  https://www.arduino.cc/reference/en/language/structure/control-structure/for/

Circuito simulado en: https://www.tinkercad.com/things/eBA8KWzrzRe

*/
