//
//  UILabel+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/18.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Chained)

/**
 设置显示文本的内容,字体颜色,字体大小
 */
@property (copy, nonatomic) UILabel *(^chianedTextSet)(NSString *text,UIColor *textColor,UIFont *textFont);

/**
 设置显示文本的位置
 */
@property (copy, nonatomic) UILabel *(^chianedTextAlignment)(NSTextAlignment textAlignment);

/**
 设置显示的富文本
 */
@property (copy, nonatomic) UILabel *(^chianedNSAttributedString)(NSAttributedString *attributedString);


#pragma mark - Version_0.0.2

/**
 UILabel -> enabled, userInteractionEnabled
 */
@property (copy, nonatomic) UILabel *(^chainedLabelEnable)(BOOL enabled,BOOL userInteractionEnabled);

/**
 UILabel -> numberOfLines
 */
@property (copy, nonatomic) UILabel *(^chainedLabelNumberOfLines)(NSInteger numberOfLines);

/**
 UILabel -> shadowColor, shadowOffset
 */
@property (copy, nonatomic) UILabel *(^chainedLabelShadow)(UIColor * shadowColor,CGSize shadowOffset);

@end

