#include <FS.h>
#include <TFT_eSPI.h>         
#include <TFT_eFEX.h> 
#include "settings.h" 

//串口变量
volatile char a = 0;

// TFT屏幕显示相关对象和变量
TFT_eSPI tft = TFT_eSPI();
TFT_eFEX  fex = TFT_eFEX(&tft); 
bool bgChangeFlag;    // 背景更改显示标识
int bgId = START_BG_NUM;             // 背景序号

#define BANNER_HEIGHT 20      // 横幅高
#define BANNER_WIDTH 320      // 横幅宽
#define HALF_BANNER_WIDTH 160 // 横幅宽
#define BANNER_BG  TFT_BLACK  // 横幅背景色
#define BANNER_FG  TFT_WHITE  // 横幅文字色

void setup()
{
  //初始化串口
  Serial.begin(9600);
  // 初始化tft屏幕
  tft.begin();
  tft.setRotation(0);  // 0 & 2 Portrait. 1 & 3 landscape
  tft.fillScreen(TFT_BLACK);
  if (!SPIFFS.begin()) {
    Serial.println("SPIFFS initialisation failed!");
    while (1) yield(); // Stay here twiddling thumbs waiting
  }
  Serial.println("\r\nInitialisation done.");

  fex.listSPIFFS(); // Lists the files so you can see what is in the SPIFFS
}

void loop(){
  if (Serial.available() > 0) {
    a = Serial.read();
    if (a == '0') {
      fex.drawJpgFile(SPIFFS, "/0.jpg", 0, 0);
    }
    if (a == '1') {
      fex.drawJpgFile(SPIFFS, "/1.jpg", 0, 0);
    }
    if (a == '2') {
      fex.drawJpgFile(SPIFFS, "/2.jpg", 0, 0);
    }
    if (a == '3') {
      fex.drawJpgFile(SPIFFS, "/3.jpg", 0, 0);
    }
    if (a == '4') {
      fex.drawJpgFile(SPIFFS, "/4.jpg", 0, 0);
    }
    if (a == '5') {
      fex.drawJpgFile(SPIFFS, "/5.jpg", 0, 0);
    }
    if (a == '6') {
      fex.drawJpgFile(SPIFFS, "/6.jpg", 0, 0);
    }
    if (a == '7') {
      fex.drawJpgFile(SPIFFS, "/7.jpg", 0, 0);
    }
    if (a == '8') {
      fex.drawJpgFile(SPIFFS, "/8.jpg", 0, 0);
    }
    if (a == '9') {
      fex.drawJpgFile(SPIFFS, "/9.jpg", 0, 0);
    }
    if (a == 'A') {
      fex.drawJpgFile(SPIFFS, "/A.jpg", 0, 0);
    }
    if (a == 'B') {
      fex.drawJpgFile(SPIFFS, "/B.jpg", 0, 0);
    }
    if (a == 'C') {
      fex.drawJpgFile(SPIFFS, "/C.jpg", 0, 0);
    }
    if (a == 'D') {
      fex.drawJpgFile(SPIFFS, "/D.jpg", 0, 0);
    }
        if (a == 'E') {
      fex.drawJpgFile(SPIFFS, "/E.jpg", 0, 0);
    }
        if (a == 'F') {
      fex.drawJpgFile(SPIFFS, "/F.jpg", 0, 0);
    }
        if (a == 'G') {
      fex.drawJpgFile(SPIFFS, "/G.jpg", 0, 0);
    }
        if (a == 'H') {
      fex.drawJpgFile(SPIFFS, "/H.jpg", 0, 0);
    }
        if (a == 'I') {
      fex.drawJpgFile(SPIFFS, "/I.jpg", 0, 0);
    }
        if (a == 'J') {
      fex.drawJpgFile(SPIFFS, "/J.jpg", 0, 0);
    }
    if (a == 'K') {
      fex.drawJpgFile(SPIFFS, "/K.jpg", 0, 0);
    }
    else {}
  }
}
