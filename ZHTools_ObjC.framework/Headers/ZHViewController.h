//
//  ZHViewController.h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/12/9.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <UIKit/UIKit.h>

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

/**
 右侧按钮点击事件
 */
@property (copy, nonatomic) ZHButtonActionBlock rightNavigationButtonActionBlock;

/**
 当前ViewController是否正在显示
 */
- (BOOL)zh_isVisible;

@end
