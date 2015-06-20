
#include "scribble.h"
//#include "ofMain.h"

scribble::scribble(){
//    ofLog() << "scribble OBJECT created ";
    //ofEnableAlphaBlending();


}


scribble::~scribble(){
//    ofLog() << "scribble OBJECT DELETED ";

}


void scribble::setup(int _seed){

    seed = _seed;
    color = ofColor(1.0f,0.5f,0.5f,1.0f);

    width = 5.0f;
    float mySize = 1000.0f;
    glLineWidth(width);

    float stepSize = 0.1f;


    float offsetx = ofRandom(0.0f,100000.0f);
    float offsety = ofRandom(0.0f,100000.0f);
    float offsetz = ofRandom(0.0f,100000.0f);
    for(int i=1; i < 100; i++){


        float noiseX = (ofNoise(float((i+ offsetx)* stepSize) ) *2.0f-1.0f)*mySize;
        float noiseY = (ofNoise(float((i+101.0f+ offsety)* stepSize)   )*2.0f-1.0f)*mySize;
        float noiseZ = (ofNoise(float((i+21.0f+ offsetz)* stepSize)   )*2.0f-1.0f)*mySize;
//        float noiseY = (ofNoise(float((i+33)*stepSize))*2 - 1)*mySize;
//        float noiseZ = (ofNoise(float((i+22)*stepSize + offset))*2 - 1)*mySize;
        ofPoint pt = ofPoint(noiseX,noiseY,noiseZ);
        line.addVertex(pt);
    }


//    ofLog()<< "---> " << this;
}

void scribble::setWidth(float _width){

    width = _width;
}

void scribble::setColor(ofFloatColor _color){
    color = _color;
}

void scribble::setAlpha(float _alpha){
    color.a = _alpha;
}


//void scribble::setPosition(ofVec3f _pos){
//
//
//}
void scribble::draw(){


    glColor4f(color.r,color.g,color.b,color.a);
    glLineWidth(width);
//        glPushAttrib(GL_COLOR_BUFFER_BIT | GL_ENABLE_BIT);
//
//        glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
//        glEnable(GL_LINE_SMOOTH);
//
//        glEnable(GL_BLEND);
//        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    line.draw();


}
