#include "ofApp.h"
#include<array>;
using namespace std;


class ofApp : public ofBaseApp
{
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void gotMessage(ofMessage msg);
	void dragEvent(ofDragInfo dragInfo);

};


//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);
	ofSetWindowTitle("Sorting Project");
	srand(time(0));

	array <int, 6> arrayList = { 0,0,0,0,0 }; /*5*/

	for (int i = 0; i < 5; i++)
	{
		arrayList[i] = rand() % 100 + 10;/*between 100 and 10*/
		cout << arrayList[i] << endl;
	}
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
	/*ofSetColor(255, 255, 0);
	ofDrawBitmapString("this is the homework!", 100, 100);*/
	ofSetColor(0, 0, 255);
	/*bool isBlue = true;*/
	
	srand(time(0));
	array <int, 5> arrayList = { 0,0,0,0,0 }; /*5*/

	float spacing = ofGetWidth() / 6; 
	float y = ofGetHeight() / 2;




	for (int i = 0; i < 5; i++)
	{
		//  generates 5 random numbers
		arrayList[i] = rand() % 100 + 10; 
		float x = (i + 1) * spacing;

		// radius
		// prints the circles
		ofDrawCircle(x, y, arrayList[i]);

		//white color
		ofSetColor(255,255,255);

		// numbers at the center of the circles
		// draws the circles
		ofDrawBitmapString(ofToString(arrayList[i]), x , y );
		
		// arranges the color the other circles
		ofSetColor(0, 0, 255);

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
	switch (key)
	{
	case 'b':
		// bubble sort
		break;

	case'i':
		// insertion sort
		break;

	case'm':
		// merge sort
		break;

	case'q':
		//quick sort
		break;

	case'r':
		// regenerate new random numbers
		for (int i = 0; i < 5; i++)
		{

		}
		break;

	case's':
		//shuffle using fisher-yates algorithm(bonus)
		break;

	}
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

