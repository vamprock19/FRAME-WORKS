#include "ofApp.h"
#include<array>;
using namespace std;

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
	bool isBlue = true;
	int counter = 200;
	srand(time(0));
	array <int, 5> arrayList = { 0,0,0,0,0 }; /*5*/


	for (int i = 0; i < 5; i++)
	{
			arrayList[i] = rand() % 100 + 10; //  generates 5 random numbers
			ofDrawCircle(200, counter, arrayList[i]);// radius
			counter += 120;
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
		// generate new random numbers
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

