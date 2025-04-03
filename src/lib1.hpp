/* 
 * File: Time.hpp
 * Class Time driver
 * Like a RTC timer
 * 
 * (c) Javier Esteban Escaño - Pariver 2010-2017
 */
#ifndef LIB1_HPP
#define LIB1_HPP

#include "Arduino.h"

class Lib1{
  private:
    int period = 500; //Default period 
    int rep = 1; 
	long time = 0;
	uint8_t pinOut = 0;
	bool state = false;
    
  public:
    Lib1(uint8_t pin);
    void blink(int rep);
	void init();
	void check();
    void setPeriod(int period);
	int getPeriod();
};
    
#endif
