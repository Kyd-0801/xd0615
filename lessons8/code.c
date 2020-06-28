/*
 Input Pullup Serial

 This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a
 digital input on pin 2 and prints the results to the serial monitor.
 
 OPEN THE SERIAL MONITOR TO SEE THE OUTPUT FROM THE INPUT PIN >>

 The circuit:
 * Momentary switch attached from pin 2 to ground
 * Built-in LED on pin 13

 Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
 20K-ohm resistor is pulled to 5V. This configuration causes the input to
 read HIGH when the switch is open, and LOW when it is closed.

 created 14 March 2012
 by Scott Fitzgerald

 http://www.arduino.cc/en/Tutorial/InputPullupSerial

 This example code is in the public domain

 */

void setup() {
  //启动串行连接
  Serial.begin(9600);
  //将pin2配置为输入并启用内部上拉电阻器
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  //将按钮值读入变量
  int sensorVal = digitalRead(2);
  //打印出按钮的值
  Serial.println(sensorVal);

  // 设定按钮的拉伸 
  // 逻辑颠倒，当它打开的时候会变高，当它被按压的时候会变低。当按钮按下时打开第13个插口，不按下时关闭 
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
