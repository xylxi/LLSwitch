//
//  LLSwitch.h
//  LLSwitch
//
//  Created by admin on 16/5/12.
//  Copyright © 2016年 LiLei. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LLSwitchDelegate;

IB_DESIGNABLE @interface LLSwitch : UIView


// 开关的打开颜色
@property (nonatomic, strong) IBInspectable UIColor *onColor;

// 开关的关闭颜色
@property (nonatomic, strong) IBInspectable UIColor *offColor;

// 脸的颜色
@property (nonatomic, strong) IBInspectable UIColor *faceColor;

// 动画时间
@property (nonatomic, assign) IBInspectable CGFloat animationDuration;

// 开关状态
@property (nonatomic, assign) IBInspectable BOOL on;

@property (nonatomic, weak) IBOutlet id <LLSwitchDelegate> delegate;

@end


#pragma mark LLSwitch delegate
@protocol LLSwitchDelegate <NSObject>

@optional


- (void)didTapLLSwitch:(LLSwitch *)llSwitch;


- (void)animationDidStopForLLSwitch:(LLSwitch *)llSwitch;

@end
