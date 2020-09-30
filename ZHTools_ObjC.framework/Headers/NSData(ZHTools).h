//
//  NSData+ZHTools.h
//  ZHTools
//
//  Created by YuZhaohai on 2020/7/10.
//  Copyright © 2020 ZHTools. All rights reserved.
//

@import UIKit;
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSData (ZHTools)

///  NSDictionary / NSArray 转 jsonData
+ (NSData *)zh_dataWithJSONObject:(id)theObject ;

///  jsonData 转 NSDictionary / NSArray
- (id)zh_jsonObjectValue ;

@end

NS_ASSUME_NONNULL_END
