//
//  ZHDefine.h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/14.
//  Copyright © 2016年 于兆海. All rights reserved.
//

#define zh_WeakObj(o) autoreleasepool{} __weak typeof(o) o##Weak = o;
#define zh_StrongObj(o) autoreleasepool{} __strong typeof(o) o = o##Weak;
//用法
//@zh_WeakObj(self);
//[var setBlock:^{
//    @zh_StrongObj(self);
//    [self doSomething];
//}];

#define zh_WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#define zh_iOSVersion [[[UIDevice currentDevice] systemVersion] floatValue]

#define zh_DocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)objectAtIndex:0]

#define zh_ScreenBounds [[UIScreen mainScreen] bounds]
#define zh_ScreenHeight zh_ScreenBounds.size.height
#define zh_ScreenWidth zh_ScreenBounds.size.width

#define zh_NavigationBar_HEIGHT 44
#define zh_StatusBar_HEIGHT CGRectGetHeight([[UIApplication sharedApplication] statusBarFrame])
#define zh_TabBar_HEIGHT ((zh_StatusBar_HEIGHT > 20) ? 83 : 49)

