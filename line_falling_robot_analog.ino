void setup() 
{
int leftsensor = A0;
int rightsensor = A1;
int leftforward = A2;
int leftbackward = A3;
int rightforward = A4;
int rightbackward = A5;
pinMode(leftsensor, INPUT);
pinMode(rightsensor, INPUT);
pinMode(leftforward, OUTPUT);
pinMode(leftbackward , OUTPUT);
pinMode(rightforward, OUTPUT);
pinMode(rightbackward, OUTPUT);

}
void loop()
{
  

if(analogRead(leftsensor)<500 && analogRead(rightsensor)<500)
{
  analogWrite(leftbackward, 150);
  analogWrite(rightforward, 150);
}
else if(analogRead(leftsensor)>=500 && analogRead(rightsensor)<500)
{
  analogWrite(leftforward, 0);
  analogWrite(rightforward, 150);
}
else if(analogRead(leftsensor)<500 && analogRead(rightsensor)>=500)
{
   analogWrite(leftforward, 150);
  analogWrite(rightforward, 0);
}
else if(analogRead(leftsensor)<=500 && analogRead(rightsensor)<=500)
{
  analogWrite(leftforward, 0);
  analogWrite(rightforward, 0);
}














  

}
