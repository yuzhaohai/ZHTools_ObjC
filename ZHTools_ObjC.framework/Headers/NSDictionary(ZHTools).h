//
//  NSDictionary+ZHTools.h
//  FrameWork
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/10/28.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;


/*!
 *
 *  @brief  NSDictionary 工具类
 *
 */
@interface NSDictionary (ZHTools)

/**
 遍历
 */
- (void)zh_each:(void (^)(id key, id value))block;

/**
 @
 */
- (id)zh_value4Key:(NSString *)key;


/**
 若key对应的值为NSNumber类型，返回stringValue
 */
- (NSString *)zh_stringValue4Key:(NSString *)key;

/**
 NSDictionary 转 jsonData
 */
- (NSData *)zh_jsonDataValue;

/**
 jsonData 转 NSDictionary
 */
+ (NSDictionary *)zh_dictionaryFromJSONData:(NSData *)data;

/**
 Json 转 NSDictionary
 */
+ (NSDictionary *)zh_dictionaryFromJson:(NSString *)json;

/**
 NSDictionary转换成JSON字符串
 */
- (NSString *)zh_jsonStringValue;

/**
 解析URL请求字符串为NSDictionary
 */
+ (NSDictionary *)zh_dictionaryFromURL:(NSURL *)url;

/**
 根据NSDictionary生成URL请求字符串
 */
- (NSString *)zh_urlQueryStringValue;

- (NSMutableDictionary *)zh_removeNULL;

@end
