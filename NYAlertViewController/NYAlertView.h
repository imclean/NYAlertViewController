//
//  NYAlertView.h
//
//  Created by Nealon Young on 7/13/15.
//  Copyright (c) 2015 Nealon Young. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, NYAlertViewButtonType) {
    NYAlertViewButtonTypeFilled,
    NYAlertViewButtonTypeBordered
};

@interface UIButton (BackgroundColor)

- (void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

@end

@interface NYAlertViewButton : UIButton

@property (nonatomic) NYAlertViewButtonType type;

@property (nonatomic) CGFloat cornerRadius;

@end

@interface NYAlertView : UIView

@property (nonatomic,strong) UILabel *titleLabel;
@property (nonatomic,strong) UITextView *messageTextView;
@property (nonatomic,strong) UIView *contentView;

@property (nonatomic,strong) UIFont *buttonTitleFont;
@property (nonatomic,strong) UIFont *cancelButtonTitleFont;
@property (nonatomic,strong) UIFont *destructiveButtonTitleFont;

@property (nonatomic,strong) UIColor *buttonColor;
@property (nonatomic,strong) UIColor *buttonTitleColor;
@property (nonatomic,strong) UIColor *cancelButtonColor;
@property (nonatomic,strong) UIColor *cancelButtonTitleColor;
@property (nonatomic,strong) UIColor *destructiveButtonColor;
@property (nonatomic,strong) UIColor *destructiveButtonTitleColor;

@property (nonatomic) CGFloat buttonCornerRadius;
@property (nonatomic) CGFloat maximumWidth;

@property (nonatomic, readonly) UIView *alertBackgroundView;

@property (nonatomic, readonly) NSLayoutConstraint *backgroundViewVerticalCenteringConstraint;

//@property (nonatomic) NSArray *actions;
@property (nonatomic,strong) NSArray *actionButtons;

@property (nonatomic,strong) NSArray *textFields;

@end
