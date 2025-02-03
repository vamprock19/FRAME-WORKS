#include "ofApp.h"
#include<array>;
using namespace std;



void ofApp::setup()
{
	ofSetFrameRate(60);
	ofSetWindowTitle("Sorting Project");
	randomNumbers();

}

void ofApp::randomNumbers()
{
	
	for (int i = 0; i < 5; i++)
	{
		arrayList[i] = rand() % 91 + 10 ;/*between 100 and 10*/
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
	

	ofSetColor(0, 0, 255);
	float space = ofGetWidth() / 6; 
	float y = ofGetHeight() / 2;

	
	for (int i = 0; i < 5; i++)
	{
		
		float x = (i + 1) * space;


		if (arrayList[i] > 0)
		{
			// radius
		// prints the circles
			ofDrawCircle(x, y, arrayList[i]);
		}

		//white color
		ofSetColor(255,255,0);

		// numbers at the center of the circles
		// draws the circles
		ofDrawBitmapString(ofToString(arrayList[i]), x , y );
		
		// arranges the color the other circles
		ofSetColor(0, 0, 255);

	}
		
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	switch (key)
	{
	case 'b':
		// bubble sort
		bubbleSort();
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
		randomNumbers();
		break;

	case's':
		//shuffle using fisher-yates algorithm(bonus)
		break;

	}
}
void ofApp::bubbleSort()
{
	int n = arrayList.size(); // it gets the size of the array

	for (int i = 0; i < n - 1; i++) 
	{
		for (int k = 0; k < n - i - 1; k++)
		{
			if (arrayList[k] > arrayList[k + 1]) 
			{
				// mnor a mayor
				swap(arrayList[k], arrayList[k + 1]); 
			}
		}
	}
}
void ofApp::insertionSort()
{

}
void ofApp::mergeSort()
{

}
void ofApp::quickSort()
{

}
void ofApp::shuffle()
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

