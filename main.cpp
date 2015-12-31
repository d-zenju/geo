//
//  main.cpp
//  geo
//
//  Created by ZENJU Daisuke on 2015/12/24.
//  Copyright © 2015年 ZENJU Daisuke. All rights reserved.
//

#include <iostream>
#include "geo.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    double ownLat = 38.13877338;
    double ownLon = 140.89872429;
    double ownHgt = 44.512;
    
    double otherLat =  38.14227288;
    double otherLon =  140.93265738;
    double otherHgt =  45.664;
    
    double *own = geo::blh2ecef(&ownLat, &ownLon, &ownHgt);
    double *other = geo::blh2ecef(&otherLat, &otherLon, &otherHgt);
    
    double enu[3];
    geo::ecef2enu(own, other, enu);
    
    printf("%f %f %f\n", enu[0], enu[1], enu[2]);
    
    printf("angle: %f\n", geo::angle(enu[0], enu[1]));
    printf("dist: %f \n", geo::distance(enu[0], enu[1]));
    
    return 0;
}
