#ifndef BASS_LIB
#define BASS_LIB

#if (ARDUINO>=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class BASSLib{
  public:
    //constructor
    BASSLib(bool displayMsg=false);
    
    //methods
    long getRandomNumber();
	float CompFilter(float x);
	float setCF_CE(float ce);
	float getCF_CE();
	
  private:
	float CF_CE=0;
};


#endif
