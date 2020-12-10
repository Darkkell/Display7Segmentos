/*
  @author: Fermín Alejandro Flores Reyes
  @description: Contador de 0-9 Display de 7 Segmentos
*/

int desg(int a,int b, int c, int d, int e, int f, int g, int pd, int num); //Declaramos nuestra Función
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

     for (int i=0;i<10;i++){
      // dseg(a,b,c,d,e,f,g,dp,num);
      dseg(2,3,4,5,6,7,8,9,i); //Llamamos a nuestra funcion y le enviamos parametros
      for (int j=0;j<10;j++){
        //dseg(2,3,4,5,6,7,8,9,j);
        Serial.print("Numero: ");
        Serial.println(i);
        //Serial.println(j);
        delay(500);
      }      
     }

}

/*
  @params
    a ... pd -> pin de dicho segmento del display
    num -> numero que queremos mostrar
*/

int dseg(int a,int b, int c, int d,int e, int f, int g, int pd, int num){
  
  //Asignamos el modo de nuestro Pin
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(pd,OUTPUT);
  
  //Inicializamos nuestros pines en Low/Apagado
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(pd,LOW);
    
  switch(num){
    case 0:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      break;
      
    case 1:
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      break;
      
    case 2:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 3:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 4:
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 5:
      digitalWrite(a,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 6:
      digitalWrite(a,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 7:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      break;
      
    case 8:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
      
    case 9:
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

      //Alejandro Flores
  }
}

