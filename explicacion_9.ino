//explicacion_9

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
  En contraste del arbol logico de la explicacion_8 (ver: explicacion_8.ino), en este se utiliza un ciclo while (ver: while*).
  Aunque esto cambie, la funcion del programa se mantiene igual.
  Para leer esta condicion: MIENTRAS el valor de Estado_Pulsador_NA es BAJO (0), entonces ejecutar el bloque de codigo.
  Igual que en explicacion_8, el led rojo va prender y el verde se apagara, se mantiene por 100 millisegundos y se reversa. 
  */
  while(Estado_Pulsador_NA == LOW){
    digitalWrite(Led_Rojo, HIGH);
    digitalWrite(Led_Verde, LOW);
    delay(100);
    digitalWrite(Led_Rojo, LOW);
    digitalWrite(Led_Verde, HIGH);
    delay(100);

    Estado_Pulsador_NA = digitalRead(Pulsador_NA);
  }
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

while* : 
  Se utiliza para REPETIR un bloque de codigo hasta que la condicion se vuelva falsa.
  https://www.arduino.cc/reference/en/language/structure/control-structure/while/

Circuito simulado en: https://www.tinkercad.com/things/eBA8KWzrzRe

*/