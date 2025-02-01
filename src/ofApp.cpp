#include "ofApp.h"
using namespace std;

//--------------------------------------------------------------
void ofApp::setup()
{
	srand(time(0));

	
	

	for (int i = 0; i < 1; i++)
	{
		array <int, 6> arrayList = { 0,0,0,0,0}; /*5*/

		arrayList[0] = rand() % 10 + 1;
		arrayList[1] = rand() % 10 + 1;
		arrayList[2] = rand() % 10 + 1; 
		arrayList[3] = rand() % 10 + 1;
		arrayList[4] = rand() % 10 + 1;

		cout << arrayList[0] << endl;
		cout << arrayList[1] << endl;
		cout << arrayList[2] << endl;
		cout << arrayList[3] << endl;
		cout << arrayList[5] << endl;

	}
	
	

	
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

	srand(time(0));


	for (int y = 200; y <= 200; y += 100)
	{
		for()
		array <int, 6> arrayList = { 0,0,0,0,0 }; /*5*/

		arrayList[0] = rand() % 10 + 1;
		arrayList[1] = rand() % 10 + 1;
		arrayList[2] = rand() % 10 + 1;
		arrayList[3] = rand() % 10 + 1;
		arrayList[4] = rand() % 10 + 1;
		
		ofSetColor(255, 255, 255);
		/*value x, value y, radius*/

			ofDrawCircle(20, 20, 25); // radius
		
	}

	

	/*for (int y = 200; y <= 400; y += 100)
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
	}*/
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{ 

}
