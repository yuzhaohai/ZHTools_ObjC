//
//  NSArray(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/27.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 *
 *  @brief  NSArray 工具类
 *
 */
@interface NSArray (ZHTools)

/**
 增加越界判断，越界返回nil
 */
- (id)zh_ObjectAtIndex:(NSUInteger)index;

/**
 数组遍历
 */
- (void)zh_Each:(void (^)(id object))block;

/**
 数组反向遍历
 */
- (void)zh_ReverseEach:(void (^)(id object))block;

/**
 数组遍历
 */
- (void)zh_EachWithIndex:(void (^)(id object, NSInteger index))block;

/**
 数组反向遍历
 */
- (void)zh_ReverseEachWithIndex:(void (^)(id object, NSInteger index))block;


/**
 根据block返回结果过滤数组,返回block返回值为YES的元素组成的数组
 */
- (NSMutableArray *)zh_Filter:(BOOL (^)(id object))block;

/**
 NSArray 转 NSData
 */
- (NSData *)zh_dataValue;

/**
 NSData 转 NSArray
 */
+ (NSArray *)zh_arrayFromData:(NSData *)data;

/**
 Json 转 NSArray
 */
+ (NSArray *)zh_arrayFromJson:(NSString *)json;

/**
 NSArray转换成JSON字符串
 */
- (NSString *)zh_JsonStringValue;

- (NSMutableArray *)removeNULL ;

@end
