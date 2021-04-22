final: driver.cpp wav.o processor.o noiseGate.o limiter.o echo.o
	g++ -std=c++11 driver.cpp wav.o processor.o noiseGate.o limiter.o echo.o -o final

#audio processors
wav.o: wav.cpp wav.h
	g++ -c -std=c++11 wav.cpp

processor.o: Processor.h Processor.cpp
	g++ -c -std=c++11 Processor.cpp

noiseGate.o: noiseGate.h noiseGate.cpp
	g++ -c -std=c++11 noiseGate.cpp

limiter.o: limiter.h limiter.cpp
	g++ -c -std=c++11 limiter.cpp

echo.o: echo.h echo.cpp
	g++ -c -std=c++11 echo.cpp

#other
clean:
	rm *.o final