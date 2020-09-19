//
//  ZHAlertController.h
//  ZHTools
//
//  Created by YuZhaohai on 2020/7/10.
//  Copyright © 2020 ZHTools. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHAlertController : UIAlertController

@property (assign, nonatomic) UIAlertControllerStyle style;

#pragma mark -  UIPickerView start
+ (instancetype)alertUIPickerViewWithTitle:(NSString *)title style:(UIAlertControllerStyle)style ;

@property (nonatomic, strong) UIPickerView * pickerView;

@property (nonatomic, copy) NSInteger (^numberOfComponents) (void);
@property (nonatomic, copy) NSInteger (^numberOfRowsInComponent)(NSInteger component);
@property (nonatomic, copy) CGFloat (^rowHeightForComponent)(NSInteger component);
@property (nonatomic, copy) NSString * (^titleForRowOfComponent)(NSInteger row, NSInteger component);
@property (nonatomic, copy) NSAttributedString * (^attributedTitleForRowOfComponent)(NSInteger row, NSInteger component);
@property (nonatomic, copy) void (^didSelectRowOfComponent)(NSInteger row, NSInteger component, UIPickerView *pickerView);
#pragma mark -  UIPickerView  end

#pragma mark -  UIDatePicker start
@property (strong, nonatomic) UIDatePicker *datePicker;

+ (instancetype)alertUIDatePickerWithTitle:(NSString *)title style:(UIAlertControllerStyle)style ;

#pragma mark -  UIDatePicker end

@end

NS_ASSUME_NONNULL_END
