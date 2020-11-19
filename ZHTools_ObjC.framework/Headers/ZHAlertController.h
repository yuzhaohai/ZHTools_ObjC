//
//  ZHAlertController.h
//  ZHTools
//
//  Created by YuZhaohai on 2020/7/10.
//  Copyright © 2020 ZHTools. All rights reserved.
//

@import UIKit;
@import Foundation;

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

+ (void)alertTitle:(NSString *)title message:(NSString *)message cancleButtonTitle:(NSString *)cancleButtonTitle;

@end

NS_ASSUME_NONNULL_END

//UIAlertController *alertVc = [UIAlertController alertControllerWithTitle:@"本次直播为专场直播" message:nil preferredStyle:UIAlertControllerStyleAlert];
//// 添加输入框 (注意:在UIAlertControllerStyleActionSheet样式下是不能添加下面这行代码的)
//[alertVc addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
//    textField.placeholder = @"请输入邀请码";
//}];
//UIAlertAction *action1 = [UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
//
//    NSLog(@"ok, %@", [[alertVc textFields] objectAtIndex:0].text);
//
//}];
//UIAlertAction *action2 = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
//[alertVc addAction:action2];
//[alertVc addAction:action1];
//[vc presentViewController:alertVc animated:YES completion:nil];
