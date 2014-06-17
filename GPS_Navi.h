//
//  GPS_Navi.h
//
//  Created by: Lisa Fukushima
//          on: June 17, 2014
//

#ifndef GPS_NAVI
#define GPS_NAVI

#include <math.h>

class GPS_Navi {

        public:
                // constructor
                GPS_Navi();

                // getters
                double getLat1();
                double getLon1();
                
                double getLat2();
                double getLon2();

                double getD_Lat();
                double getD_Lon();

                // setters
                void setLat1(double lat1);
                void setLon1(double lon2);
                
                void setLat2(double lat2);
                void setLon2(double lon2);

                // conversion function(s)
                // decimal degrees to radians
                // radians to decimal degrees
                // nautical miles

                // distance function

                // bearing function

                // deviation function

        private:
                double lat1, lat2, lon1, lon2;
                static const double radius = 21600 / (2 * M_PI);

};

#endif

