//
//  UIScrollView+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/18.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Chained)

/**
    设置UIScrollView是否显示滚动条
 */
@property (copy, nonatomic) UIScrollView *(^chainedScrollIndicator)(BOOL showsVertical,BOOL showsHorizontal);

/**
    设置UIScrollView的滚动范围
 */
@property (copy, nonatomic) UIScrollView *(^chainedScrollContentSize)(CGSize contentSize);

/**
    设置UIScrollView的是否滚动,是否翻页滚动
 */
@property (copy, nonatomic) UIScrollView *(^chainedScrollEnabled)(BOOL scrollEnabled,BOOL pagingEnabled);

/**
    设置UIScrollView的delegate
 */
@property (copy, nonatomic) UIScrollView *(^chainedScrollDelegate)(id delegateObject);

/**
 设置scrollView的bounces
 */
@property (copy, nonatomic) UIScrollView *(^chainedScrollBounces)(BOOL bounces,BOOL bouncesZoom);

@end
