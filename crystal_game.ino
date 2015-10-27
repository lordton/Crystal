int i=1;
const int ledPin_RR =  9; //right red
const int ledPin_RB =  8; // right blue
const int ledPin_RG =  7; // right green

const int ledPin4 =  2;  // middle red 
const int ledPin5 =  3;  // middle blue
const int ledPin6 =  4;  // middle green


const int ledPin7 =  10;  //left blue
const int ledPin8 =  11;  //left red
const int ledPin9 =  12;  //left green


void setup() 
 { 

 pinMode(9, OUTPUT); 
 pinMode(13, INPUT); 
 
 

  pinMode(ledPin_RR, OUTPUT);
  pinMode(ledPin_RB, OUTPUT);
  pinMode(ledPin_RG, OUTPUT);
 
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
 } 

 void loop() 

 { 
 if(digitalRead(13)==HIGH)//если кнопка нажата ... 
 { 
 digitalWrite(i, LOW);
 if(i<14){i=i+1;};
 if(i>=13){i=1;};
 digitalWrite(i, HIGH);
 delay(500);
 } ;

 };


 
