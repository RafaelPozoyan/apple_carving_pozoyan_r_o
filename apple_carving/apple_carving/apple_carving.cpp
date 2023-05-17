// apple_carving.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "apple_carving.hpp"

//using namespace cv;
//using namespace std;

int main() {
    cv::Mat img = cv::Mat::zeros(600, 600, CV_8UC3);
    std::vector<cv::Point> points = {
        cv::Point(100, 100),
        cv::Point(200, 200),
        cv::Point(300, 300),
        cv::Point(400, 400),
        cv::Point(430, 100),
        cv::Point(100, 430),
        cv::Point(500, 230)
    };
    for (const auto& point : points) {
        cv::circle(img, point, 5, cv::Scalar(25, 15, 255), -1);
    }
    cv::imshow("Test_image", img);
    cv::waitKey(0);
    return 0;
}

