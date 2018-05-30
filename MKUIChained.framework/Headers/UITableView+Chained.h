//
//  UITableView+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/25.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (Chained)

/**
 UITableViewDelegateAndDataSource
 */
@property (copy, nonatomic) UITableView *(^chainedUITableViewDelegateAndDataSource)(id delegateObject);

/**
 UITableViewCellLineHidden
 */
@property (copy, nonatomic) UITableView *(^chainedUITableViewCellLineHidden)(BOOL Hidden);

@end
