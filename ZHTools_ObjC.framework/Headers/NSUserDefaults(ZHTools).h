//
//  NSUserDefaults(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/9/25.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

@interface NSUserDefaults(ZHTools)

+ (id)zh_value4Key:(NSString *)key;

+ (void)zh_setValue:(id)value forKey:(NSString *)key;

+ (NSString *)zh_stringForKey:(NSString *)key;

+ (NSArray *)zh_arrayForKey:(NSString *)key;

+ (NSDictionary *)zh_dictionaryForKey:(NSString *)key;

+ (NSData *)zh_dataForKey:(NSString *)key;

+ (NSArray *)zh_stringArrayForKey:(NSString *)key;

+ (NSInteger)zh_integerForKey:(NSString *)key;

+ (float)zh_floatForKey:(NSString *)key;

+ (double)zh_doubleForKey:(NSString *)key;

+ (BOOL)zh_boolForKey:(NSString *)key;


@end
