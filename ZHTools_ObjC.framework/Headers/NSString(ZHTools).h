//
//  NSString(ZHTools).h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/29.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(ZHTools)


/*!
 *
 *  @brief  计算指定字体、宽度下文本的高度
 *
 */
- (CGFloat)zh_HeightWithFont:(UIFont *)font width:(CGFloat)width;

/*!
 *
 *  @brief  计算指定字体、高度下文本的宽度
 *
 */
- (CGFloat)zh_WidthWithFont:(UIFont *)font height:(CGFloat)height;


/*!
 *
 *  @brief  计算指定字体、宽度、行距下文本的高度
 *
 */
- (CGFloat)zh_HeightWithFont:(UIFont *)font width:(CGFloat)width lineSpace:(NSInteger)lineSpace;

/*!
 *
 *  @brief  去除空格后的字符串
 *
 */
- (NSString *)zh_TrimedStringByWhitespace;

/*!
 *
 *  @brief  去除空格与空行后的字符串
 *
 */
- (NSString *)zh_TrimedStringByWhitespaceAndNewlines;

/*!
 *
 *  @brief  JSON字符串转NSDictionary / NSArray
 *
 */
- (id)zh_jsonObjectValue;

/*!
 *
 *  @brief  NSDictionary / NSArray转JSON字符串
 *
 */
+ (NSString *)zh_JsonStringFromObject:(id)object;

/*!
 *
 *  @brief  判断字符串是否包含汉字
 *
 */
- (BOOL)zh_IsContainChineseCharacter;

/*!
*
*  @brief  是否是手机号
*
*/
- (BOOL)zh_IsMobileNumber ;

/*!
*
*  @brief  是否是邮件地址
*
*/
- (BOOL)zh_IsEmailAddress ;

/*!
*
*  @brief  是否座机号
*
*/
- (BOOL)zh_IsFixedLineTelephoneNumber ;

- (NSString *)stringCutted4ShownCharacterAmount:(NSInteger)charecterAmount ;

- (NSString *)removeCharactors:(NSArray *)array ;

- (BOOL)isValidateIDCardNumber ;

+ (NSString *)readableStringFromDate:(NSDate *)date ;

- (BOOL)createFilePath;

- (void)call ;

@end
