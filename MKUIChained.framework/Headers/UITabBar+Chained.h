//
//  UITabBar+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/25.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (Chained)

#pragma  Mark - Version_0.0.2

/**
 UITabBar -> backgroundImage, selectionIndicatorImage, shadowImage
 */
@property (copy, nonatomic) UITabBar *(^chainedImageSet)(UIImage *backgroundImage,UIImage *selectionIndicatorImage,UIImage *shadowImage);

/**
 UITabBar -> unselectedItemTintColor, tintColor, selectedImageTintColor, barTintColor
 */
@property (copy, nonatomic) UITabBar *(^chainedTintColorSet)(UIColor *unselectedItemTintColor,UIColor *tintColor,UIColor *selectedImageTintColor,UIColor *barTintColor);

/**
 UITabBar -> Delegate
 */
@property (copy, nonatomic) UITabBar *(^chainedTabBarDelegate)(id delegateObject);

/**
 UITabBar -> items, itemWidth, itemSpacing
 */
@property (copy, nonatomic) UITabBar *(^chainedTabBarItemsSet)(NSArray * items,CGFloat itemWidth,CGFloat itemSpacing);

/**
 UITabBar -> translucent
 */
@property (copy, nonatomic) UITabBar *(^chainedTranslucent)(BOOL translucent);

/**
 UITabBar -> barStyle
 */
@property (copy, nonatomic) UITabBar *(^chainedBarStyle)(UIBarStyle barStyle);

/**
 UITabBar -> selectedItem
 */
@property (copy, nonatomic) UITabBar *(^chainedSelectedItem)(UITabBarItem *selectedItem);

/**
 UITabBar -> itemPositioning
 */
@property (copy, nonatomic) UITabBar *(^chainedItemPositioning)(UITabBarItemPositioning itemPositioning);

@end
