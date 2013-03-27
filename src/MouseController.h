#pragma once

#include "ofMain.h"
#include "ofxEasingFunc.h"
#include "ofEvents.h"
#include "SceneController.h"
class mainApp;
//#include "mainApp.h"

//--------------------------------------------------------
class MouseController : public SceneController{
	public:
//        MouseController() {};
        MouseController(mainApp* ma);
        void keyPressed(ofKeyEventArgs & args);
        void mouseMoved(ofMouseEventArgs & args);
        void mouseDragged(ofMouseEventArgs & args);
        void mousePressed(ofMouseEventArgs & args);
        void mouseReleased(ofMouseEventArgs & args);
        void update();
//        void update(ofCamera & camera);
//        void update(mainApp *main);

        float easeStartTime;
        ofVec3f previousMousePosition;
        ofVec3f dragVelocity;
    
    mainApp* main;
};

