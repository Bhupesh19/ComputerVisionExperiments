#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main( int argc, char* argv[] )
{
    cv::Mat image = cv::imread( argv[1], 1 );
    if( image.empty() )
    {
        return -1; 
    }
    cv::namedWindow( "Display", cv::WINDOW_AUTOSIZE ); 
    cv::imshow( "Display", image); 
    cv::waitKey( 0 );
    cv::destroyWindow( "Display" );
    return 0; 
}
