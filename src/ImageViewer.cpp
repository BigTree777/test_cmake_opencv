/** 
 * @file    ImageViewer.cpp
 * @brief   画像表示用クラスCImageViewerの実装ファイル
 */

#include <string>
#include <opencv2/opencv.hpp>

#include "ImageViewer.h"

/**
 * @brief  CImageViewer クラスのコンストラクタ
 */
CImageViewer::CImageViewer() {}

/**
 * @brief  表示対象となる画像を設定する
 *
 * @param[in] matImage  内部に保持する画像データ
 */
void CImageViewer::SetImage(const cv::Mat& matImage)
{
    m_matImage = matImage.clone();
}

/**
 * @brief  カラー画像として表示する
 *
 * @param[in] strWindowName  ウィンドウに表示する名前
 */
void CImageViewer::ShowColor(const std::string& strWindowName)
{
    if (m_matImage.empty()) {
        return;
    }

    cv::imshow(strWindowName, m_matImage);
    cv::waitKey(0);
}

/**
 * @brief  グレースケール画像として表示する
 *
 * @param[in] strWindowName  ウィンドウに表示する名前
 */
void CImageViewer::ShowGray(const std::string& strWindowName)
{
    if (m_matImage.empty()) {
        return;
    }

    cv::Mat matGray;
    cv::cvtColor(m_matImage, matGray, cv::COLOR_BGR2GRAY);
    cv::imshow(strWindowName, matGray);
    cv::waitKey(0);
}