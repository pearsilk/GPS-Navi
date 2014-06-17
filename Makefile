#
# Makefile for GPS_Navi
#

test: test.cpp GPS_Navi.h GPS_Navi.cpp
	clang++ -Wall -Wextra -O3 GPS_Navi.cpp test.cpp -o test

clean:
	rm -f ./test

