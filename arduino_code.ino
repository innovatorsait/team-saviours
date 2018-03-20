int led;
int trigPin=13; //Sensor Trip pin connected to Arduino pin 13
int echoPin=11;  //Sensor Echo pin connected to Arduino pin 11
float pingTime;  //time for ping to travel from sensor to target and return
float targetDistance; //Distance to Target in inches
float speedOfSound=767; //Speed of sound in miles per hour when temp is 77 degrees.
int p ,q  ,c=0; //Variable for the value we want to set servo to.
float D,dist1,dist2;
int sv;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led,OUTPUT);
  pinMode(5,OUTPUT);
  
  //s1.attach(servoControlPin);  //Tell arduino where the servo is attached.
  //s2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly: 

  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(15); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent
  delayMicroseconds(10); //Delay in low state
  //
  pingTime = pulseIn(echoPin, HIGH);  //pingTime is presented in microceconds
  pingTime=pingTime/1000000; //convert pingTime to seconds by dividing by 1000000 (microseconds in a second)
  pingTime=pingTime/3600; //convert pingtime to hourse by dividing by 3600 (seconds in an hour)
  targetDistance= speedOfSound * pingTime;  //This will be in miles, since speed of sound was miles per hour
  targetDistance=targetDistance/2; //Remember ping travels to target and back from target, so you must divide by 2 for actual target distance.
  targetDistance= targetDistance*160934;    //Convert miles to inches by multipling by 63360 (inches per mile)
  D=targetDistance;
  //
  Serial.print("The Distance to Target is: ");
  Serial.print(targetDistance);
  Serial.println(" cm");
  delay(1000);
  sv=analogRead(A0);
  Serial.println(sv);
  if(sv>1000) {//bcz wo 10 mein se ek baar change ho rahi thi
    dist1=D;
    Serial.print("dist1 is ");
    Serial.println(dist1);
    while(c<15000) {
      delay(15);
      sv=analogRead(A0);
      //Serial.println(sv);
      if(sv<1000){
        Serial.println("breaked i.e tapp onned");
        break;
      }
      c=c+15;
      Serial.println(c);
    }
    
    if(c>=15000){
        //
 // put your main code here, to run repeatedly: 

  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(15); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent
  delayMicroseconds(10); //Delay in low state
  //
  pingTime = pulseIn(echoPin, HIGH);  //pingTime is presented in microceconds
  pingTime=pingTime/1000000; //convert pingTime to seconds by dividing by 1000000 (microseconds in a second)
  pingTime=pingTime/3600; //convert pingtime to hourse by dividing by 3600 (seconds in an hour)
  targetDistance= speedOfSound * pingTime;  //This will be in miles, since speed of sound was miles per hour
  targetDistance=targetDistance/2; //Remember ping travels to target and back from target, so you must divide by 2 for actual target distance.
  targetDistance= targetDistance*160934;    //Convert miles to inches by multipling by 63360 (inches per mile)
  D=targetDistance;
  //
      dist2=D;
      Serial.print("dist2 is ");
      Serial.println(dist2);
    }
    if(dist1!=dist2){
        digitalWrite(5,HIGH);
      delay(3000);
      digitalWrite(5,LOW);
      delay(1000);
      //Serial.println("led glow");
    }
    c=0;
    Serial.println(c);
    delay(20000);
  }
  }


