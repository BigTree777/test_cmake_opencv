/** 
 * @file    ImageLoader.h
 * @brief   画像読み込み用クラスCImageLoaderのインターフェース定義
 */

#pragma once
#include <string>
#include <opencv2/opencv.hpp>

/**
 * @class CImageLoader
 * @brief 画像を読み込むクラス
 */
class CImageLoader {
public:
    // 画像の読み込み
    cv::Mat Load(const std::string& strPath);

    // アクセッサ
    std::string GetLastPath() { return this->m_strLastPath; };
    cv::Mat     GetLastImage() { return this->m_matLastImage; };

private:
    std::string m_strLastPath;  // 最後に読み込んだ画像のパス
    cv::Mat m_matLastImage;     // 最後に読み込んだ画像のデータ
};