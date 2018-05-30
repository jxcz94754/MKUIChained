//
//  UIView+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/18.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Chained)

/**
 设置视图的frame
 */
@property (copy, nonatomic) UIView *(^chainedFrame)(CGRect frame);

/**
 设置视图的背景色
 */
@property (copy, nonatomic) UIView *(^chainedblackGroundColor)(UIColor* color);

/**
 设置圆角的弧度是否切割
 */
@property (copy, nonatomic) UIView *(^chainedLayerCircular)(CGFloat cornerRadius,BOOL masksToBounds);

/**
 设置弧边的宽度,弧边的颜色
 */
@property (copy, nonatomic) UIView *(^chainedLayerBorder)(UIColor *color,CGFloat borderWidth);

#pragma mark - Version_0.0.2

/**
 UIView -> Hidden
 */
@property (copy, nonatomic) UIView *(^chaindeUIViewHidden)(BOOL hidden);

/**
 UIView -> tag
 */
@property (copy, nonatomic) UIView *(^chaindeUIViewTag)(NSInteger tag);

/**
 UIView -> alpha
 */
@property (copy, nonatomic) UIView *(^chaindeUIViewAlpha)(CGFloat alpha);

/**
 UIView -> clipsToBounds
 */
@property (copy, nonatomic) UIView *(^chaindeUIViewClipsToBounds)(BOOL clipsToBounds);

@end
