int sensor_pin = 2;
int led_pin = 3;

void setup () {
    pinMode(sensor_pin, INPUT);
    pinMode(led_pin, OUTPUT);
    // pinMode(LED_BUILTIN, OUTPUT);
    // Serial.begin(9600);
}

void loop() {
    // digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(led_pin, LOW);
    int val = digitalRead(sensor_pin);
    if(val == 1) {
        Serial.println("Found!");
        // digitalWrite(LED_BUILTIN, HIGH); 
        digitalWrite(led_pin, HIGH);
    }
    else {
        Serial.println("Not Found!");
    }
    delay(5000);
}

// void loop () {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(1000);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(1000);
// }