int i=1;

const int ledPin_RR =  9; //right red
const int ledPin_RB =  8; // right blue
const int ledPin_RG =  7; // right green

const int ledPin_MR =  2;  // middle red 
const int ledPin_MB =  3;  // middle blue
const int ledPin_MG =  4;  // middle green

const int ledPin_LB =  10;  //left blue
const int ledPin_LR =  11;  //left red
const int ledPin_LG =  12;  //left green


void setup() 
 { 

 
 pinMode(13, INPUT); 
 
  pinMode(ledPin_RR, OUTPUT);
  pinMode(ledPin_RB, OUTPUT);
  pinMode(ledPin_RG, OUTPUT);
 
  pinMode(ledPin_MR, OUTPUT);
  pinMode(ledPin_MB, OUTPUT);
  pinMode(ledPin_MG, OUTPUT);
  
  pinMode(ledPin_LB, OUTPUT);
  pinMode(ledPin_LR, OUTPUT);
  pinMode(ledPin_LG, OUTPUT);
 } 

 void loop()
 { 
 Serial.begin(9600);

 if(digitalRead(13)==HIGH)//если кнопка нажата ... 
 { 
 colorFunction_led1(i);
 Serial.println("i ="+i);
 if(i<8){i=i+1;};
 if(i>=7){i=1;};
 delay(500);
 };
 
 
 };
 
 
int colorFunction_led1(int i){
  digitalWrite(ledPin_RR, LOW);
  digitalWrite(ledPin_RB, LOW);
  digitalWrite(ledPin_RG, LOW);
 
  digitalWrite(ledPin_MR, LOW);
  digitalWrite(ledPin_MB, LOW);
  digitalWrite(ledPin_MG, LOW);
  
  digitalWrite(ledPin_LB, LOW);
  digitalWrite(ledPin_LR, LOW);
  digitalWrite(ledPin_LG, LOW);
 
 if(i==1){digitalWrite(ledPin_RR, HIGH);}; //red
 if(i==2){digitalWrite(ledPin_RR, HIGH);digitalWrite(ledPin_RG, HIGH);}; //yellow
 if(i==3){digitalWrite(ledPin_RG, HIGH);}; //green
 if(i==4){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RG, HIGH);}; //cyan
 if(i==5){digitalWrite(ledPin_RB, HIGH);}; //blue
 if(i==6){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RR, HIGH);}; //purple
 if(i==7){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RR, HIGH);digitalWrite(ledPin_RG, HIGH);};
 
 };

 


 
