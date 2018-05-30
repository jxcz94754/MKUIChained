//
//  UITextField+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/18.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Chained)

/**
    设置UITextField的背景文字,文字大小,字体颜色
 */
@property (copy, nonatomic) UITextField *(^chianedTextSet)(NSString *placeholderText,UIFont *textFont,UIColor *textColor);

/**
 设置显示文本的位置
 */
@property (copy, nonatomic) UITextField *(^chianedTextAlignment)(NSTextAlignment textAlignment);

/**
 设置UITextFeild.delegate
 */
@property (copy, nonatomic) UITextField *(^chianedUITextFieldDelegate)(id delegateObject);

#pragma mark - Version_0.0.2

/**
 UITextFeild -> leftView, leftViewMode
 */
@property (copy, nonatomic) UITextField *(^chainedUITextFieldLeftViewSet)(UIView * leftView,UITextFieldViewMode leftViewMode);

/**
 UITextFeild -> rightView, rightViewMode
 */
@property (copy, nonatomic) UITextField *(^chainedUITextFieldRightViewSet)(UIView * rightView,UITextFieldViewMode rightViewMode);

/**
 UITextFeild -> borderStyle
 */
@property (copy, nonatomic) UITextField *(^chainedUITextFieldBorderStyle)(UITextBorderStyle borderStyle);

@end
