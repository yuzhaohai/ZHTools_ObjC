//
//  UIColor(ZHTools).h
//  ZHTools
//
//  Created by 于兆海 (QQ:695885883) on 2016/9/25.
//  Copyright © 2016年 于兆海. All rights reserved.
//

@import UIKit;
@import Foundation;

#pragma mark -  UIView
extern NSString *__nonnull zh_userInteractionEnabled;
extern NSString *__nonnull zh_tag;
extern NSString *__nonnull zh_clipsToBounds;
extern NSString *__nonnull zh_backgroundColor;
extern NSString *__nonnull zh_alpha;
extern NSString *__nonnull zh_opaque;
extern NSString *__nonnull zh_hidden;
extern NSString *__nonnull zh_contentMode;
extern NSString *__nonnull zh_tintColor;
extern NSString *__nonnull zh_frame;

extern NSString *__nonnull zh_superView;

#pragma mark -  UIControl : UIView
extern NSString *__nonnull zh_enabled;
extern NSString *__nonnull zh_selected;
extern NSString *__nonnull zh_highlighted;
///垂直方向的对齐方式
extern NSString *__nonnull zh_contentVerticalAlignment;
///水平方向的对齐方式
extern NSString *__nonnull zh_contentHorizontalAlignment;

#pragma mark -  UIButton : UIControl
extern NSString *__nonnull zh_buttonType;
extern NSString *__nonnull zh_normalTitle;
extern NSString *__nonnull zh_selectedTitle;
extern NSString *__nonnull zh_normalAttributedTitle;
extern NSString *__nonnull zh_selectedAttributedTitle;
extern NSString *__nonnull zh_normalTitleColor;
extern NSString *__nonnull zh_selectedTitleColor;
extern NSString *__nonnull zh_normalImage;
extern NSString *__nonnull zh_selectedImage;
extern NSString *__nonnull zh_normalBackgroundImage;
extern NSString *__nonnull zh_selectedBackgroundImage;
extern NSString *__nonnull zh_titleFont;
///默认情况下，当按钮高亮的情况下，图像的颜色会被画深一点，如果这下面的这个属性设置为no，那么可以去掉这个功能
extern NSString *__nonnull zh_adjustsImageWhenHighlighted;
///默认情况下，当按钮禁用的时候，图像会被画得深一点，设置NO可以取消设置
extern NSString *__nonnull zh_adjustsImageWhenDisabled;
///设置为yes的状态下，按钮按下会发光
extern NSString *__nonnull zh_showsTouchWhenHighlighted;
///NSStringFromUIEdgeInsets(UIEdgeInsetsMake(<#CGFloat top#>, <#CGFloat left#>, <#CGFloat bottom#>, <#CGFloat right#>))
extern NSString *__nonnull zh_imageEdgeInsets;
///NSStringFromUIEdgeInsets(UIEdgeInsetsMake(<#CGFloat top#>, <#CGFloat left#>, <#CGFloat bottom#>, <#CGFloat right#>))
extern NSString *__nonnull zh_titleEdgeInsets;
///NSStringFromUIEdgeInsets(UIEdgeInsetsMake(<#CGFloat top#>, <#CGFloat left#>, <#CGFloat bottom#>, <#CGFloat right#>))
extern NSString *__nonnull zh_contentEdgeInsets;

#pragma mark -  UITextField : UIControl
extern NSString *__nonnull zh_text;
extern NSString *__nonnull zh_attributedText;
extern NSString *__nonnull zh_textColor;
extern NSString *__nonnull zh_font;
extern NSString *__nonnull zh_textAlignment;
extern NSString *__nonnull zh_placeholder;
extern NSString *__nonnull zh_attributedPlaceholder;
extern NSString *__nonnull zh_clearsOnBeginEditing;
extern NSString *__nonnull zh_adjustsFontSizeToFitWidth;
extern NSString *__nonnull zh_delegate;
extern NSString *__nonnull zh_clearButtonMode;
extern NSString *__nonnull zh_leftView;
extern NSString *__nonnull zh_leftViewMode;
extern NSString *__nonnull zh_rightView;
extern NSString *__nonnull zh_rightViewMode;
extern NSString *__nonnull zh_keyboardType;
extern NSString *__nonnull zh_background;

#pragma mark -  UISwitch : UIControl
///选中颜色
extern NSString *__nonnull zh_onTintColor;
///滑块颜色
extern NSString *__nonnull zh_thumbTintColor;
extern NSString *__nonnull zh_on;

#pragma mark -  UIScrollView : UIView
extern NSString *__nonnull zh_bounces;
extern NSString *__nonnull zh_alwaysBounceVertical;
extern NSString *__nonnull zh_alwaysBounceHorizontal;
extern NSString *__nonnull zh_pagingEnabled;
extern NSString *__nonnull zh_scrollEnabled;
extern NSString *__nonnull zh_showsVerticalScrollIndicator;///垂直
extern NSString *__nonnull zh_showsHorizontalScrollIndicator;///水平

#pragma mark -  UITextView : UIScrollView
extern NSString *__nonnull zh_editable;
extern NSString *__nonnull zh_selectable;

#pragma mark -  UITableView / UICollectionView : UIScrollView
extern NSString *__nonnull zh_tableViewStyle;
extern NSString *__nonnull zh_tableHeaderView;
extern NSString *__nonnull zh_tableFooterView;
extern NSString *__nonnull zh_dataSource;
extern NSString *__nonnull zh_allowsSelection;
extern NSString *__nonnull zh_separatorStyle;
extern NSString *__nonnull zh_separatorColor;

#pragma mark -  UILabel : UIView
extern NSString *__nonnull zh_numberOfLines;

#pragma mark -  UIImageView : UIView
extern NSString *__nonnull zh_image;
extern NSString *__nonnull zh_highlightedImage;

#pragma mark -  UITableViewCell : UIView
extern NSString *__nonnull zh_selectionStyle;
extern NSString *__nonnull zh_accessoryType;

#pragma mark -  CALayer
extern NSString *__nonnull zh_borderWidth;
extern NSString *__nonnull zh_borderColor;
extern NSString *__nonnull zh_cornerRadius;
extern NSString *__nonnull zh_masksToBounds;


@interface UIView(ZHView)

#pragma mark -  便利构造器

+ (instancetype _Nullable)viewWithDictionary:(NSDictionary *_Nullable)dictionary;

#pragma mark -  setPropertyWithDictionary
- (void)setPropertyWithDictionary:(NSDictionary *_Nullable)dictionary;

@end
