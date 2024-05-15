import processing.serial.*;
Serial myPort; 
PImage img; // Declare a variable of type PImage

void setup() {
  printArray(Serial.list());
  String arduinoDuankou=Serial.list()[1];//COM3 port
  myPort=new Serial(this,arduinoDuankou,9600);
  size(1400,765);
  // Make a new instance of a PImage by loading an image file
  img = loadImage("BackGround.jpeg");
}

void draw() {
  background(255);
  // Draw the image to the screen at coordinate (0,0)
  image(img,0,0,1400,765);
  if (mousePressed == true) {
    //第一行
    if(mouseY>75&&mouseY<250){
      if(mouseX>45&&mouseX<220){
        myPort.write('0');
      };
      if(mouseX>235&&mouseX<410){
        myPort.write('1');
      };
      if(mouseX>425&&mouseX<600){
        myPort.write('2');
      };
      if(mouseX>615&&mouseX<790){
        myPort.write('3');
      };
      if(mouseX>805&&mouseX<980){
        myPort.write('4');
      };
      if(mouseX>1095&&mouseX<1170){
        myPort.write('5');
      };
      if(mouseX>1285&&mouseX<1360){
        myPort.write('6');
      };
    };
    //第二行
    if(mouseY>300&&mouseY<480){
      if(mouseX>45&&mouseX<220){
        myPort.write('7');
      };
      if(mouseX>235&&mouseX<410){
        myPort.write('8');
      };
      if(mouseX>425&&mouseX<600){
        myPort.write('9');
      };
      if(mouseX>615&&mouseX<790){
        myPort.write('A');
      };
      if(mouseX>805&&mouseX<980){
        myPort.write('B');
      };
      if(mouseX>1095&&mouseX<1170){
        myPort.write('C');
      };
      if(mouseX>1285&&mouseX<1360){
        myPort.write('D');
      };
    };
        //第三行
    if(mouseY>550&&mouseY<730){
      if(mouseX>45&&mouseX<220){
        myPort.write('E');
      };
      if(mouseX>235&&mouseX<410){
        myPort.write('F');
      };
      if(mouseX>425&&mouseX<600){
        myPort.write('G');
      };
      if(mouseX>615&&mouseX<790){
        myPort.write('H');
      };
      if(mouseX>805&&mouseX<980){
        myPort.write('I');
      };
      if(mouseX>1095&&mouseX<1170){
        myPort.write('J');
      };
      if(mouseX>1285&&mouseX<1360){
        myPort.write('K');
      };
    };
  }
}
