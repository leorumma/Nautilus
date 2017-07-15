#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char **argv){
    VideoCapture stream(0);
    while (1){
        Mat cameraFrame, frameCanny;
        stream.read(cameraFrame);
        Canny(cameraFrame,frameCanny,50,350,3,false);
        imshow("Original",cameraFrame);
        imshow("Filtro Canny Edge",frameCanny);
        if(waitKey(10)==27)
            break;
    }

    return 0;
}

