//
//  UIImage(ZHTools).h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/10/9.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

///图片翻转方向
typedef NS_ENUM(NSUInteger, ZHImageFlipDirection) {
    ///垂直
    ZHImageFlipDirection_Vertical,
    ///水平
    ZHImageFlipDirection_Horizontal,
};

@interface UIImage(ZHTools)

+ (UIImage *)zh_captureView:(UIView *)view;

+ (UIImage *)zh_captureScrollView:(UIScrollView *)view;

+ (UIImage *)zh_imageWithColor:(UIColor *)color;
+ (UIImage *)zh_imageWithColor:(UIColor *)color size:(CGSize)size;

///非缓存方式加载图片
+ (UIImage *)zh_imageNamed:(NSString *)name;
///非缓存方式加载图片
+ (UIImage *)zh_imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

+ (UIImage *)zh_imageFromVideoWithPath:(NSString *)path ;

/// 启动图
+ (UIImage *)zh_launchImage;

/// 获取应用图标
+ (UIImage *)zh_appIcon ;

- (void)zh_save2AlbumWitnCompleteBlock:(void(^)(id zhObject))completeBlock ;

@end
