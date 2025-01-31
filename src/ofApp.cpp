#include "ofApp.h"
using namespace std;

//--------------------------------------------------------------
void ofApp::setup()
{
	cout << "this is the homework" << endl;
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofSetColor(255, 255, 0);
	ofDrawBitmapString("this is the homework!", 100, 100);
	ofSetColor(0, 0, 255);
	bool isBlue = true;



	

	for (int y = 200; y <= 400; y += 100)
	{
		for (int x = 100; x <= 500; x += 100)
		{
			if (isBlue)
			{
				ofSetColor(0, 255, 0);
			}
			else
			{
				ofSetColor(0, 0, 255);
			}
			isBlue = !isBlue;
			
			ofDrawCircle(x, y, 50);
		}
	}
	
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
