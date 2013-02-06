/************************************
Author : Anuwat Somphadung
Date   : 2013-02-04
Version 1.0
http://www.n3amedia.com
Note : This code has been tested 
        with Arduino  Mega 2560
*************************************/

int Layer1[] = {52,53,50,51,48};  /*1st layer*/
int Layer2[] = {49,46,47,44,45};	/*2nd layer*/
int Layer3[] = {42,43,40,41,38};        /*3rd layer*/
int Layer4[] = {39,36,37,34,35};	/*4th layer*/
int Layer5[] = {32,33,30,31,28};	/*5th layer*/

/*Pins on Arduino Mega*/
int LED[] = {28,31,30,33,32,35,34,37,36,39,38,41,40,43,42,45,44,47,46,49,48,51,50,53,52};

int Tran[] = {2,3,4,5,6};

void setup(){
  for(int l1 = 0;l1 < 5; l1++)  {
    pinMode(Layer1[l1],OUTPUT);
  }
  for(int l2 = 0 ; l2 < 5; l2++)  {
    pinMode(Layer2[l2],OUTPUT);
  }
  for(int l3 = 0; l3 < 5; l3++) {
   pinMode(Layer3[l3],OUTPUT);
 }
 for(int l4 = 0; l4 < 5; l4++) {
   pinMode(Layer4[l4],OUTPUT);
 }
 for(int l5 = 0; l5 < 5; l5++) {
   pinMode(Layer5[l5],OUTPUT);
 }
 
 for(int t = 0 ;t < 5 ; t++) {
   pinMode(Tran[t],OUTPUT);
 }
 for(int c = 0; c < 25; c++)  {
   pinMode(LED[c], OUTPUT);
  }

}

void loop()		//ใช้ Loop For ในการควบคุม
{
  for(int t = 0; t < 5; t++)
  {
    digitalWrite(Tran[t],HIGH);
  }
  
//        ********Col Row1 ********* 
   for(int l1 = 0; l1 < 5 ; l1++)       //**** สว่างที่ละหลอด Layer 1
  {
     digitalWrite(Layer1[l1],HIGH);
    delay(50);
  }
         //*********Col off
  
    for(int l1 = 0; l1 < 5 ; l1++)        //ดับตาม Layer 1
  {
    digitalWrite(Layer1[l1],LOW);
   delay(50);                         // delay time in loop
  }
  delay(50);         // delay time out loop
  
 //       ********END******** 
 
//        ********Col Row2 ********* 
  for(int l2 = 4; l2 > -1 ; l2--)
  { 
    digitalWrite(Layer2[l2],HIGH);
    delay(50);
  }
  
      for(int l2 = 4; l2 > -1 ; l2--)        //ดับตาม Layer 1
  {
    digitalWrite(Layer2[l2],LOW);
   delay(50);                         // delay time in loop
  }
  delay(50);         // delay time out loop
  
  //     *********End****************
  
  //        ********Col Row3 ********* 
  
   for(int l3 = 0; l3 < 5 ; l3++)       //**** สว่างที่ละหลอด Layer 3
  {
     digitalWrite(Layer3[l3],HIGH);
    delay(50);
  }
         //*********Col off
  
    for(int l3 = 0; l3 < 5 ; l3++)        //ดับตาม Layer 3
  {
    digitalWrite(Layer3[l3],LOW);
   delay(50);                         // delay time in loop
  }
  delay(50);         // delay time out loop
  
 //       ********END******** 
 
 
//        ********Col Row4 ********* 
  for(int l4 = 4; l4 > -1 ; l4--)
  { 
    digitalWrite(Layer4[l4],HIGH);
    delay(50);
  }
  
      for(int l4 = 4; l4 > -1 ; l4--)        //ดับตาม Layer 4
  {
    digitalWrite(Layer4[l4],LOW);
   delay(50);                         /* delay time in loop*/
  }
  delay(50);         /* delay time out loop*/
  
  //     *********End****************
  
 //        ********Col Row5 ********* 
  for(int l5 = 0; l5 < 5 ; l5++)       //**** สว่างที่ละหลอด Layer 5
  {
     digitalWrite(Layer5[l5],HIGH);
    delay(50);
  }
         //*********Col off
  
    for(int l5 = 0; l5 < 5 ; l5++)        //ดับตาม Layer 5
  {
    digitalWrite(Layer5[l5],LOW);
   delay(50);                         // delay time in loop
  }
  delay(50);      // delay time out loop
}
      /********END********/
