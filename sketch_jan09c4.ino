#include <SPI.h>                             // Подключаем библиотеку SPI
#include <Adafruit_GFX.h>                    // Подключаем библиотеку Adafruit_GFX
#include <Max72xxPanel.h>                    // Подключаем библиотеку Max72xxPanel
int pinCS = 9;                               // Указываем к какому выводу подключен контакт CS
int numberOfHorizontalDisplays = 1;          // Количество матриц по горизонтали
int numberOfVerticalDisplays = 1;            // Количество матриц по-вертикали
int x = 0;
int y = 0;
Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);
void setup() {
  matrix.setIntensity(5);                    // Задаем яркость от 0 до 15
  matrix.setRotation(3);                      // Направление текста 1,2,3,4
}
void loop() {
  matrix.fillScreen(LOW);                       // Обнуление матрицы
  y = 0;
  for (int x = 0; x < 8; x++ ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 7;
  for (int y = 1; y < 8; y++ ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  y = 7;
  for (int x = 7; x > 0; x-- ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 0;
  for (int y = 8; y > 0; y-- ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
//-------
  y = 1;
  for (int x = 1; x < 6; x++ ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 6;
  for (int y = 1; y < 6; y++ ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  y = 6;
  for (int x = 6; x > 0; x-- ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 1;
  for (int y = 6; y > 0; y-- ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
//-------  
  y = 2;
  for (int x = 2; x < 5; x++ ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 5;
  for (int y = 2; y < 5; y++ ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  y = 5;
  for (int x = 5; x > 0; x-- ) { // Передача массива
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
  x = 2;
  for (int y = 5; y > 0; y-- ) {
    matrix.drawPixel(x, y, HIGH);
    matrix.write();
    delay(50);
  }
//-------  
  y = 2;
  for (int x = 2; x < 5; x++ ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 5;
  for (int y = 2; y < 5; y++ ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  y = 5;
  for (int x = 5; x > 1; x-- ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 2;
  for (int y = 5; y > 1; y-- ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
//-------  
  y = 1;
  for (int x = 1; x < 6; x++ ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 6;
  for (int y = 1; y < 6; y++ ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  y = 6;
  for (int x = 6; x > 0; x-- ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 1;
  for (int y = 6; y > 0; y-- ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
//-------  
  y = 0;
  for (int x = 0; x < 8; x++ ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 7;
  for (int y = 1; y < 8; y++ ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  y = 7;
  for (int x = 7; x > 0; x-- ) { // Передача массива
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
  x = 0;
  for (int y = 8; y > 0; y-- ) {
    matrix.drawPixel(x, y, LOW);
    matrix.write();
    delay(50);
  }
    const byte hf[8] = {                    // Создаем массив "Смайл"
        0b00111100,                               //    ####
        0b01000010,                               //   #    #
        0b10100101,                               //  # #  # #
        0b10000001,                               //  #      #
        0b10100101,                               //  # #  # #
        0b10011001,                               //  #  ##  #
        0b01000010,                               //   #    #
        0b00111100                                //    ####
        };                                          
          byte nf[8] = {
            B00111100, 
            B01000010, 
            B10100101, 
            B10000001, 
            B10111101, 
            B10000001, 
            B01000010, 
            B00111100};
          byte sf[8] = {
            B00111100, 
            B01000010, 
            B10100101, 
            B10000001, 
            B10011001, 
            B10100101, 
            B01000010, 
            B00111100};
  matrix.fillScreen(LOW);                       // Обнуление матрицы
  for (int y = 0; y < 8; y++ ) {            // Передача массива
    for (int x = 0; x < 8; x++ ) {
      matrix.drawPixel(x, y, hf[y] & (1 << x));
    }
  }
  matrix.write();
  delay(1000);
  for (int y = 0; y < 8; y++ ) {            // Передача массива
    for (int x = 0; x < 8; x++ ) {
      matrix.drawPixel(x, y, sf[y] & (1 << x));
    }
  }
  matrix.write();
  delay(1000);
  for (int y = 0; y < 8; y++ ) {            // Передача массива
    for (int x = 0; x < 8; x++ ) {
      matrix.drawPixel(x, y, hf[y] & (1 << x));
    }
  }
    matrix.write();
  delay(1000);
}

  
