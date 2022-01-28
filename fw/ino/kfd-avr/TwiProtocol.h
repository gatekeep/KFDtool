#ifndef TWIPROTOCOL_H_
#define TWIPROTOCOL_H_

#include <Arduino.h>

void twiInit(void);

void twiPause(void);

void twiResume(void);

uint8_t twiSelfTest(void);

uint16_t twiReceiveByte(uint8_t *c);

void twiSendKeySig(void);

void twiSendPhyByte(uint8_t byteToSend);

void Port_1(void);

void TimerCallback(void);
#endif /* TWIPROTOCOL_H_ */
