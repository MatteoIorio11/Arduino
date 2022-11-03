#include "Button.h"
#include <Arduino.h>

Button::Button(){
} 
  
void Button::updateSyncTime(long time){
	lastTimeSync = time;
}

long Button::getLastSyncTime(){
	return lastTimeSync;
}
