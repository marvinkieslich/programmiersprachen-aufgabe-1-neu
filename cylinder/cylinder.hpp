#define _USE_MATH_DEFINES
#include <cmath>

double cylindervolume(double radius, double height) {


    double volume = M_PI * radius * radius * height;

    return volume;


}

double cylindersurface(double radius, double height){

    double surface = 2 * M_PI * radius * (radius + height);

    return surface;

}