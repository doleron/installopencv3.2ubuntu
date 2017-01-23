#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv ) {
  
    Mat image;
    image = imread("fish.jpeg" , CV_LOAD_IMAGE_COLOR);

    if(! image.data ) {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    namedWindow( "Display window", WINDOW_AUTOSIZE );
    imshow( "Display window", image );

    waitKey(0);
    return 0;
}
