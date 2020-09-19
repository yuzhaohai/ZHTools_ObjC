//
//  UIImage(ZHTools).h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/10/9.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>

///图片翻转方向
typedef NS_ENUM(NSUInteger, ZHImageFlipDirection) {
    ///垂直
    ZHImageFlipDirection_Vertical,
    ///水平
    ZHImageFlipDirection_Horizontal,
};

@interface UIImage(ZHTools)

+ (UIImage *)zh_CaptureView:(UIView *)view;

+ (UIImage *)zh_CaptureScrollView:(UIScrollView *)view;

+ (UIImage *)zh_ImageWithColor:(UIColor *)color;
+ (UIImage *)zh_ImageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)zh_ImageNamed:(NSString *)name;

+ (UIImage *)zh_ImageNamed:(NSString *)name inBundle:(NSBundle *)bundle;

+ (UIImage *)imageFromVideoWithPath:(NSString *)path ;

/// 启动图
+ (UIImage *)launchImage;

/// 获取应用图标
+ (UIImage *)appIcon ;

- (UIImage *)noScaleToSize:(CGSize)size ;

@end
