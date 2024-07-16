#ifndef _BEEPER_H_
#define _BEEPER_H_

#pragma startup init 0 

#include <alsa/asoundlib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_LEN 8000
#define DEF_FREQ 450
#define DEF_DUR 0.1

void __attribute__ ((constructor)) premain();
float* genTone(float freq);
int openDevice();
void closeDevice();
void writeBuf(float* buf, int nbFrames, int nbTimes);
void playFreq(float freq, float dur);

#endif
