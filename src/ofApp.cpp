#include "ofApp.h"

//--------------------------------------------------------------




void ofApp::setup(){


    colorArray.push_back(ofFloatColor(0.9f,0.5f,0.2f,0.2f));
    colorArray.push_back(ofFloatColor(0.5f,0.3f,0.8f,0.2f));
    colorArray.push_back(ofFloatColor(0.6f,0.7f,0.8f,0.2f));
    colorArray.push_back(ofFloatColor::green);
    colorArray.push_back(ofFloatColor::blue);
    colorArray.push_back(ofFloatColor::fuchsia);
    colorArray.push_back(ofFloatColor::gainsboro);
    colorArray.push_back(ofFloatColor::gold);

    ofEnableAlphaBlending();
    ofEnableDepthTest();


    for(int i=0; i <1000 ; i++){

        scribbleArray.push_back(new scribble());

    }

    for(int i=0; i< scribbleArray.size(); i++){

        scribbleArray[i]->setup(i);
        int colorIndex = floor(ofRandomf() * colorArray.size());

//        colorArray[colorIndex].a = 0.1f;
        scribbleArray[i]->setColor(colorArray[colorIndex]);
        scribbleArray[i]->setAlpha(ofRandom(0.0f,0.2f));
        scribbleArray[i]->setWidth(ofRandom(1.0f,3.0f));
    }


}

//--------------------------------------------------------------
void ofApp::update(){
    float freq = 5.0;
    float noiseScale = 100.0;
    float g2time = ofGetElapsedTimef();
//    myScribble.setPosition(ofNoise(g2time*freq)*noiseScale,ofNoise((g2time*freq) + 22.0)*noiseScale,ofNoise((g2time*freq) + 33.0)*noiseScale );
//    ofLogNotice(ofToString(myScribble.getPosition()));
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(1.0f,1.0f,1.0f,0.2f);
        cam.begin();
        for(int i=0; i< scribbleArray.size(); i++){

            scribbleArray[i]->draw();
        }
        cam.end();

}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

void ofApp::exit(){
    for(int i=0; i< scribbleArray.size(); i++){


        scribbleArray[i]->~scribble();
//        ofLogNotice("deleting object");
    }
}
