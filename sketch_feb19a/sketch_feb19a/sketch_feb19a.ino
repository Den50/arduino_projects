
// задаем константы
const int buttonPin = 2;     // номер входа, подключенный к кнопке

 
// переменные
int buttonState = 0;         // переменная для хранения состояния кнопки
 
void setup() {
  // инициализируем пин, подключенный к светодиоду, как выход
  // инициализируем пин, подключенный к кнопке, как вход
  pinMode(buttonPin, INPUT);   
  Serial.begin(9600);
}
 
void loop(){
  // считываем значения с входа кнопки
  buttonState = digitalRead(buttonPin);
 
  Serial.println(buttonState);
}

