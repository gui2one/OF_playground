#ifndef SCRIBBLE_H_INCLUDED
#define SCRIBBLE_H_INCLUDED

#include "ofMain.h"
class scribble : public ofNode{

public:
    scribble();
    ~scribble();

    void setup();
    void draw();

    void setWidth(float _width);
    //void setPosition(ofVec3f _pos);



    float width;
    ofPolyline line;

    ofPath path;
    float x = 2.0f;
};

#endif // SCRIBBLE_H_INCLUDED
