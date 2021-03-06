//
//  XXBaseViewController.h
//  funding
//
//  Created by Zhao yang on 12/17/13.
//  Copyright (c) 2013 hentre. All rights reserved.
//

#import <UIKit/UIKit.h>

// components
#import "XXTopbarView.h"
#import "XXAlertView.h"
#import "XXButton.h"
#import "XXActionSheet.h"

// utils
#import "XXStringUtils.h"
#import "XXJsonUtils.h"

#import "XXEventNameFilter.h"
#import "XXEventSubscriptionPublisher.h"

// categories
#import "NSDictionary+Extension.h"
#import "NSMutableDictionary+Extension.h"
#import "UIDevice+SystemVersion.h"
#import "UIColor+HexColor.h"
#import "UIView+ViewController.h"
#import "UIApplication+TopViewController.h"

@interface XXBaseViewController : UIViewController

@property (nonatomic, strong) XXTopbarView *topbarView;

- (void)initDefaults;
- (void)initUI;
- (void)setUp;

- (void)registerTapGestureToResignKeyboard;
- (void)triggerTapGestureEventForResignKeyboard:(UIGestureRecognizer *)gesture;
- (void)resignFirstResponderFor:(UIView *)view;

- (void)showEmptyContentViewWithMessage:(NSString *)message;
- (void)removeEmptyContentView;

- (void)showLoadingViewWithMessage:(NSString *)message;
- (void)removeLoadingView;

@end
