#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetLineWidth(3);
	ofNoFill();
	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);

	this->noise_source = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	float tmp_noise_source = this->noise_source;
	float noise_step = 0.1;

	for (int i = 0; i < 3; i++) {
		if (i == 0) { ofSetColor(255, 0, 0); }
		if (i == 1) { ofSetColor(0, 255, 0); }
		if (i == 2) { ofSetColor(0, 0, 255); }

		ofBeginShape();
		for (int x = -ofGetWidth() / 2; x < ofGetWidth(); x += 15) {
			int y = ofMap(ofNoise(tmp_noise_source), 0, 1, -ofGetHeight() / 2, ofGetHeight() / 2);

			ofVertex(x, y);

			tmp_noise_source += noise_step;
		}
		ofEndShape();
	}

	this->cam.end();

	this->noise_source += noise_step;
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
