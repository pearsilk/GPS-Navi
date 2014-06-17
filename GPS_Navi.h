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
                //getters

                //setters

                //conversion function(s)
                //decimal degrees to radians
                //radians to decimal degrees
                //nautical miles

                //distance function

                //bearing function

                //deviation function

        private:
                double lat1, lat2, lon1, lon2, d_lat, d_lon;
                const int radius = 21600/(2 * M_PI);

};

#endif

