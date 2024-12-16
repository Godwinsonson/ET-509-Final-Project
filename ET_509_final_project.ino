//Thomas Stocklin
int redLight = 3;
int yellowLight = 5;
int greenLight = 6;
int swtch = 4;
int swtchstate;

void setup() { 
  Serial.begin(9600);
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(swtch, INPUT);
}

void loop() {
  swtchstate = digitalRead(swtch);
  if (swtchstate == HIGH){
    digitalWrite (redLight, HIGH);
    digitalWrite (yellowLight, LOW );
    digitalWrite (greenLight, LOW);
    delay (20000);
    
    digitalWrite (redLight, LOW);
    digitalWrite (yellowLight, HIGH);
    delay (3000);
   
    digitalWrite (yellowLight, LOW);
    digitalWrite (greenLight, HIGH);
    delay (30000);
    
    digitalWrite (yellowLight, HIGH);
    digitalWrite (greenLight, LOW);
    delay (3000);
  }
  else if (swtchstate == LOW) {
    digitalWrite (redLight, HIGH);
    digitalWrite (yellowLight, LOW);
    digitalWrite (greenLight, LOW);
    delay (20000);
    
    digitalWrite (redLight, LOW);
    digitalWrite (yellowLight, HIGH);
    delay (3000);
    
    digitalWrite (yellowLight, LOW);
    digitalWrite (greenLight, HIGH);
    delay (60000);
    
    digitalWrite (yellowLight, HIGH);
    digitalWrite (greenLight, LOW);
    delay (3000); 
  } 
}
