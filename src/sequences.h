
// I got a snake, maing!
uint32_t snake_animation_lut[][16] = {
  { 0x004373,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x7A001A,0x000000,
    0x000000,0x000000,0x000000,0x000000},   //Frame1

  { 0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x7A001A,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x7A001A,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x7A001A,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0xFF0000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0xFF0000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0xFF0000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x7A001A,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000},

  { 0x7A001A,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000},   //Frame1

  { 0x7A001A,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000},

  { 0x7A001A,0x000000,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x000000},

  { 0x7A001A,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0xFF0000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0xFF0000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0xFF0000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x7A001A,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x7A001A,
    0x000000,0x000000,0x000000,0x000000},   //Frame1

  { 0x004373,0x004373,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x7A001A,
    0x004373,0x000000,0x000000,0x000000},

  { 0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x7A001A,
    0x004373,0x004373,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x7A001A,
    0x004373,0x004373,0x004373,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x7A001A,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0xFF0000,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0xFF0000,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0xFF0000,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x004373,0x004373,0x004373,0x004373},   //Frame1

  { 0x000000,0x000000,0x000000,0x004373,
    0x000000,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x004373,0x004373,
    0x000000,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x004373,0x004373},

  { 0x000000,0x004373,0x004373,0x004373,
    0x000000,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373},

  { 0x004373,0x004373,0x004373,0x004373,
    0x000000,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0x7A001A,0x000000,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0xFF0000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0xFF0000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0xFF0000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},   //Frame1

  { 0x004373,0x004373,0x004373,0x004373,
    0x004373,0x004373,0x004373,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x7A001A,0x000000,0x000000},

  { 0x004373,0x004373,0x004373,0x000000,
    0x004373,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x7A001A,0x000000,0x000000},

  { 0x004373,0x004373,0x000000,0x000000,
    0x004373,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x7A001A,0x000000,0x000000},

  { 0x004373,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x7A001A,0x000000,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0x7A001A,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0xFF0000,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0xFF0000,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x000000,0x004373,
    0x000000,0xFF0000,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x004373,0x004373,0x004373,
    0x000000,0x000000,0x7A001A,0x004373,
    0x004373,0x004373,0x004373,0x004373},   //Frame1

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x004373,0x004373,
    0x004373,0x000000,0x7A001A,0x004373,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x000000,0x000000,0x004373,
    0x004373,0x000000,0x7A001A,0x004373,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x000000,0x000000,
    0x004373,0x000000,0x7A001A,0x004373,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x000000,0x000000,
    0x004373,0x004373,0x7A001A,0x000000,
    0x004373,0x004373,0x004373,0x004373},

  { 0x000000,0x000000,0x000000,0x000000,
    0x004373,0x004373,0x000000,0x000000,
    0x004373,0x004373,0x7A001A,0x000000,
    0x004373,0xFF0000,0x004373,0x000000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000,
    0x000000,0x000000,0x000000,0x000000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000},

  { 0xFF0000,0x000000,0x000000,0xFF0000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0x000000,0xFF0000,0xFF0000,0x000000,
    0xFF0000,0x000000,0x000000,0xFF0000}   //Frame7
};

uint32_t raining_data[14][16] = {
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0x00000000, 0xffff00, 0x00000000, 0xffff00, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0xffff00, 
  0x00000000, 0xffff00, 0x00000000, 0xffff00, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000
  },
  {
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffff00, 
  0x00000000, 0xffff00, 0x00000000, 0xffff00, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000
  },
  {
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffff00, 
  0x00000000, 0x00000000, 0x00000000, 0xffff00
  },
  {
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffff00
  },
  {
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0xffff00, 0x00000000, 0xffff00, 0x00000000
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xffff00, 0x00000000, 0x00000000
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  }
};

uint32_t yellow_wave_data[17][16] = {
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xff00ffff, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xff3affff, 0xff00ffff, 0x00000000, 0x00000000, 
  0xff00ffff, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xff3affff, 0xff3affff, 0xff00ffff, 0x00000000, 
  0xff3affff, 0xff00ffff, 0x00000000, 0x00000000, 
  0xff00ffff, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 0xff00ffff, 
  0xffa8fdfd, 0xff3affff, 0xff00ffff, 0x00000000, 
  0xff3affff, 0xff00ffff, 0x00000000, 0x00000000, 
  0xff00ffff, 0x00000000, 0x00000000, 0x00000000
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 
  0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 0xff3affff, 
  0xffa8fdfd, 0xff3affff, 0xff3affff, 0xff00ffff, 
  0xff3affff, 0xff3affff, 0xff00ffff, 0x00000000
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 
  0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 0xff3affff, 
  0xffa8fdfd, 0xff3affff, 0xff3affff, 0xff00ffff
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 
  0xffa8fdfd, 0xffa8fdfd, 0xff3affff, 0xff00ffff
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xff00ffff
  },
  {
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0xffa8fdfd, 0xffa8fdfd, 
  0x00000000, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0xffa8fdfd, 
  0x00000000, 0x00000000, 0xffa8fdfd, 0xffa8fdfd, 
  0x00000000, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 
  0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffa8fdfd, 
  0x00000000, 0x00000000, 0xffa8fdfd, 0xffa8fdfd, 
  0x00000000, 0xffa8fdfd, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffa8fdfd, 
  0x00000000, 0x00000000, 0xffa8fdfd, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffa8fdfd
  },
  {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000000
  }
  };