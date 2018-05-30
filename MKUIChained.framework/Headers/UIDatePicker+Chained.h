//
//  UIDatePicker+Chained.h
//  ObjectCChained
//
//  Created by sny on 2018/5/30.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDatePicker (Chained)

/**
 UIDatePicker -> minimumDate, maximumDate, date
 */
@property (copy, nonatomic) UIDatePicker *(^chainedUIDatePickerDateSet)(NSDate *minimumDate,NSDate *maximumDate,NSDate *date);

/**
 UIDatePicker -> countDownDuration, minuteInterval
 */
@property (copy, nonatomic) UIDatePicker *(^chainedUIDatePickerAnimationSet)(NSTimeInterval countDownDuration,NSInteger minuteInterval);

/**
 UIDatePicker -> datePickerMode
 */
@property (copy, nonatomic) UIDatePicker *(^chainedUIDatePickerModel)(UIDatePickerMode datePickerMode);

@end
