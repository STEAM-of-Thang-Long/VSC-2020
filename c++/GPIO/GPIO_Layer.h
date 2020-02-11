/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GPIO_Layer.h
 * Author: viettd
 *
 * Created on February 11, 2020, 10:12 PM
 */

#ifndef GPIO_LAYER_H
#define GPIO_LAYER_H
#include <wiringPi.h>
#include <unistd.h>
class GPIO_Layer {
public:
    GPIO_Layer();
    GPIO_Layer(const GPIO_Layer& orig);
    static GPIO_Layer * getInstance();
    virtual ~GPIO_Layer();
    void GPIO_Init();
    void GPIO_Blink_All();
    void GPIO_Off_All();
private:
    static GPIO_Layer * s_instance;
};

#endif /* GPIO_LAYER_H */

