#include "BASSLib.h"

BASSLib::BASSLib(bool displayMsg){
  if(displayMsg){
    
  }
}

long BASSLib::getRandomNumber(){
  unsigned long sp = random(5, 100);
  return sp;
}

float BASSLib::CompFilter(float x){
//filter co-efficients
float Ca=CF_CE; //value between 0 & 1
float Cb=(1-Ca);   
  static float pre_x=1500, out=0;
  out = (Ca * pre_x) + (Cb * x);
  pre_x = out;
  return out;
}

float BASSLib::setCF_CE(float ce){
	CF_CE = ce;
}

float BASSLib::getCF_CE(){
	return CF_CE;
}