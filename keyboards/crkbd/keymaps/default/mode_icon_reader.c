#include "crkbd.h"

char mode_icon[40];

char *mode_icon_read(bool swap)
{
  static char logo[][2][3]={{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}}};
  if(swap == false){
    snprintf(mode_icon, sizeof(mode_icon), "%s\n%s", logo[0][0], logo[0][1]);
  }else{
    snprintf(mode_icon, sizeof(mode_icon), "%s\n%s", logo[1][0], logo[1][1]);
  }

  return mode_icon;
}
