# ZHTools_ObjC
天下武功 唯快不破

pod 'ZHTools_ObjC'

``` objectivec
[UILabel viewWithDictionary:@{
        zh_frame: NSStringFromCGRect(CGRectMake(110, 100, 100, 100)),
        zh_textAlignment: @(NSTextAlignmentCenter),
        zh_textColor: @"000000",
        zh_superView: self.view,
        zh_text: @"123456",
        zh_font: @12,
        zh_borderColor: @"000000",
        zh_borderWidth: @1,
    }];
    
    UIButton *button = [UIButton viewWithDictionary:@{
        zh_frame: NSStringFromCGRect(CGRectMake(220, 100, 100, 100)),
        zh_selectedTitleColor: @"999999",
        zh_normalTitleColor: @"000000",
        zh_selectedTitle: @"selected",
        zh_normalTitle:@"normal",
        zh_superView: self.view,
        zh_titleFont: @12,
        zh_selected: @1,
    }];
    [button addTarget:self action:@selector(tappedButton:) forControlEvents:UIControlEventTouchUpInside];
    
    [UITextField viewWithDictionary:@{
            zh_frame: NSStringFromCGRect(CGRectMake(10, label.bottom, label.width, 49)),
            zh_backgroundColor: kColor_F5F5F5,
            zh_textColor: kColor_333333,
            zh_font: @13,
            zh_masksToBounds: @1,
            zh_cornerRadius: @4,
            zh_leftViewMode: @(UITextFieldViewModeAlways),
            zh_leftView: [UIImageView viewWithDictionary:@{
                zh_frame: NSStringFromCGRect(CGRectMake(0, 0, 30, 49)),
                zh_contentMode: @(UIViewContentModeCenter),
                zh_image: @"搜索",
            }],
            zh_attributedPlaceholder: [[NSAttributedString alloc] initWithString:@"请输入机器编号" attributes:@{NSForegroundColorAttributeName: [UIColor zh_colorWithHexString:kColor_B3B3B3]}],
        }];
        
        [UITextView viewWithDictionary:@{
        zh_frame: NSStringFromCGRect(CGRectMake(0, 0, zh_ScreenWidth, 56)),
        zh_backgroundColor: kColor_F5F5F5,
        zh_textColor: kColor_333333,
        zh_font: @16,
        zh_superView: view,
        zh_userInteractionEnabled: @0
    }];
    
    self.tableView = [UITableView viewWithDictionary:@{
        zh_frame: NSStringFromCGRect(frame),
        zh_tableFooterView: footer,
        zh_superView: self.view,
        zh_dataSource: self,
        zh_delegate: self,
        zh_backgroundColor: self.topBar.backgroundColor,
        zh_tableHeaderView: [UIImageView viewWithDictionary:@{
            zh_frame: NSStringFromCGRect(CGRectMake(0, 0, zh_ScreenWidth, height)),
            zh_contentMode: @(UIViewContentModeTop),
            zh_backgroundColor: kColor_FFFFFF,
            zh_image: [image sd_resizedImageWithSize:CGSizeMake(zh_ScreenWidth, height) scaleMode:SDImageScaleModeFill],
        }]
    }];
```
