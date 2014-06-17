
#include "GPS_Navi.h"
#include <iostream>
#include <math.h>
#include <cassert>

void testConstructor();
void testGetters();
void testSetters();

int main()
{
        testConstructor();
        testGetters();
        testSetters();

        std::cout << "Tests completed." << std::endl;

        return 0;
}

/************************************************************/
/*                       TEST FUNCTIONS                     */
/************************************************************/

void testConstructor()
{
        GPS_Navi g;

        assert(g.getLat1() == 0);
        assert(g.getLon1() == 0);
        assert(g.getLat2() == 0);
        assert(g.getLon2() == 0);
}

void testGetters()
{
        GPS_Navi g;

        assert(g.getLat1()  == 0);
        assert(g.getLon1()  == 0);
        assert(g.getLat2()  == 0);
        assert(g.getLon2()  == 0);
        assert(g.getD_Lat() == 0);
        assert(g.getD_Lon() == 0);
}

void testSetters()
{
        GPS_Navi g;

        g.setLat1(M_PI);
        assert(g.getLat1() == M_PI);

        g.setLon1(-M_PI);
        assert(g.getLon1() == -M_PI);

        g.setLat2(-M_LN10);
        assert(g.getLat2() == -M_LN10);

        g.setLon2(M_LN10);
        assert(g.getLon2() == M_LN10);

        assert(g.getD_Lat() == -M_LN10 - M_PI);
        assert(g.getD_Lon() ==  M_LN10 + M_PI);
}






