//
//  UIImageView+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/18.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (Chained)

/**
    设置图片显示的内容和显示模式
 */
@property (copy, nonatomic) UIImageView *(^chainedImageViewContentSet)(UIImage *image,UIViewContentMode contentModel);

#pragma mark - Version_0.0.2 This is 0.0.2 add MAS

/**
 UIImageView -> highlightedAnimationImages, animationImages animationDuration
 */
@property (copy, nonatomic) UIImageView *(^chainedUIImageViewAnimationImages)(NSArray *highlightedAnimationImages,NSArray *animationImages,NSTimeInterval animationDuration);

/**
 UIImageView -> highlighted
 */
@property (copy, nonatomic) UIImageView *(^chainedUIImageViewHighlighted)(BOOL highlighted);

/**
 UIImageView -> animationRepeatCount
 */
@property (copy, nonatomic) UIImageView *(^chainedUIImageViewAnimationRepeatCount)(NSInteger animationRepeatCount);

@end
