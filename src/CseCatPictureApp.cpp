/**
* @ author: Jimmy Xu
* App name: CSE CAT PICTUE
* This is a simple app to show cat pictues 
*
*
*/



#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CseCatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private : 
	float brighness_;
};

void CseCatPictureApp::setup()
{

	brighness_ = 0.0f;
}

void CseCatPictureApp::mouseDown( MouseEvent event )
{
}

void CseCatPictureApp::update()
{
	brighness_ = brighness_ + 1.0f;

	if(brighness_> 1.0f){

		brighness_ = 0.0f;
	}

}

void CseCatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( brighness_, brighness_, brighness_ ) ); 
}

CINDER_APP_BASIC( CseCatPictureApp, RendererGl )
