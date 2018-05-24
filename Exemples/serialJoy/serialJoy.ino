#include <joystick.h>

// Creation d'un joystick
joystick joy1;

void setup() {
  // Initialisation du joystick
  // Axe x -> A0
  // Axe y -> A1
  // Bouton -> D2
  joy1 = init_joystick(0,1,2);
}

void loop() {
  // reupere les infos du joystick
  get_joystick(&joy1);
  // affiche les infos en serie
  aff_serial_joy(joy1);
  delay(100);
}

