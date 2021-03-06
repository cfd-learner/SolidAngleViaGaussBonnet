//Constants.h
#include <string>

std::string knot_filename = "example_trefoil"; //assumed input filename format of "XXXXX.stl"

//OPTION - do you want the geometry of the input file to be exactly preserved, or can it be scaled to fit the box better
//1 to scale input file preserving the aspect ratio, 0 otherwise
#define PRESERVE_RATIOS 1  

// OPTION - what grid values do you want
//Grid points
const double h = 1;            //grid spacing
const int initialNx = 100;   //No. points in x,y and z
const int initialNy = 100;
const int initialNz = 100;

// OPTION - how big should the knot be in the box, do you want it tilted or displaced?
//Size boundaries of knot (now autoscaled)
const double xmax = 6*initialNx*h/10.0;
const double ymax = 6*initialNy*h/10.0;
const double zmax = 6*initialNz*h/10.0;

