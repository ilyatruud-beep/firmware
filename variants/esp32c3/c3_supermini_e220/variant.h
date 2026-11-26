#pragma once

#define HAS_SCREEN 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define LED_PIN 8
#define LED_STATE_ON 0

#define BUTTON_PIN 9
#define BUTTON_NEED_PULLUP

#define USE_LLCC68

#define LORA_SCK 4
#define LORA_MISO 5
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 3
#define LORA_DIO1 10

#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN 20
#define SX126X_TXEN 21

#define SX126X_MAX_POWER 22
