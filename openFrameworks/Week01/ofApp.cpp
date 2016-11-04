#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    float xpos= 400;
    float ypos= 600;
    float color=ofRandom(0, 255);
    float size=20;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    ofSetColor(0,10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    
    
    
    xpos+=5;
    ypos+=5;
    
    
    if(ypos>700){
        
       
        ypos= -ypos;
       
        
    }
    
    
    else {
        
        ypos=ypos;
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    
    
    
    
    ofSetColor(color, 29, 206);
    ofSetCircleResolution(50);
    ofDrawCircle(xpos,ypos,size);
    
    ofSetColor(color, 100, 206);
    
    
 
    if(ofGetMousePressed()==true){
        color=255;
        size=10;
    }
    
    
    else {
        
        color=50;
        size=100;
    
    }
    
    
   
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int k){
    
    ypos= -ypos;
    xpos= -xpos;

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
