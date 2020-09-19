//
//  NSObject(ZHTools).h
//  FrameWork
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/29.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject(ZHTools)

- (void)zh_PerformBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;

+ (BOOL)zh_SwizzleMethod:(SEL)origionalMethod toMethod:(SEL)newMethod;


/// 移除网络请求返回数据中的NULL
- (id)removeNULL ;

@end
