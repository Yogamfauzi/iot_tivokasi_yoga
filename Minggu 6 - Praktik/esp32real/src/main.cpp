#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu = 26;
int lampu2 = 33;
int lampu3 = 35;

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");

    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop() {
    // Nyalakan kedua LED
    digitalWrite(lampu, HIGH);
    delay(1000); // Tunggu 1 detik
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    delay(1000); // Tunggu 1 detik
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    delay(1000); // Tunggu 1 detik
    digitalWrite(lampu3, LOW);   
}
