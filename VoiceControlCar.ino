#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX

#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

String cmd = "";

void setup() {
  BT.begin(9600);
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  stopMotors();
}

void loop() {
  while (BT.available()) {
    char c = BT.read();
    cmd += c;
    delay(5);
  }

  if (cmd.length() > 0) {
    cmd.trim();   // remove spaces/newline
    Serial.println(cmd);

    if (cmd == "forward") {
      forward();
    }
    else if (cmd == "back") {
      backward();
    }
    else if (cmd == "left") {
      left();
    }
    else if (cmd == "right") {
      right();
    }
    else if (cmd == "stop") {
      stopMotors();
    }

    cmd = "";
  }
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
