#include <AFMotor.h>

#define SPEED 150 

char command;

// Configuração dos 4 motores no Shield
AF_DCMotor M1(1);
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

void setup() {
 
  Serial.begin(9600); 
  
 
  M1.setSpeed(SPEED);
  M2.setSpeed(SPEED);
  M3.setSpeed(SPEED);
  M4.setSpeed(SPEED);
  
  Stop(); // Garante que começa parado
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    
    // Pequeno delay para garantir estabilidade da leitura
    Stop(); 

    // Mapeamento dos comandos
 
    switch (command) {
      case 'F': // Forward
      case 'U': // Up
        forward();
        break;
        
      case 'B': // Backward
      case 'D': // Down
        backward();
        break;
        
      case 'L': // Left
        left();
        break;
        
      case 'R': // Right
        right();
        break;
        
      case 'S': // Stop
      case '0': // Alguns apps mandam 0 ou parou
        Stop();
        break;
    }
  }
}


void forward() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void backward() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}

void right() {
 
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void left() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}

void Stop() {
  M1.run(RELEASE);
  M2.run(RELEASE);
  M3.run(RELEASE);
  M4.run(RELEASE);
}