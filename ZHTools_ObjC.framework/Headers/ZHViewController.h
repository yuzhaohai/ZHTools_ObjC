//
//  ZHViewController.h
//  ZHTools
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/12/9.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

typedef void(^ZHButtonActionBlock)(UIButton *button);

@interface ZHViewController : UIViewController

/**
 状态栏+导航栏
 */
@property (strong, nonatomic) UIView *topBar;

/**
 左侧按钮
 */
@property (strong, nonatomic) UIButton *leftNavigationButton;

/**
 导航栏标题
 */
@property (strong, nonatomic) UILabel *navigationTitleLabel;

/**
 右侧按钮
 */
@property (strong, nonatomic) UIButton *rightNavigationButton;

/**
 禁用系统侧滑返回，默认NO
 */
@property (assign, nonatomic) BOOL disableSystemSlideBack;

/**
 左侧按钮点击事件
 */
@property (copy, nonatomic) ZHButtonActionBlock leftNavigationButtonActionBlock;
- (void)leftNavigationButtonAction ;

/**
 右侧按钮点击事件
 */
@property (nonatomic, copy) void (^rightNavigationButtonActionBlock) (UIButton *button);
- (void)rightNavigationButtonAction ;

#pragma mark -  以下方法处理自动横屏
- (UIStatusBarStyle)preferredStatusBarStyle;

- (BOOL)prefersStatusBarHidden;

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation;

- (BOOL)shouldAutorotate;

- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation;
#pragma mark -  以上方法处理自动横屏

@end
