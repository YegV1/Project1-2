int d = 100;
void setup() {
pinMode(2, OUTPUT);	// LED 1 control pin is set up as an output
   pinMode(3, OUTPUT);	// same for LED 2 to LED 5
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
}

void loop() {
 for ( int a = 2; a < 7 ; a++ )
   {
       digitalWrite(a, HIGH);
       delay(d);
       digitalWrite(a, LOW);
       delay(d);
   }
  for ( int a = 5 ; a > 1 ; a-- )
{
   digitalWrite(a, HIGH);
   delay(d);
   digitalWrite(a, LOW);
   delay(d);
}
}
