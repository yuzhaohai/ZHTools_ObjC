//
//  ZHUtility.h
//  ZHTools_ObjC
//
//  Created by born2try on 2018/11/6.
//  Copyright © 2018 yzh. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreGraphics;
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface ZHUtility : NSObject

+ (void)shakeAnimationForView:(UIView *)view;

+ (CGSize)sizeForString:(NSString *)string font:(UIFont *)font maxSize:(CGSize)maxSize;

+ (NSInteger)lineAmountOfString:(NSString *)string withWidth:(CGFloat)width font:(UIFont *)font;

+ (NSInteger)lineAmountOfAttributedString:(NSAttributedString *)string withWidth:(CGFloat)width;

+ (NSMutableAttributedString *)substringOfString:(NSString *)string toLine:(NSInteger)endLine withWidth:(CGFloat)width font:(UIFont *)font;

+ (NSMutableAttributedString *)substringOfAttributedString:(NSAttributedString *)string toLine:(NSInteger)endLine withWidth:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
