#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char **argv){
    VideoCapture stream(0);
    if (!stream.isOpened()){
        cout<< "cannot open camera";
    }
    while (1){
        Mat cameraFrame, frameCanny;
        stream.read(cameraFrame);
        Canny(cameraFrame,frameCanny,50,350,3,false);
        imshow("Original",cameraFrame);
        imshow("Efeito Canny Edge",frameCanny);
        if(waitKey(10)==27)
            break;
    }

    return 0;
}

