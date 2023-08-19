#include <DHT.h>

#define DHTPIN 13     // Pin donde está conectado el sensor DHT11
#define DHTTYPE DHT11 // Tipo de sensor DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Iniciar el monitor serial
  dht.begin();        // Iniciar el sensor DHT11
}

void loop() {
  // Leer la temperatura del sensor
  float temperature = dht.readTemperature();
  // Mostrar los valores en el monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print(" °C\t");

  delay(2000); // Esperar 2 segundos para tomar otra lectura
}
