#include <WiFi.h>  // Biblioteca para a conexão WiFi

// Configurações de rede
const char* ssid = "ESP32-AP";  
const char* password = "12345678";  // Senha da rede WiFi (mínimo 8 caracteres)

int R, G, B;

void setup() {
  Serial.begin(115200);

 
  IPAddress local_IP(192, 168, 4, 1);  // IP do ESP32 no modo AP
  IPAddress gateway(192, 168, 4, 1);   // O próprio ESP32 atua como gateway
  IPAddress subnet(255, 255, 255, 0);  // Máscara de sub-rede

  // Iniciar o ponto de acesso com as configurações de IP estático
  WiFi.softAPConfig(local_IP, gateway, subnet);
  WiFi.softAP(ssid, password);

  Serial.println("Ponto de Acesso iniciado");
  Serial.print("IP do AP: ");
  Serial.println(WiFi.softAPIP());

  // Configura o pino RGB_BUILTIN como saída
  pinMode(RGB_BUILTIN, OUTPUT);
}

void loop() {
  // Verifica quantos dispositivos estão conectados ao AP
  uint8_t numClients = WiFi.softAPgetStationNum();
  Serial.print("Dispositivos conectados: ");
  Serial.println(numClients);

  // Aqui você pode adicionar qualquer código adicional para manipular a lista de dispositivos conectados

  R = 0;
  G = 0;
  B = 255;
  
  neopixelWrite(RGB_BUILTIN, R, G, B);  // Define a cor como azul
  delay(1000);
  
  neopixelWrite(RGB_BUILTIN, 0, 0, 0);  // Desliga o LED
  delay(1000);
}
