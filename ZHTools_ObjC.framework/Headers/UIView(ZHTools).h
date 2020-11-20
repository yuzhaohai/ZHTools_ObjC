//
//  UIColor(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/25.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

typedef void(^ZHGestureRecognizerBlock)(UIGestureRecognizer *gestureRecoginzer);

@interface UIView(ZHTools)

#pragma mark -  添加UIBezierPath圆角绘制相关属性
- (CGFloat)zh_CornerRadius;
- (UIRectCorner)zh_Corners;

/**
 添加圆角 使用UIBezierPath提升效率  corner传值：(UIRectCornerBottomLeft | UIRectCornerBottomRight)
 */
- (void)zh_addCornerRadius:(float)cornerRadius withCorners:(UIRectCorner)corners;

#pragma mark -  UIAdditions
@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize size;

/**
 *  @brief  找到当前view所在的viewcontroler
 */
@property (readonly) UIViewController *zh_viewController;

/**
 添加tap手势
 */
- (void)zh_addTapGestureRecognizerWithBlock:(ZHGestureRecognizerBlock)block;

- (void)zh_addLineWithFrame:(CGRect)frame color:(UIColor *)color ;
- (void)zh_addLineWithFrame:(CGRect)frame color:(UIColor *)color cornerRadius:(CGFloat)cornerRadius ;

- (UIActivityIndicatorView *)zh_showUIActivityIndicatorViewWithStyle:(UIActivityIndicatorViewStyle)style center:(CGPoint)center;

@end
