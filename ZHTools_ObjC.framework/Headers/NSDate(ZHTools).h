//
//  NSDate(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/9/27.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

@interface NSDate(ZHTools)

@property (readonly, nonatomic) NSInteger zh_year;

/**
 *
 *  [1 - January]
 *  [2 - February]
 *  [3 - March]
 *  [4 - April]
 *  [5 - May]
 *  [6 - June]
 *  [7 - July]
 *  [8 - August]
 *  [9 - September]
 *  [10 - October]
 *  [11 - November]
 *  [12 - December]
 *
 */
@property (readonly, nonatomic) NSInteger zh_month;

@property (readonly, nonatomic) NSInteger zh_day;

@property (readonly, nonatomic) NSInteger zh_hour;

@property (readonly, nonatomic) NSInteger zh_minute;

@property (readonly, nonatomic) NSInteger zh_second;

/**
 *
 *  [1 - Sunday]
 *  [2 - Monday]
 *  [3 - Tuerday]
 *  [4 - Wednesday]
 *  [5 - Thursday]
 *  [6 - Friday]
 *  [7 - Saturday]
 *
 */
@property (readonly, nonatomic) NSInteger zh_weekday;

/**
 * 判断是否是润年
 */
- (BOOL)zh_isLeapYear;

- (BOOL)zh_isEarlierThanDate:(NSDate *)aDate;

- (BOOL)zh_isLaterThanDate:(NSDate *)aDate;

- (NSUInteger)zh_daysInYear;

- (NSUInteger)zh_daysInMonth;

- (NSDate *)zh_beginningOfDay;

- (NSDate *)zh_endOfDay;

- (NSDate *)zh_beginningOfWeek;

- (NSDate *)zh_endOfWeek;

- (NSDate *)zh_beginningOfMonth;

- (NSDate *)zh_endOfMonth;

- (NSDate *)zh_beginningOfYear;

- (NSDate *)zh_endOfYear;

#pragma mark -  NSDate & NSString

+ (NSDateFormatter *)zh_sharedDateFormatter ;

/*
 
 以下是dateFormat可使用的英文代号：
 
 纪元的表示：
 G：表示AD，也就是公元
 
 年的表示：
 yy：年的后面2位数字
 yyyy：表示完整的年
 
 月的表示：
 M：表示成1~12，1位数或2位数
 MM：表示成01~12，不足2位数会补0
 MMM：英文月份的缩写，例如：Jan
 MMMM：英文月份完整表示，例如：January
 
 日期的表示：
 d：表示成1~31，1位数或2位数
 dd：表示成01~31，不足2位数会补0
 
 星期的表示：
 EEE：星期的英文缩写，如Sun
 EEEE：星期的英文完整表示，如，Sunday
 
 上/下午的表示：
 aa：表示AM或PM
 
 小時的表示：
 H：表示成0~23，1位數或2位數(24小時制)
 HH：表示成00~23，不足2位數會補0(24小時制)
 K：表示成0~12，1位數或2位數(12小時制)
 KK：表示成0~12，不足2位數會補0(12小時制)
 
 分的表示：
 m：表示0~59，1位數或2位數
 mm：表示00~59，不足2位數會補0
 
 秒的顯示：
 s：顯示0~59，1位數或2位數
 ss：顯示00~59，不足2位數會補0
 S： 毫秒的顯示
 
 時區的顯示：z / zz /zzz ：PDT
 zzzz：Pacific Daylight Time
 Z / ZZ / ZZZ ：-0800
 ZZZZ：GMT -08:00
 v：PT
 vvvv：Pacific Time
 
 */
+ (NSDate *)zh_dateFromString:(NSString *)string dateFormat:(NSString *)dateFormat;

- (NSString *)zh_stringWithDateFormat:(NSString *)dateFormat;

+ (NSDate *)zh_dateFromISO8601String:(NSString *)string ;

@end
