//
//  ZHNavigationController.h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/12/9.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHNavigationController : UINavigationController

#pragma mark -  以下方法处理自动横屏
- (UIStatusBarStyle)preferredStatusBarStyle;

- (BOOL)prefersStatusBarHidden;

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation;

- (BOOL)shouldAutorotate;

- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation;
#pragma mark -  以上方法处理自动横屏

@end
