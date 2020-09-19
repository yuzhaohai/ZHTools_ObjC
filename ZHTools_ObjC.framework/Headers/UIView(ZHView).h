//
//  UIColor(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/25.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;


extern NSString *__nonnull zh_userInteractionEnabled;
extern NSString *__nonnull zh_tag;
extern NSString *__nonnull zh_clipsToBounds;
extern NSString *__nonnull zh_backgroundColor;
extern NSString *__nonnull zh_backgroundColorHEX;
extern NSString *__nonnull zh_alpha;
extern NSString *__nonnull zh_hidden;
extern NSString *__nonnull zh_contentMode;
extern NSString *__nonnull zh_tintColor;
extern NSString *__nonnull zh_tintColorHEX;
extern NSString *__nonnull zh_frame;

extern NSString *__nonnull zh_enabled;
extern NSString *__nonnull zh_selected;
extern NSString *__nonnull zh_highlighted;
extern NSString *__nonnull zh_contentVerticalAlignment;///垂直方向的对齐方式
extern NSString *__nonnull zh_contentHorizontalAlignment;///水平方向的对齐方式

extern NSString *__nonnull zh_normalTitle;
extern NSString *__nonnull zh_selectedTitle;
extern NSString *__nonnull zh_normalAttributeTitle;
extern NSString *__nonnull zh_selectedAttributedTitle;
extern NSString *__nonnull zh_normalTitleColor;
extern NSString *__nonnull zh_normalTitleColorHEX;
extern NSString *__nonnull zh_selectedTitleColor;
extern NSString *__nonnull zh_selectedTitleColorHEX;
extern NSString *__nonnull zh_normalImage;
extern NSString *__nonnull zh_normalImageName;
extern NSString *__nonnull zh_selectedImage;
extern NSString *__nonnull zh_selectedImageName;
extern NSString *__nonnull zh_normalBackgroundImage;
extern NSString *__nonnull zh_normalBackgroundImageName;
extern NSString *__nonnull zh_selectedBackgroundImage;
extern NSString *__nonnull zh_selectedBackgroundImageName;
extern NSString *__nonnull zh_titleFont;
extern NSString *__nonnull zh_titleFontSize;

extern NSString *__nonnull zh_text;
extern NSString *__nonnull zh_attributedText;
extern NSString *__nonnull zh_textColor;
extern NSString *__nonnull zh_textColorHEX;
extern NSString *__nonnull zh_font;
extern NSString *__nonnull zh_fontSize;
extern NSString *__nonnull zh_textAlignment;
extern NSString *__nonnull zh_attributedPlaceholder;
extern NSString *__nonnull zh_clearsOnBeginEditing;
extern NSString *__nonnull zh_adjustsFontSizeToFitWidth;
extern NSString *__nonnull zh_delegate;
extern NSString *__nonnull zh_clearButtonMode;
extern NSString *__nonnull zh_leftView;
extern NSString *__nonnull zh_leftViewMode;
extern NSString *__nonnull zh_rightView;
extern NSString *__nonnull zh_rightViewMode;

extern NSString *__nonnull zh_onTintColor;
extern NSString *__nonnull zh_onTintColorHEX;
extern NSString *__nonnull zh_thumbTintColor;
extern NSString *__nonnull zh_thumbTintColorHEX;
extern NSString *__nonnull zh_onImage;
extern NSString *__nonnull zh_onImageName;
extern NSString *__nonnull zh_offImage;
extern NSString *__nonnull zh_offImageName;
extern NSString *__nonnull zh_on;

extern NSString *__nonnull zh_bounces;
extern NSString *__nonnull zh_alwaysBounceVertical;
extern NSString *__nonnull zh_alwaysBounceHorizontal;
extern NSString *__nonnull zh_pagingEnabled;
extern NSString *__nonnull zh_scrollEnabled;
extern NSString *__nonnull zh_showsVerticalScrollIndicator;///垂直
extern NSString *__nonnull zh_showsHorizontalScrollIndicator;///水平

extern NSString *__nonnull zh_editable;
extern NSString *__nonnull zh_selectable;

extern NSString *__nonnull zh_dataSource;
extern NSString *__nonnull zh_allowsSelection;
extern NSString *__nonnull zh_separatorStyle;

extern NSString *__nonnull zh_numberOfLines;

extern NSString *__nonnull zh_image;
extern NSString *__nonnull zh_imageName;
extern NSString *__nonnull zh_highlightedImage;
extern NSString *__nonnull zh_highlightedImageName;

extern NSString *__nonnull zh_selectionStyle;
extern NSString *__nonnull zh_accessoryType;

extern NSString *__nonnull zh_SuperView;
extern NSString *__nonnull zh_borderWidth;
extern NSString *__nonnull zh_borderColor;
extern NSString *__nonnull zh_borderColorHEX;
extern NSString *__nonnull zh_cornerRadius;


//keyboardType
//sepcolor
//masksToBounds

@interface UIView(ZHView)

+ (UIView *_Nonnull)viewWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UIButton *_Nonnull)buttonWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UITextField *_Nonnull)textFieldWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UISwitch *_Nonnull)switchWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UITextView *_Nonnull)textViewWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UITableView *_Nonnull)tableViewWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UILabel *_Nonnull)labelWithDictionary:(NSDictionary *_Nullable)dictionary;

+ (UIImageView *_Nonnull)imageViewWithDictionary:(NSDictionary *_Nullable)dictionary;

- (void)setPropertyWithDictionary:(NSDictionary *_Nullable)dictionary;

@end
