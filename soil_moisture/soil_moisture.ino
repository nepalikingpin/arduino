int sensor_pin = A0; //Soil Sensor input at Analog Pin A0

int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);

   output_value = map(output_value,1019,303,0,100);//Mapping output value to percentage Test Data Dry : 1023 Wet:303
   Serial.print("Moisture : ");
   if(output_value > 100) {

   Serial.print("100");
   }

   else {
    Serial.print(output_value);
   }

   Serial.println("%");

   delay(1000);

   }
