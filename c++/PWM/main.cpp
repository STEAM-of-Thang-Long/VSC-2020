/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: viettd
 *
 * Created on December 30, 2019, 10:51 PM
 */

// Includes for PCA9685
#include "PCA9685.h"
#include <iostream>
#include <stdio.h>
//#include <ncurses.h>
#include <thread>         // std::thread
#include <vector>         // std::vector
#include <unistd.h>
#include <string.h>

#define MIN_PULSE_WIDTH 900
#define MAX_PULSE_WIDTH 2100
#define FREQUENCY 50
using namespace std;
int offset = 0;
int chanh = 0;
int chanv = 1;
int pwmwrite(int& angle, PCA9685 pwm, int& channel);
int map (int x, int in_min, int in_max, int out_min, int out_max) {
        return ((x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}
int angleToAnalog(int angle) {
      float pulse_wide;
      int analog_value;
      
      pulse_wide = map(angle,0,180,MIN_PULSE_WIDTH,MAX_PULSE_WIDTH);
      analog_value = int(float(pulse_wide) /  1000000 * FREQUENCY * 4096);
      return (analog_value);
}

int pwmwrite(int& angle, PCA9685 pwm, int& channel) {
    int val = 0;

    if (angle > 180) {
       angle = 179;
    }
    if (angle < 0) {
       angle = 1;
    }
    val = angleToAnalog(angle);
    val += offset;
    pwm.setPWM(channel,0,val);
    //usleep(30);
    cout << "Channel: " << channel << "\tSet to angle: " << angle << "\tVal: " << val << endl;
    return(0);
}
int main () {

        int homeh = 90;
	int homev = 90;
	PCA9685 pwm;
	pwm.init(1,0x40);
	usleep(1000 * 100);
	cout << "Setting frequency: " << FREQUENCY << endl;
	pwm.setPWMFreq (FREQUENCY);
	usleep(1000 * 1000);
        cout << "Returning to HOME position." << endl;
	pwmwrite(homeh, pwm, chanh);
        pwmwrite(homev, pwm, chanv);
	return 0;
} 