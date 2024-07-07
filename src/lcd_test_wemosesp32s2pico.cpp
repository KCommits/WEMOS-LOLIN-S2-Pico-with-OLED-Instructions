#include <Arduino.h>
#include <Wire.h>
#include <WiFi.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

#define OLED_RESET    18
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#ifdef INCLUDE_CREDENTIALS
#include "credentials.h" // Place credentials.h in include folder, see include/READEME
#else
const char* ssid = "your_default_ssid";
const char* password = "your_default_password";
#endif

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  while (!Serial); // Wait for Serial to be ready (useful for some boards)

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Initialize the I2C bus with custom SDA and SCL pins
  Wire.begin(8, 9); // SDA is pin 8, SCL is pin 9
  
  // Initialize the display
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  
  display.clearDisplay();
  
  // Set text size and color
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // Set cursor position for "Hello World"
  display.setCursor(0, 0);
  
  // Display "Hello World"
  display.println(F("Hello World!"));
  
  // Set cursor position for IP address
  display.setCursor(0, 10);

  // Display the IP address
  display.print("IP: ");
  display.println(WiFi.localIP());

  display.display(); // Update the display with the text
}

void loop() {
  // Nothing to do here
}
