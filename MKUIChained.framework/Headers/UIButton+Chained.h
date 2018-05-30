//
//  UIButton+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/16.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Chained)

/**
 设置Button.TextLabel的文字 字体大小 文字颜色
 */
@property (copy, nonatomic) UIButton* (^titleParams)(NSString *title,CGFloat fountSize,UIColor *textColor);

/**
 设置Button的被点击和正常状态下的图片
 */
@property (copy, nonatomic) UIButton* (^selectImageParams)(UIImage *selectImage,UIImage *normalImage);

/**
 设置button.titleLabel的位置
 */
@property (copy, nonatomic) UIButton* (^titleEdgeInsetsParams)(UIEdgeInsets titleEdgeInsets);

/**
 设置button.image的位置
 */
@property (copy, nonatomic) UIButton* (^imageEdgeInsetsParams)(UIEdgeInsets imageEdgeInsets);

@end
