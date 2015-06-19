#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    myScribble.setup();
    myScribble.setWidth(10.0);




}

//--------------------------------------------------------------
void ofApp::update(){
    float freq = 5.0;
    float noiseScale = 100.0;
    float g2time = ofGetElapsedTimef();
    myScribble.setPosition(ofNoise(g2time*freq)*noiseScale,ofNoise((g2time*freq) + 22.0)*noiseScale,ofNoise((g2time*freq) + 33.0)*noiseScale );
//    ofLogNotice(ofToString(myScribble.getPosition()));
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();
        ofPushMatrix();
        ofTranslate(myScribble.getPosition());
        myScribble.draw();
        ofPopMatrix();

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
