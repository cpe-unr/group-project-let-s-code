final: driver.cpp wav.o Iprocessor.o noiseGate.o normalize.o echo.o user.o
	g++ -std=c++11 driver.cpp wav.o Iprocessor.o noiseGate.o normalize.o echo.o user.o -o final

#audio processors
wav.o: wav.cpp wav.h
	g++ -c -std=c++11 wav.cpp

Iprocessor.o: IProcessor.h IProcessor.cpp
	g++ -c -std=c++11 IProcessor.cpp

noiseGate.o: noiseGate.h noiseGate.cpp
	g++ -c -std=c++11 noiseGate.cpp

normalize.o: normalize.h normalize.cpp
	g++ -c -std=c++11 normalize.cpp

echo.o: echo.h echo.cpp
	g++ -c -std=c++11 echo.cpp

user.o: user.h user.cpp
	g++ -c -std=c++11 user.cpp

#other
clean:
	rm *.o final