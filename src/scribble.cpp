
#include "scribble.h"
#include "ofMain.h"

scribble::scribble(){
    ofLog() << "scribble OBJECT created ";
    //ofEnableAlphaBlending();


}


scribble::~scribble(){
    ofLog() << "scribble OBJECT DELETED ";

}


void scribble::setup(){

    width = 1.0;
    float mySize = 1000.0f;
    glLineWidth(width);

    float stepSize = 0.2;


    for(int i=0; i < 100; i++){


        float noiseX = (ofNoise(float(i)*stepSize)*2 - 1)*mySize;
        float noiseY = (ofNoise(float(i+22)*stepSize)*2 - 1)*mySize;
        float noiseZ = (ofNoise(float(i+33)*stepSize)*2 - 1)*mySize;
        ofPoint pt = ofPoint(noiseX,noiseY,noiseZ);
        line.addVertex(pt);
    }


    ofLog()<< "---> " << this;
}

void scribble::setWidth(float _width){

    width = _width;
}


//void scribble::setPosition(ofVec3f _pos){
//
//
//}
void scribble::draw(){
    glColor4f(0.0f,1.0f,0.5f,0.2f);
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
