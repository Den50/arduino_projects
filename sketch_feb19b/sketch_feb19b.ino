
int ldr = 0; //и фоторезистора

void setup() //процедура setup

{

Serial.begin(9600);
}

void loop() //процедура loop

{
int x = analogRead(ldr);
Serial.print(x);
Serial.print("\n");

//если показатель освещенности меньше 800, включаем светодиод
delay(100);

}
