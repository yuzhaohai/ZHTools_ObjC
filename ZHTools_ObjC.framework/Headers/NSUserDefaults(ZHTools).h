//
//  NSUserDefaults(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/25.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults(ZHTools)

+ (id)zh_Value4Key:(NSString *)key;

+ (void)zh_setValue:(id)value forKey:(NSString *)key;

+ (NSString *)zh_StringForKey:(NSString *)key;

+ (NSArray *)zh_ArrayForKey:(NSString *)key;

+ (NSDictionary *)zh_DictionaryForKey:(NSString *)key;

+ (NSData *)zh_DataForKey:(NSString *)key;

+ (NSArray *)zh_StringArrayForKey:(NSString *)key;

+ (NSInteger)zh_IntegerForKey:(NSString *)key;

+ (float)zh_FloatForKey:(NSString *)key;

+ (double)zh_DoubleForKey:(NSString *)key;

+ (BOOL)zh_BoolForKey:(NSString *)key;


@end
