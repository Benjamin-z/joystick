#include <Arduino.h>
#include "joystick.h"

joystick init_joystick(int pin_x, int pin_y, int pin_bp){
  // Initialisation du joystick
  joystick jy;
  // Pull up sur le bouton
  pinMode(pin_bp, INPUT_PULLUP);
  // def des broches
  jy.pin_x = pin_x;
  jy.pin_y = pin_y;
  jy.pin_bp = pin_bp;
  // Demarrage du lien serie
  Serial.begin(9600);
  
  // Calibration du joystick a zero
  jy.cal_x = analogRead(jy.pin_x);
  jy.cal_y = analogRead(jy.pin_y);
  return jy;
}

void get_joystick(joystick *jy){
  // Recuperation des trois mesures x, y et le bouton
  jy->x = analogRead(jy->pin_x) - jy->cal_x;
  jy->y = analogRead(jy->pin_y) - jy->cal_y;
  jy->bp = !digitalRead(jy->pin_bp);
}

void aff_serial_joy(joystick jy){
  // Affichage en serie
  Serial.print("X = ");
  Serial.print(jy.x);
  Serial.print("; Y = ");
  Serial.print(jy.y);
  Serial.print("; BP = ");
  Serial.println(jy.bp);
}

