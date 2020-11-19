//
//  NSObject(ZHTools).h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/29.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

@interface NSObject(ZHTools)

- (void)zh_performBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;

+ (BOOL)zh_swizzleMethod:(SEL)origionalMethod toMethod:(SEL)newMethod;


/// 移除网络请求返回数据中的NULL
- (id)zh_removeNULL ;

@end
