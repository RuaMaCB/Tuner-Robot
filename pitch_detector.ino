
/*
 * Arduino 音高检测器（仅检测频率，无舵机控制）
 * - 使用压电传感器连接 A0
 * - 在串口显示检测到的频率（Hz）
 */

const int piezoPin = A0;        // 压电传感器连接 A0
const int sampleWindow = 50;    // 采样时间窗口（毫秒）
unsigned int sample;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float frequency = getFrequency();

  if (frequency > 50) {
    Serial.print("当前频率: ");
    Serial.print(frequency);
    Serial.println(" Hz");
  } else {
    Serial.println("无效信号");
  }

  delay(300);
}

// 零交叉法简易频率估计
float getFrequency() {
  unsigned long start = millis();
  int threshold = 512;
  bool lastAbove = false;
  int crossings = 0;

  while (millis() - start < sampleWindow) {
    sample = analogRead(piezoPin);
    bool above = sample > threshold;
    if (above != lastAbove) {
      crossings++;
      lastAbove = above;
    }
  }

  float frequency = (crossings / 2.0) * (1000.0 / sampleWindow);
  return frequency;
}
