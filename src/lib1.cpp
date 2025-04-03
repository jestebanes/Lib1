/* 
 * File: Time.cpp
 * RTC clock functions
 * 
 * (c) Javier Esteban Escaño - Pariver 2010-2017
 */
#include "lib1.hpp"

Lib1::Lib1(uint8_t pin){ //Constructor
	pinOut = pin;
}

void Lib1::init(){
	pinMode(pinOut, OUTPUT);
}

void Lib1::blink(int rep){
	time = millis();
	this->rep = rep;
	digitalWrite(pinOut, HIGH);
}

void Lib1::check(){
	if(((long)millis()-time > period)&&(rep>0)){
		if(state){
			rep--;
			if(rep<=0){
				digitalWrite(pinOut, LOW);
			}else{
				digitalWrite(pinOut, HIGH);
			}
		}else{
			digitalWrite(pinOut, LOW);
		}
		state=!state;
		time = millis();
	}
}
		
void Lib1::setPeriod(int period){
	this->period = period;
}

int Lib1::getPeriod(){
	return period;
}
