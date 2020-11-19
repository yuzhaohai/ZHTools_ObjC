//
//  ZHTools.h
//  ZHTools_ObjC
//
//  Created by hello on 2017/12/26.
//  Copyright © 2017年 ZHTools. All rights reserved.
//

@import UIKit;
@import Foundation;

@interface ZHTools : NSObject


/**
 设置UIScrollView的contentInsetAdjustmentBehavior为UIScrollViewContentInsetAdjustmentNever
 */
+ (void)setScrollViewContentInsetAdjustmentNever;

/**
 获取当前显示的ViewController
 */
+ (UIViewController *)getCurrentViewController;

/**
 数字转罗马数字字符串
 */
+ (NSString *)romanNumeralFromInteger:(NSInteger)integerValue;

/**
生成随机数，包含start和end
*/
+ (int)randomNumberFrom:(int)start to:(int)end;

+ (UIFont *)fontWithTTFPath:(NSString *)ttfPath size:(CGFloat)size ;


@end
