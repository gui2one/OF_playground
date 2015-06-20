#ifndef SCRIBBLE_H_INCLUDED
#define SCRIBBLE_H_INCLUDED

#include "ofMain.h"
class scribble : public ofNode{

public:
    scribble();
    ~scribble();

    void setup(int _seed);
    void draw();

    void setWidth(float _width);
    void setColor(ofFloatColor _color);
    void setAlpha(float _alpha);

    ofFloatColor color;

    int seed;
    float width;
    ofPolyline line;
    ofPath path;

};

#endif // SCRIBBLE_H_INCLUDED
