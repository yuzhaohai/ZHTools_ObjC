//
//  NSDictionary+ZHTools.h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/10/28.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 *
 *  @brief  NSDictionary 工具类
 *
 */
@interface NSDictionary (ZHTools)

/**
 遍历
 */
- (void)zh_Each:(void (^)(id key, id value))block;

/**
 @
 */
- (id)zh_Value4Key:(NSString *)key;


/**
 若key对应的值为NSNumber类型，返回stringValue
 */
- (NSString *)zh_StringValue4Key:(NSString *)key;

/**
 NSDictionary 转 NSData
 */
- (NSData *)zh_dataValue;

/**
 NSData 转 NSDictionary
 */
+ (NSDictionary *)zh_dictionaryFromData:(NSData *)data;

/**
 Json 转 NSDictionary
 */
+ (NSDictionary *)zh_dictionaryFromJson:(NSString *)json;

/**
 NSDictionary转换成JSON字符串
 */
- (NSString *)zh_JsonStringValue;

- (NSMutableDictionary *)removeNULL;

@end
