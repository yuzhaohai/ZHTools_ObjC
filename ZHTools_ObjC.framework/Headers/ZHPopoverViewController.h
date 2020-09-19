//
//  ZHPopoverViewController.h
//  ZHTools
//
//  Created by YuZhaohai on 2020/7/10.
//  Copyright © 2020 ZHTools. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ZHPopoverViewControllerTableSelectBlock)(NSIndexPath *indexPath);

@interface ZHPopoverViewController : UIViewController

@property (copy, nonatomic) NSArray *titleArray;
@property (copy, nonatomic) NSArray *imageArray;

@property (copy, nonatomic) ZHPopoverViewControllerTableSelectBlock selectBlock;

@end

NS_ASSUME_NONNULL_END
