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
};

void CseCatPictureApp::setup()
{
}

void CseCatPictureApp::mouseDown( MouseEvent event )
{
}

void CseCatPictureApp::update()
{
}

void CseCatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( CseCatPictureApp, RendererGl )
