/**
 * @file    main.cpp
 * @brief   画像を取得して表示する
 */

#include "ImageLoader.h"
#include "ImageViewer.h"

int main()
{
    const std::string strImagePath = "data/image.png";

    CImageLoader loader;
    cv::Mat matImage = loader.Load(strImagePath);
    if (matImage.empty()) {
        return 1;
    }

    CImageViewer viewer;
    viewer.SetImage(matImage);
    viewer.ShowColor("Color");
    viewer.ShowGray("Gray");

    return 0;
}