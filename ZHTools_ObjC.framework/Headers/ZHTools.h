//
//  ZHTools.h
//  ZHTools_ObjC
//
//  Created by hello on 2017/12/26.
//  Copyright © 2017年 ZHTools. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^ZHBlock)(id zhObject);

@interface ZHTools : NSObject


/**
 打电话
 
 @param mobile 电话号码
 */
+ (void)callMobile:(NSString *)mobile;

/**
 移除NSArray中的NULL
 */
+ (NSMutableArray *)removeNULLFromArray:(NSArray *)array;

/**
 移除NSDictionary中的NULL
 */
+ (NSMutableDictionary *)removeNULLFromDictionary:(NSDictionary *)dictionary;


///**
// 根据起始页码、当前数据量、每页数据量、刷新类型获取网络请求页码
//
// @param startPage 起始页码
// @param currentAmount 当前数据量
// @param amountPrePage 每页数据量
// @param zhPullRefreshType 刷新类型
// @return 网络请求页码
// */
//+ (NSInteger)pageNumberWithStartPage:(NSInteger)startPage currentAmount:(NSInteger)currentAmount amountPrePage:(NSInteger)amountPrePage zhPullRefreshType:(ZHPullRefreshType)zhPullRefreshType;

///**
// 下拉或上拉网络请求结束后关闭刷新样式（获取到的数据量为零时 不显示上拉加载，获取到的数据量不能被每页数据量整除时 显示已无更多数据）
//
// @param scrollView scrollView
// @param totalAmount 当前数据量
// @param amountPrePage 每页数据量
// */
//+ (void)endMJRefreshForScrollView:(UIScrollView *)scrollView withTotalAmount:(NSInteger)totalAmount amountPrePage:(NSInteger)amountPrePage;

/**
 设置UIScrollView的contentInsetAdjustmentBehavior为UIScrollViewContentInsetAdjustmentNever
 */
+ (void)setScrollViewContentInsetAdjustmentNever;

/**
 获取当前显示的ViewController
 */
+ (UIViewController *)getCurrentViewController;

/**
 获取当前显示的ViewController
 */
+ (UIViewController *)getCurrentViewControllerFrom:(UIViewController *)rootViewController;

/**
 数字转罗马数字字符串
 */
+ (NSString *)romanNumeralFromInteger:(NSInteger)integerValue;

/**
 解析URL请求字符串为NSDictionary
 */
+ (NSDictionary *)dictionaryFromURL:(NSURL *)url;

/**
 根据NSDictionary生成URL请求字符串
 */
+ (NSString *)urlQueryStringFromDictionary:(NSDictionary *)dictionary;

/**
 保存图片到本地
 
 @param image 要保存的图片
 @param withHUD 是否显示SVProgressHUD
 @param completeBlock 保存结束后回调的block
 */
+ (void)saveImage:(UIImage *)image withHUD:(BOOL)withHUD completeBlock:(ZHBlock)completeBlock;

+ (void)alertWithTitle:(NSString *)title message:(NSString *)message cancleButtonTitle:(NSString *)cancleButtonTitle;

+ (UIActivityIndicatorView *)showUIActivityIndicatorViewOnView:(UIView *)view withActivityIndicatorStyle:(UIActivityIndicatorViewStyle)style;

+ (int)randomNumberFrom:(int)start to:(int)end;


@end
