void setup() 
{
Serial.begin(9600);  /* initialise serial communication */
}

void loop()
{
Serial.println("Hello"); /* print Electronic Wings at new line per second */
delay(1000);
}
