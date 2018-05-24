#ifndef _JOYSTICK_H_
#define _JOYSTICK_H_

typedef struct{
  int pin_x, pin_y, pin_bp;
  int cal_x, cal_y;
  int x, y, bp;
}joystick;

// Initialise le joystick
joystick init_joystick(int pin_x, int pin_y, int pin_bp);

// Récupère les infos du joystick
void get_joystick(joystick *jy);

// Affiche en série les infos
void aff_serial_joy(joystick jy);

#endif

