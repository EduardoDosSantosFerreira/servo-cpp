# Projeto Arduino de Controle de Servo Motor com Potenciômetro

![Servo](https://github.com/EduardoDosSantosFerreira/servo-cpp/blob/main/servo.png)

O código implementa um projeto que utiliza um potenciômetro para controlar a posição de um servo motor. A leitura do potenciômetro é mapeada para um intervalo de 0 a 360 graus, que é então enviado para o servo motor.

## Componentes Utilizados

- 1 Servo motor
- 1 Potenciômetro

## Funcionamento do Código

1. **Configuração Inicial**

   - O código define a entrada analógica A0 para leitura do potenciômetro.
   - Inicializa a comunicação serial para depuração.
   - O servo motor é configurado para operar no pino 9, com uma faixa de 500 a 2500 micros para os pulsos.

2. **Leitura do Potenciômetro**

   - O código lê o valor analógico do potenciômetro utilizando a função `analogRead`.
   - O valor lido é mapeado para um intervalo de 0 a 360 graus, que representa a posição do servo motor.

3. **Controle do Servo Motor**

   - O valor mapeado é enviado para o servo motor utilizando a função `write`.
   - O valor lido do potenciômetro e o valor mapeado são impressos no monitor serial para depuração.

4. **Ajuste de Tempo**

   - Um pequeno atraso é adicionado para melhorar o desempenho da simulação.

## Considerações Finais

Esse projeto demonstra como utilizar um potenciômetro para controlar a posição de um servo motor de forma contínua. A aplicação prática inclui sistemas de posicionamento controlados manualmente, como braços robóticos e câmeras de monitoramento.
