/*
 * This is a sample configuration file for the "mqtt_esp8266_rgb" light.
 *
 * Change the settings below and save the file as "config.h"
 * You can then upload the code using the Arduino IDE.
 */

// Pins
#define CONFIG_PIN_RED 15
#define CONFIG_PIN_GREEN 13
#define CONFIG_PIN_BLUE 12

// WiFi
#define CONFIG_WIFI_SSID "[REDACTED]"
#define CONFIG_WIFI_PASS "[REDACTED]"

#define CONFIG_MQTT_HOST "[REDACTED]"
#define CONFIG_MQTT_USER "[REDACTED]"
#define CONFIG_MQTT_PASS "[REDACTED]"

#define CONFIG_MQTT_CLIENT_ID "TVCABINETLED" // Must be unique on the MQTT network

// MQTT Topics
#define CONFIG_MQTT_TOPIC_STATE "led_strip/tvcabinet"
#define CONFIG_MQTT_TOPIC_SET "led_strip/tvcabinet/set"

#define CONFIG_MQTT_PAYLOAD_ON "ON"
#define CONFIG_MQTT_PAYLOAD_OFF "OFF"

// Miscellaneous
// Default number of flashes if no value was given
#define CONFIG_DEFAULT_FLASH_LENGTH 2
// Number of seconds for one transition in colorfade mode
#define CONFIG_COLORFADE_TIME_SLOW 10
#define CONFIG_COLORFADE_TIME_FAST 3

// Reverse the LED logic
// false: 0 (off) - 255 (bright)
// true: 255 (off) - 0 (bright)
#define CONFIG_INVERT_LED_LOGIC false

// Enables Serial and print statements
#define CONFIG_DEBUG true
