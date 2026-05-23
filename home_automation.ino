#define RELAY 2

void setup() {

  pinMode(RELAY, OUTPUT);

  Serial.begin(9600);

  WiFi.begin("Your_WiFi_Name", "Your_Password");

  while(WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }

  Serial.println("Connected to WiFi");
}

void loop() {

  digitalWrite(RELAY, HIGH);
  delay(3000);

  digitalWrite(RELAY, LOW);
  delay(3000);
}
