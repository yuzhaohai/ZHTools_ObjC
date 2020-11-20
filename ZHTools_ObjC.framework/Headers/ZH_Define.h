//
//  ZHDefine.h
//  ZHTools
//
//  Created by 于兆海 (yuzhaohai@126.com) on 2016/9/14.
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

#define zh_iOSVersion [[[UIDevice currentDevice] systemVersion] floatValue]

#define zh_DocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)objectAtIndex:0]

#define zh_ScreenBounds [[UIScreen mainScreen] bounds]
#define zh_ScreenHeight zh_ScreenBounds.size.height
#define zh_ScreenWidth zh_ScreenBounds.size.width

#define zh_NavigationBar_HEIGHT 44
#define zh_StatusBar_HEIGHT CGRectGetHeight([[UIApplication sharedApplication] statusBarFrame])
#define zh_TabBar_HEIGHT ((zh_StatusBar_HEIGHT > 20) ? 83 : 49)

#ifdef DEBUG
#define ZHLog(format, ...) do {                                                                         \
                            fprintf(stderr, "<%s : %d> %s\n",                                           \
                            [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
                            __LINE__, __func__);                                                        \
                            (NSLog)((format), ##__VA_ARGS__);                                           \
                            fprintf(stderr, "-------\n");                                               \
                            } while (0)
#else
#define ZHLog(...) do { } while (0)
#endif
