//
//  NSArray(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/9/27.
//  Copyright © 2016年 于兆海. All rights reserved.
//


@import UIKit;
@import Foundation;

/*!
 *
 *  @brief  NSArray 工具类
 *
 */
@interface NSArray (ZHTools)

/**
 增加越界判断，越界返回nil
 */
- (id)zh_objectAtIndex:(NSUInteger)index;

/**
 数组遍历
 */
- (void)zh_each:(void (^)(id object))block;

/**
 数组反向遍历
 */
- (void)zh_reverseEach:(void (^)(id object))block;

/**
 数组遍历
 */
- (void)zh_eachWithIndex:(void (^)(id object, NSInteger index))block;

/**
 数组反向遍历
 */
- (void)zh_reverseEachWithIndex:(void (^)(id object, NSInteger index))block;


/**
 根据block返回结果过滤数组,返回block返回值为YES的元素组成的数组
 */
- (NSMutableArray *)zh_filter:(BOOL (^)(id object))block;

/**
 NSArray 转 NSData , [NSKeyedArchiver archivedDataWithRootObject:self]
 */
- (NSData *)zh_dataValue;

/**
 NSData 转 NSArray , [NSKeyedUnarchiver unarchiveObjectWithData:data]
 */
+ (NSArray *)zh_arrayFromData:(NSData *)data;

/**
 Json 转 NSArray
 */
+ (NSArray *)zh_arrayFromJson:(NSString *)json;

/**
 NSArray转换成JSON字符串
 */
- (NSString *)zh_jsonStringValue;

- (NSMutableArray *)zh_removeNULL ;

@end


//NSArray *array = @[@0, @1, @2, @3, @4, @5, @6];
//
//NSLog(@"%@", [array zh_objectAtIndex:10] ? : @"666");
//
//[array zh_each:^(id object) {
//   NSLog(@"%@", object);
//}];
//
//[array zh_reverseEach:^(id object) {
//   NSLog(@"%@", object);
//}];
//
//[array zh_eachWithIndex:^(id object, NSInteger index) {
//    NSLog(@"%@ - %@", @(index), object);
//}];
//
//[array zh_reverseEachWithIndex:^(id object, NSInteger index) {
//    NSLog(@"%@ - %@", @(index), object);
//}];
//
//NSMutableArray *anArray = [array zh_filter:^BOOL(id object) {
//    NSInteger value = [object integerValue];
//    return value % 2 == 0;
//}];
//NSLog(@"%@", anArray);
//
//NSData *data = [array zh_dataValue];
//NSLog(@"%@", data);
//
//NSArray *newArray = [NSArray zh_arrayFromData:data];
//NSLog(@"%@", newArray);
//
//NSString *jsonString = [array zh_jsonStringValue];
//NSLog(@"%@", jsonString);
//
//newArray = [NSArray zh_arrayFromJson:jsonString];
//NSLog(@"%@", newArray);
