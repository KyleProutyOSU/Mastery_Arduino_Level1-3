
int count = 0;

void setup() {
 
  Serial.begin(9600);
}

void loop() {
  
  while(count<10)
  {
      count+=1;
      Serial.println(count);
  }
  
  delay(1000);
}
