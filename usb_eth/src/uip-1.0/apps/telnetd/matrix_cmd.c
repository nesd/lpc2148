#define SPI_CS BIT15

static char  space[16] =  {
  // SPACE
  0xFF, 0x7F, 0xFF, 0xBF, 0xFF, 0xDF, 0xFF, 0xEF, 
  0xFF, 0xF7, 0xFF, 0xFB, 0xFF, 0xFD, 0xFF, 0xFE };

  
static char characters[][16] =
{ 
  // A
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xC1, 0xFB, 0xDD, 0xFD, 0xDD, 0xFE },
  // B
  { 0xFF, 0x7F, 0xE1, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xE1, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE1, 0xFE },
  // C
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xFD, 0xEF, 
    0xFD, 0xF7, 0xFD, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // D
  { 0xFF, 0x7F, 0xE1, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE1, 0xFE },
  // E
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xFD, 0xDF, 0xFD, 0xEF, 
    0xF1, 0xF7, 0xFD, 0xFB, 0xFD, 0xFD, 0xC1, 0xFE },
  // F
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xFD, 0xDF, 0xFD, 0xEF, 
    0xF1, 0xF7, 0xFD, 0xFB, 0xFD, 0xFD, 0xFD, 0xFE },
  // G
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xFD, 0xEF, 
    0xFD, 0xF7, 0xCD, 0xFB, 0xDD, 0xFD, 0xC3, 0xFE },
  // H
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xC1, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xDD, 0xFE },
  // I
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xF7, 0xDF, 0xF7, 0xEF, 
    0xF7, 0xF7, 0xF7, 0xFB, 0xF7, 0xFD, 0xE3, 0xFE },
  // J
  { 0xFF, 0x7F, 0xC7, 0xBF, 0xDF, 0xDF, 0xDF, 0xEF, 
    0xDF, 0xF7, 0xDF, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // K
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xED, 0xDF, 0xF5, 0xEF, 
    0xF9, 0xF7, 0xF5, 0xFB, 0xED, 0xFD, 0xDD, 0xFE },
  // L
  { 0xFF, 0x7F, 0xFD, 0xBF, 0xFD, 0xDF, 0xFD, 0xEF, 
    0xFD, 0xF7, 0xFD, 0xFB, 0xFD, 0xFD, 0xC1, 0xFE },
  // M
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xC9, 0xDF, 0xD5, 0xEF, 
    0xDD, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xDD, 0xFE },
  // N
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xD9, 0xEF, 
    0xD5, 0xF7, 0xCD, 0xFB, 0xDD, 0xFD, 0xDD, 0xFE },
  // O
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // P
  { 0xFF, 0x7F, 0xE1, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xE1, 0xF7, 0xFD, 0xFB, 0xFD, 0xFD, 0xFD, 0xFE },
  // Q
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xD5, 0xFB, 0xED, 0xFD, 0xD3, 0xFE },
  // R
  { 0xFF, 0x7F, 0xE1, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xE1, 0xF7, 0xF5, 0xFB, 0xED, 0xFD, 0xDD, 0xFE },
  // S
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xFD, 0xEF, 
    0xE3, 0xF7, 0xDF, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // T
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xF7, 0xDF, 0xF7, 0xEF, 
    0xF7, 0xF7, 0xF7, 0xFB, 0xF7, 0xFD, 0xF7, 0xFE },
  // U
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // V
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xEB, 0xEF, 
    0xEB, 0xF7, 0xEB, 0xFB, 0xF7, 0xFD, 0xF7, 0xFE },
  // W
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xDD, 0xF7, 0xD5, 0xFB, 0xD5, 0xFD, 0xEB, 0xFE },
  // X
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xEB, 0xEF, 
    0xF7, 0xF7, 0xEB, 0xFB, 0xDD, 0xFD, 0xDD, 0xFE },
  // Y
  { 0xFF, 0x7F, 0xDD, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xE3, 0xF7, 0xF7, 0xFB, 0xF7, 0xFD, 0xF7, 0xFE },
  // Z
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xDF, 0xDF, 0xEF, 0xEF, 
    0xF7, 0xF7, 0xFB, 0xFB, 0xFD, 0xFD, 0xC1, 0xFE },
};
static char numbers[][16] = {
  // 0
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xCD, 0xEF, 
    0xD5, 0xF7, 0xD9, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // 1
  { 0xFF, 0x7F, 0xF7, 0xBF, 0xF3, 0xDF, 0xF7, 0xEF, 
    0xF7, 0xF7, 0xF7, 0xFB, 0xF7, 0xFD, 0xE3, 0xFE },
  // 2
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDF, 0xEF, 
    0xE7, 0xF7, 0xFB, 0xFB, 0xFD, 0xFD, 0xC1, 0xFE },
  // 3
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDF, 0xEF, 
    0xEF, 0xF7, 0xDF, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // 4
  { 0xFF, 0x7F, 0xEF, 0xBF, 0xF7, 0xDF, 0xFB, 0xEF, 
    0xED, 0xF7, 0xC1, 0xFB, 0xEF, 0xFD, 0xEF, 0xFE },
  // 5
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xFD, 0xDF, 0xE1, 0xEF, 
    0xDF, 0xF7, 0xDF, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // 6
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xFD, 0xEF, 
    0xE1, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // 7
  { 0xFF, 0x7F, 0xC1, 0xBF, 0xDF, 0xDF, 0xDF, 0xEF, 
    0xEF, 0xF7, 0xF7, 0xFB, 0xFB, 0xFD, 0xFD, 0xFE },
  // 8
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xE3, 0xF7, 0xDD, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE },
  // 9
  { 0xFF, 0x7F, 0xE3, 0xBF, 0xDD, 0xDF, 0xDD, 0xEF, 
    0xC3, 0xF7, 0xDF, 0xFB, 0xDD, 0xFD, 0xE3, 0xFE }
};

void sendSpi2(uint16_t data)
{
  IOCLR0 = SPI_CS;
  S0SPDR = data & 0xff;
  while ((S0SPSR & 0x80) == 0);
  S0SPDR = (data >> 8) & 0xff;
  while ((S0SPSR & 0x80) == 0);
  IOSET0 = SPI_CS;
  
}


void matrixInit()
{
  /* select spi in pins */
  PINSEL0 &= 0xffff00ff;
  PINSEL0 |= 0x00005500;

  /* initialize spi to highest speed */
  S0SPCCR = 0x8;
  S0SPCR = 0x38;

  /* set p0.15 as output and set the pin to high */
  IODIR0 |= SPI_CS;
  IOSET0 = SPI_CS;

  sendSpi2(0xffff);
  
}


void matrixDisplayMessage(char *str)
{
  char *pattern;
  volatile int i;
  volatile int j;
  volatile int k;

  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      pattern = (char*)&characters[*str - 'a'];
    }
    else if (*str >= 'A' && *str <= 'Z') {
      pattern = (char*)&characters[*str - 'A'];
    }
    else if (*str >= '0' && *str <= '9') {
      pattern = (char*)&numbers[*str - '0'];
    }
    else if (*str == ' ') {
      pattern = (char*)&space;
    }
    else {
      str++;
      continue;
    }

    k=500;
    while (k >0) {
      for (i=0;i<16;i+=2) {
        sendSpi2(pattern[i] | (pattern[(i+1)] << 8));
        for (j=0;j<100;j++);
      }
      k--;
    }
    str++;
  }
    
}

int is_matrix_initialized = 0;
void matrix(char *cmd, char *args)
{
  if (!is_matrix_initialized) {
    matrixInit();
  }
  matrixDisplayMessage(args);
  sendSpi2(0xffff);
}