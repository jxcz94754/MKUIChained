//
//  UISwitch+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/26.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISwitch (Chained)

/**
 UISwitch -> onTintColor, tintColor
 */
@property (copy, nonatomic) UISwitch *(^chainedSwitchTintColorSet)(UIColor *onTintColor,UIColor *tintColor);

/**
 UISwitch -> onImage, offImage
 */
@property (copy, nonatomic) UISwitch *(^chainedSwitchImageSet)(UIImage *onImage,UIImage *offImage);

/**
 UISwitch -> on
 */
@property (copy, nonatomic) UISwitch *(^chainedSwitchOn)(BOOL on);

/**
 UISwitch -> thumbTintColor
 */
@property (copy, nonatomic) UISwitch *(^chainedThumbTintColor)(UIColor * thumbTintColor);

@end
