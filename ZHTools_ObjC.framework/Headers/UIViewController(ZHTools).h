//
//  UIViewController+ZHTools.h
//  ZHTools
//
//  Created by YuZhaohai on 2020/7/10.
//  Copyright © 2020 ZHTools. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (ZHTools)

/// 是否是深色模式
@property (assign, nonatomic) BOOL isDarkMode;

- (void)goBack;

@end

NS_ASSUME_NONNULL_END
