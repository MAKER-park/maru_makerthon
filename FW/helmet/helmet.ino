#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        13 // On Trinket or Gemma, suggest changing this to 1
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 24 // Popular NeoPixel ring size

const char* ssid = "maru";
const char* password = "123456789";

const String url = "http://cloud.park-cloud.co19.kr/maru";
unsigned long lastTime = 0;
unsigned long timerDelay = 5000;

String rent_state = "0"; // 대여 상
String wear_state = "0"; // 착용 여부
String bucklebuckle = "0";// 버클 반납 여부
// the setup routine runs once when you press reset:

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);

#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    Loading_LED();
    pixels.clear(); // Set all pixel colors to 'off'
  }

  Serial.print("OK! IP=");
  blink_LED();
  Serial.println(WiFi.localIP());


  // make the pushbutton's pin an input:
  pinMode(4, INPUT); // -- D 우회전
  pinMode(16, INPUT);// -- C 좌회전
  pinMode(17, INPUT);// -- B 비상등
}

// the loop routine runs over and over again forever:
void loop() {
  pixels.clear(); // Set all pixel colors to 'off'
  //read rent status....
  if ((millis() - lastTime) > timerDelay) {//check status 5sec
    check_status(url + "/view.php");
    lastTime = millis(); //time init!
  }

  if (rent_state.equals("1")) {
    //대여 상태!
    Serial.println("rent!");
    Serial.println("ADC : " + String(analogRead(36)));
    delay(500);
    if (analogRead(36) > 80) {
      //helmat wear true
      //send url
      Serial.println(String(digitalRead(4)) + "\t" + String(digitalRead(16)) + "\t" + String(digitalRead(17)));
      delay(100);
      if (digitalRead(4) == 1) {
        //D 우회전
        led_right();
      } else if (digitalRead(16) == 1) {
        //C 좌회전
        led_left();
      } else if (digitalRead(17) == 1) {
        //B 비상등
        led_emg();
      }
    }
    else {
      //helmat no wear!
      //warring !
      //send url
      led_warring();
    }

  } else {
    //반납 된 상태
    //    Serial.println("return!");
    //    delay(1000);
  }
  // read the input pin:
  // print out the state of the button:

}
