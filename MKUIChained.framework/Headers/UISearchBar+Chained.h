//
//  UISearchBar+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/30.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISearchBar (Chained)

/**
 UISearchBar -> showsBookmarkButton, showsSearchResultsButton, showsCancelButton
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarButtonSet)(BOOL showsBookmarkButton,BOOL showsSearchResultsButton,BOOL showsCancelButton);

/**
 UISearchBar -> showsScopeBar
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarScopeBarSet)(BOOL showsScopeBar);

/**
 UISearchBar -> delegateObject
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarDelegate)(id delegateObject);

/**
 UISearchBar -> searchBarStyle
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarStyle)(UISearchBarStyle searchBarStyle);

/**
 UISearchBar -> barStyle
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarBarStyle)(UIBarStyle barStyle);

/**
 UISearchBar -> barTintColor, tintColor
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarTintColorSet)(UIColor * barTintColor,UIColor * tintColor);

/**
 UISearchBar -> placeholder
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchBarPlaceholder)(NSString * placeholder);

/**
 UISearchBar -> backgroundImage, scopeBarBackgroundImage
 */
@property (copy, nonatomic) UISearchBar *(^chainedUISearchImageSet)(UIImage * backgroundImage,UIImage * scopeBarBackgroundImage);

@end
