int i=1;
int j=1;
int k=1;
int x=1;

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
   randomSeed(analogRead(0)); /// nugno chtobi random bil nastoyachi
   
 pinMode(5, INPUT); 
 pinMode(6, INPUT); 
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
  
randomiseColor ();
randomiseColor ();
randomiseColor ();
randomiseColor ();
randomiseColor ();
 } 

 void loop()
 { 
 Serial.begin(9600);

 if(digitalRead(13)==HIGH)//knopka 1 -pribavljaet +1 levomu
 { 
 Serial.println(i);
 if(i<8){i=i+1;};
 if(i>=7){i=1;};
 colorFunction_led1(i);
 delay(300);
 };
 
 if(digitalRead(6)==HIGH)//knopka 2 -pribavlaet +1 srednemy
 { 
 Serial.println(k);
 if(k<8){k=k+1;};
 if(k>=7){k=1;};
 colorFunction_led2(k);
 delay(300);
 };
  
 if(digitalRead(5)==HIGH)//knopka 3 - listaet vlevo
 { 
x=i;
i=k;
k=j;
j=x;
 colorFunction_led1(i);
 colorFunction_led2(k);
 colorFunction_led3(j);
 delay(300);
 };
 
 if(i==k and i!=6){ //dve levie odinakovie vikluchit pravuu
   j=0;
   colorFunction_led3(j);
 };
 
if(j==0 and i==6 and k==6){ //vikluchit dve belie
   k=0;
   colorFunction_led2(k);
 };
 
if(k==j and k!=6){  //dve pravie odinakovie vikluchit levuu
i=0;
colorFunction_led1(i);
};
 
 
 
 
 
 if(i==6 and k==6 and j==6){ // WIN!!!!!!
 whiteBlink();
 whiteBlink();
 whiteBlink();
 whiteBlink();
 whiteBlink();
 
 randomiseColor ();
 randomiseColor ();
 randomiseColor ();
 randomiseColor ();
 randomiseColor ();
 }
 
 
 
 };
 
 
int colorFunction_led3(int i){
  digitalWrite(ledPin_RR, LOW);
  digitalWrite(ledPin_RB, LOW);
  digitalWrite(ledPin_RG, LOW);
 
 if(i==1){digitalWrite(ledPin_RR, HIGH);}; //red
 if(i==2){digitalWrite(ledPin_RR, HIGH);digitalWrite(ledPin_RG, HIGH);}; //yellow
 if(i==3){digitalWrite(ledPin_RG, HIGH);}; //green
 //if(i==4){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RG, HIGH);}; //cyan
 if(i==4){digitalWrite(ledPin_RB, HIGH);}; //blue
 if(i==5){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RR, HIGH);}; //purple
 if(i==6){digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RR, HIGH);digitalWrite(ledPin_RG, HIGH);};
 
 };

 int colorFunction_led2(int j){
  digitalWrite(ledPin_MR, LOW);
  digitalWrite(ledPin_MB, LOW);
  digitalWrite(ledPin_MG, LOW);

 if(j==1){digitalWrite(ledPin_MR, HIGH);}; //red
 if(j==2){digitalWrite(ledPin_MR, HIGH);digitalWrite(ledPin_MG, HIGH);}; //yellow
 if(j==3){digitalWrite(ledPin_MG, HIGH);}; //green
 //if(j==4){digitalWrite(ledPin_MB, HIGH);digitalWrite(ledPin_MG, HIGH);}; //cyan
 if(j==4){digitalWrite(ledPin_MB, HIGH);}; //blue
 if(j==5){digitalWrite(ledPin_MB, HIGH);digitalWrite(ledPin_MR, HIGH);}; //purple
 if(j==6){digitalWrite(ledPin_MB, HIGH);digitalWrite(ledPin_MR, HIGH);digitalWrite(ledPin_MG, HIGH);};
 
 };

 int colorFunction_led1(int k){
  digitalWrite(ledPin_LR, LOW);
  digitalWrite(ledPin_LB, LOW);
  digitalWrite(ledPin_LG, LOW);

 if(k==1){digitalWrite(ledPin_LR, HIGH);}; //red
 if(k==2){digitalWrite(ledPin_LR, HIGH);digitalWrite(ledPin_LG, HIGH);}; //yellow
 if(k==3){digitalWrite(ledPin_LG, HIGH);}; //green
 //if(k==4){digitalWrite(ledPin_LB, HIGH);digitalWrite(ledPin_LG, HIGH);}; //cyan
 if(k==4){digitalWrite(ledPin_LB, HIGH);}; //blue
 if(k==5){digitalWrite(ledPin_LB, HIGH);digitalWrite(ledPin_LR, HIGH);}; //purple
 if(k==6){digitalWrite(ledPin_LB, HIGH);digitalWrite(ledPin_LR, HIGH);digitalWrite(ledPin_LG, HIGH);};
 
 };
 
 int randomiseColor (){
   i=random(1, 6);
  k=random(1, 6);
  j=random(1, 6);
  
  colorFunction_led1(i);
  colorFunction_led2(j);
  colorFunction_led3(k);
  delay(600);
 };
 

int whiteBlink(){
  digitalWrite(ledPin_RR, LOW);
  digitalWrite(ledPin_RB, LOW);
  digitalWrite(ledPin_RG, LOW);
  digitalWrite(ledPin_MR, LOW);
  digitalWrite(ledPin_MB, LOW);
  digitalWrite(ledPin_MG, LOW);
  digitalWrite(ledPin_LR, LOW);
  digitalWrite(ledPin_LB, LOW);
  digitalWrite(ledPin_LG, LOW);
  delay(200);
  digitalWrite(ledPin_LB, HIGH);digitalWrite(ledPin_LR, HIGH);digitalWrite(ledPin_LG, HIGH);
  digitalWrite(ledPin_MB, HIGH);digitalWrite(ledPin_MR, HIGH);digitalWrite(ledPin_MG, HIGH);
  digitalWrite(ledPin_RB, HIGH);digitalWrite(ledPin_RR, HIGH);digitalWrite(ledPin_RG, HIGH);
  delay(200);
};
