#include <Servo.h> 

// Укажем, что к каким пинам подключено
//Эхолокатор
int trigPin = 8; 
int echoPin = 9;  

//Серво
Servo myservo;
int servopin = 10;

//Подключение моторов
#define SPEED_1      5 
#define DIR_1        4
 
#define SPEED_2      6
#define DIR_2        7

void setup() { 
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  myservo.attach(9);

  for(int i = 4; i < 8; i++)     
    pinMode(i, OUTPUT);  
} 

int getDistance(int trigPin, int echoPin){
  int duration, distance;
  // для большей точности установим значение LOW на пине Trig
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  // Теперь установим высокий уровень на пине Trig
  digitalWrite(trigPin, HIGH);
  // Подождем 10 μs 
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW); 
  // Узнаем длительность высокого сигнала на пине Echo
  duration = pulseIn(echoPin, HIGH); 
  // Рассчитаем расстояние
  distance = duration / 58;
  return distance;
}

void m_1(bool direction, int speed){
  analogWrite(SPEED_1, speed);
  digitalWrite(DIR_1, !direction);
}
void m_2(bool direction, int speed){
  analogWrite(SPEED_2, speed);
  digitalWrite(DIR_2, !direction);
}
void loop() { 
  
  // Выведем значение в Serial Monitor
  //Serial.print(getDistance(trigPin, echoPin)); 
  //Serial.println(" cm"); 
  //delay(100);
  
  m_1(HIGH, 100);
  delay(2000);
  m_1(HIGH, 0);
  delay(1000);
  m_2(LOW, 100);
  delay(2000);
  m_2(LOW, 0);

  while(true)
  ;
 
}
