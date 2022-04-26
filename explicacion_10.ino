//explicacion_10

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
Inicio de Arbol Logico del programa:
  Usando la funcion de do...while (ver: do...while*), 
  el siguiente bloque de codigo se va ejecutar por lo menos UNA ves, aunque la condicion sea falsa.
  Aparte de este comportamiento, sirve igual que un ciclo while.
  Se lee: HACER [codigo], si MIENTRAS es verdadero, repetir ciclo. A lo contrario, saltar bloque de codigo.
  Igual que en explicacion_9, el led rojo va prender y el verde se apagara, se mantiene por 100 millisegundos y se reversa.
  */
  do{
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, LOW);
    delay(100);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, HIGH);
    delay(100);

    Estado_Pulsador_NA = digitalRead(Pulsador_NA);
  } while(Estado_Pulsador_NA == LOW);
  //Cuando la condicion anterior se vuelva falsa (cuando se pulsa y se mantiene pulsado el boton), se va a ejecutar el siguiente bloque (saltando el anterior):
  //Parpadear ambos LEDs por dos ciclos con un intervalo de 1 segundo entre prender y apagar.
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

/*

//do...while* :
  Siempre se va ejecutar por lo menos UNA VEZ el bloque de codigo, 
  es decir, el programa verifica la condicion DESPUES de ejecutar.
  Es en esto que se contrasta del ciclo while, el cual verifica la condicion ANTES de ejecutar.
  https://www.arduino.cc/reference/en/language/structure/control-structure/dowhile/

//Circuito simulado en: https://www.tinkercad.com/things/eBA8KWzrzRe

*/