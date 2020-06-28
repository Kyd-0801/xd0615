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
  //������������
  Serial.begin(9600);
  //��pin2����Ϊ���벢�����ڲ�����������
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  //����ťֵ�������
  int sensorVal = digitalRead(2);
  //��ӡ����ť��ֵ
  Serial.println(sensorVal);

  // �趨��ť������ 
  // �߼��ߵ��������򿪵�ʱ����ߣ���������ѹ��ʱ����͡�����ť����ʱ�򿪵�13����ڣ�������ʱ�ر� 
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
