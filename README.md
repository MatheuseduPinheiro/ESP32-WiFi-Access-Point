# ESP32 WiFi Access Point

Este projeto demonstra a criação de um ponto de acesso WiFi usando o ESP32, com funcionalidades adicionais para monitorar dispositivos conectados e controlar um LED RGB. O código implementa um ponto de acesso (AP) que permite a conexão de dispositivos e exibe o número de clientes conectados via serial. Além disso, um LED RGB integrado ao ESP32 é utilizado para indicar o estado do sistema com diferentes cores.

## Funcionalidades

- **Configuração do Ponto de Acesso:** O ESP32 é configurado para atuar como um ponto de acesso WiFi, permitindo a conexão de dispositivos.
- **Contagem de Dispositivos Conectados:** O número de dispositivos conectados ao ponto de acesso é exibido na saída serial.
- **Controle de LED RGB:** O LED RGB é utilizado para fornecer feedback visual, mudando de cor em intervalos regulares.

## Contexto

Este projeto foi desenvolvido como parte de um experimento de Internet das Coisas (IoT) no Laboratório de Automação e Controle (LACA) da Universidade da Amazônia (UNAMA). O objetivo foi explorar a capacidade do ESP32 em criar e gerenciar um ponto de acesso WiFi, bem como utilizar suas funcionalidades para controle e monitoramento de dispositivos conectados.

## Instruções de Uso

1. Conecte o ESP32 à sua máquina e carregue o código fornecido.
2. O ESP32 criará uma rede WiFi com o nome "ESP32-AP" e a senha "12345678".
3. Conecte-se à rede WiFi gerada pelo ESP32 com um dispositivo.
4. Monitore a saída serial para ver o número de dispositivos conectados e observe a mudança de cor do LED RGB.

## Requisitos

- **Hardware:** ESP32, LED RGB
- **Software:** Arduino IDE com a biblioteca `WiFi.h` instalada

## Licença

Este projeto é licenciado sob a [Licença MIT](LICENSE).
