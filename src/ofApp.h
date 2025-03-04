#pragma once

#include "ofMain.h"
#include<array>


/*I used AI to help me understand how to create and use methods in
this project*/
class ofApp : public ofBaseApp
{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void randomNumbers();
		std::array <int, 6> arrayList;/*5*/
		void bubbleSort();
		void insertionSort();
		void mergeSort();
		void quickSort();
		void shuffle();
		
};
