//
//  ASJOverflowMenu.h
//  ASJOverflowButtonExample
//
//  Created by sudeep on 21/12/15.
//  Copyright © 2015 sudeep. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASJOverflowItem;

typedef void (^ItemTapBlock)(ASJOverflowItem *item, NSInteger idx);

@interface ASJOverflowMenu : UIView

@property (copy, nonatomic) NSArray *items;
@property (strong, nonatomic) UIColor *menuBackgroundColor;
@property (strong, nonatomic) UIColor *itemTextColor;
@property (strong, nonatomic) UIFont *itemFont;
@property (assign, nonatomic) BOOL shouldDimBackground;
@property (copy) ItemTapBlock itemTapBlock;

- (void)setItemTapBlock:(ItemTapBlock)itemTapBlock;

@end
