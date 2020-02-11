/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GPIO_Layer.cpp
 * Author: viettd
 * 
 * Created on February 11, 2020, 10:12 PM
 */

#include "GPIO_Layer.h"

GPIO_Layer::GPIO_Layer() {
}
GPIO_Layer::GPIO_Layer(const GPIO_Layer& orig) {
}
GPIO_Layer::~GPIO_Layer() {
}
GPIO_Layer* GPIO_Layer::getInstance(){
    if(s_instance == 0){
        s_instance = new GPIO_Layer();
    }
    return s_instance;
}
void GPIO_Layer::GPIO_Init(){
    wiringPiSetupGpio();
    pinMode(4, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(22, OUTPUT);
    pinMode(23, OUTPUT);
    pinMode(24, OUTPUT);
    pinMode(25, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(12, INPUT);
    pinMode(13, INPUT);
    pinMode(16, INPUT);
    pinMode(19, INPUT);
    pinMode(20, INPUT);
    pinMode(21, INPUT);
    pinMode(26, INPUT);
}
void GPIO_Layer::GPIO_Blink_All(){
    digitalWrite(4, LOW);
    usleep(100000);
    digitalWrite(9, LOW);
    usleep(100000);
    digitalWrite(10, LOW);
    usleep(100000);
    digitalWrite(17, LOW);
    usleep(100000);
    digitalWrite(22, LOW);
    usleep(100000);
    digitalWrite(23, LOW);
    usleep(100000);
    digitalWrite(24, LOW);
    usleep(100000);
    digitalWrite(25, LOW);
    usleep(100000);
    digitalWrite(27, LOW);
    usleep(100000);
    digitalWrite(4, HIGH);
    usleep(100000);
    digitalWrite(9, HIGH);
    usleep(100000);
    digitalWrite(10, HIGH);
    usleep(100000);
    digitalWrite(17, HIGH);
    usleep(100000);
    digitalWrite(22, HIGH);
    usleep(100000);
    digitalWrite(23, HIGH);
    usleep(100000);
    digitalWrite(24, HIGH);
    usleep(100000);
    digitalWrite(25, HIGH);
    usleep(100000);  
    digitalWrite(27, HIGH);
    usleep(100000);
}
void GPIO_Layer::GPIO_Off_All(){
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH); 
    digitalWrite(27, HIGH);
}
GPIO_Layer * GPIO_Layer::s_instance=0;
