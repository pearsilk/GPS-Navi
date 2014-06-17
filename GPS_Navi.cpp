//
//  GPS_Navi.cpp
//
//  Created by: Lisa Fukushima
//          on: June 17, 2014
//

#include "GPS_Navi.h"
#include <math.h>


/******************  CONSTRUCTOR  ***********************/

GPS_Navi :: GPS_Navi()
{
        lat1 = 0;
        lon1 = 0;
        lat2 = 0;
        lon2 = 0;
}


/*********************  GETTERS  ************************/

double GPS_Navi :: getLat1()
{
        return lat1;
}

double GPS_Navi :: getLon1()
{
        return lon1;
}
                
double GPS_Navi :: getLat2()
{
        return lat2;
}

double GPS_Navi :: getLon2()
{
        return lon2;
}

double GPS_Navi :: getD_Lat()
{
        return lat2 - lat1;
}

double GPS_Navi :: getD_Lon()
{
        return lon2 - lon1;
}


/*********************  SETTERS  ************************/

void GPS_Navi :: setLat1(double lat1)
{
        this->lat1 = lat1;
}

void GPS_Navi :: setLon1(double lon1)
{
        this->lon1 = lon1;
}

void GPS_Navi :: setLat2(double lat2)
{
        this->lat2 = lat2;
}

void GPS_Navi :: setLon2(double lon2)
{
        this->lon2 = lon2;
}







