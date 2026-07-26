/** 
 * @file    ImageLoader.cpp
 * @brief   画像読み込み用クラスCImageLoaderの実装ファイル
 */

#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

#include "ImageLoader.h"

/**
 * @brief  指定されたファイルパスから画像を読み込む
 * 
 * @param[in] strPath  読み込み対象の画像ファイルパス
 * @return     読み込んだ画像（失敗時は空の cv::Mat を返す）
 * 
 * @note 前回読み込んだパスと同じ場合はキャッシュされた画像を返す
 */
cv::Mat CImageLoader::Load(const std::string& strPath)
{
    if (strPath == m_strLastPath && !m_matLastImage.empty()) {
        return m_matLastImage;
    }

    cv::Mat matImage = cv::imread(strPath);
    if (matImage.empty()) {
        std::cerr << "画像の読み込みに失敗しました: " << strPath << std::endl;
        return cv::Mat();
    }

    m_strLastPath = strPath;
    m_matLastImage = matImage;
    return matImage;
}
