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
		insertionSort();
		break;

	case'm':
		// merge sort
		mergeSort();
		break;

	case'q':
		//quick sort
		quickSort();
		break;

	case'r':
		// regenerate new random numbers
		randomNumbers();
		break;

	case's':
		//shuffle using fisher-yates algorithm(bonus)
		shuffle();
		break;

	}
}
void ofApp::bubbleSort()
{
	int bubble = arrayList.size(); // it gets the size of the array

	for (int i = 0; i < bubble - 1; i++) 
	{
		for (int k = 0; k < bubble - i - 1; k++)
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
	int insertion = arrayList.size();
	for (int i = 0; i < insertion; i++)
	{
		int sort = arrayList[i];

		int number = i - 1;
		while (number >= 0 && arrayList[number] > sort)
		{
			arrayList[number + 1] = arrayList[number];

			number -= 1;
		}

		arrayList[number + 1];
	}
}
void ofApp::mergeSort()
{
	/*I used the help of AI in this section because mergeSorting elements
	was difficult also I discovered 2 new methods I can use in vector classes*/
	int number = arrayList.size();

	if (number <= 1)
	{
		return;
	}

	// 2 halfs

	
	int half = number / 2;

	

	// Merge the two halves
	int i = 0;
	int j = 0;
	int k = 0;
	
	vector<int> L(arrayList.begin(), arrayList.begin() + half);
	vector<int> R(arrayList.begin() + half, arrayList.end());

	while (i < L.size() && j < R.size()) 
	{
		if (L[i] < R[j]) 
		{
			arrayList[k++] = L[i++];
		}
		else 
		{
			arrayList[k++] = R[j++];
		}
	}

	 

	while (i < L.size()) 
	{
		arrayList[k++] = L[i++];
	}

	while (j < R.size()) 
	{
		arrayList[k++] = R[j++];
	}


}
void ofApp::quickSort()
{
	int number = 0;

	int alto = arrayList.size() - 1;



	while (number < alto)
	{
		int p = arrayList[alto]; 
		int i = number;

		for (int j = number; j < alto; j++)
		{
			if (arrayList[j] < p)
			{
				swap(arrayList[i], arrayList[j]);
				i++;
			}
		}
		// method which swaps
		swap(arrayList[i], arrayList[alto]); 


		// it sorts
		alto = i - 1; 
	}
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

