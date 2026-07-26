/** 
 * @file    ImageViewer.h
 * @brief   画像表示用クラスCImageViewerのインターフェース定義
 */

#pragma once
#include <string>
#include <opencv2/opencv.hpp>

/**
 * @class CImageViewer
 * @brief 画像を表示するクラス
 */
class CImageViewer {
public:
    CImageViewer();
    void SetImage(const cv::Mat& matImage);             // 画像の読み込み
    void ShowColor(const std::string& strWindowName);   // 画像をカラーで表示
    void ShowGray(const std::string& strWindowName);    // 画像をグレースケールで表示

    // アクセッサ
    cv::Mat GetImage() { return this->m_matImage; };

private:
    cv::Mat m_matImage;
};
