#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main()
{
    Mat img = Mat::zeros(512, 512, CV_8UC3);

    circle(
        img,
        Point(256 - 100, 256 - 100),
        50,
        Scalar(255, 0, 0),
        FILLED
    );

    circle(
            img,
            Point(256 + 100, 256 - 100),
            50,
            Scalar(0, 255, 0),
            FILLED
    );

    circle(
            img,
            Point(256, 256 + 100),
            50,
            Scalar(0, 0, 255),
            FILLED
    );

    imshow("Circles", img);

    waitKey();

    return 0;
}
