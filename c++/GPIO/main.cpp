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

#include "GPIO_Layer.h"
#include <iostream>
using namespace std;
int main(void)
{
    GPIO_Layer::getInstance()->GPIO_Init();
    while(1){
       GPIO_Layer::getInstance()->GPIO_Blink_All();
       cout<<"LED_ON"<<endl;
       if(digitalRead(13)==1){
           cout<<"LED_OFF"<<endl;
           GPIO_Layer::getInstance()->GPIO_Off_All();
           break;
        }
    }
    return 0;
}

