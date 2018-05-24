# Utiliser un joystick en Arduino

Le but de cette bibliothèque est de faciliter l'utilisation d'un joystick en Arduino. Il permet de définir les 3 broches du joystick.

* VRx -> axe x
* VRy -> axe y
* SW -> bouton d'appui du joystick

Il faut brancher *VRx* et *VRy* en analogique et *SW* en numérique. Le bouton utilise la pull-up interne de l'Arduino

Pour l'utiliser, il suffit de créer un objet `joystick` puis de l'initialiser :

```c
joy = init_joystick(pin_x, pin_y, pin_bp);
```

Il suffit ensuite d'utiliser la fonction `get_joystick()` pour récupérer les informations et `aff_serial_joy()` pour les afficher en série.

```c
get_joystick(&joy);
aff_serial_joy(joy);
```

Pour plus de détails, référer vous aux exemples disponibles.
