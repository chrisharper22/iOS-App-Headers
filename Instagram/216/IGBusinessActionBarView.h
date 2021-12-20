//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGUserSession, NSArray, NSMutableArray, NSString, UIButton;
@protocol IGBusinessActionBarViewDelegate;

@interface IGBusinessActionBarView : UIView
{
    IGUserSession *_userSession;
    double _desiredHeight;
    UIView *_bottomSeparator;
    id <IGBusinessActionBarViewDelegate> _delegate;
    UIButton *_shopButton;
    UIButton *_addShopButton;
    NSMutableArray *_actions;
    UIView *_topSeparator;
    NSMutableArray *_lineViews;
    NSArray *_moreActions;
    NSString *_ixButtonTitle;
    NSString *_fbeCtaLabel;
    NSString *_displayCategoryName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayCategoryName; // @synthesize displayCategoryName=_displayCategoryName;
@property(copy, nonatomic) NSString *fbeCtaLabel; // @synthesize fbeCtaLabel=_fbeCtaLabel;
@property(copy, nonatomic) NSString *ixButtonTitle; // @synthesize ixButtonTitle=_ixButtonTitle;
@property(copy, nonatomic) NSArray *moreActions; // @synthesize moreActions=_moreActions;
@property(retain, nonatomic) NSMutableArray *lineViews; // @synthesize lineViews=_lineViews;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) UIButton *addShopButton; // @synthesize addShopButton=_addShopButton;
@property(readonly, nonatomic) UIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(nonatomic) __weak id <IGBusinessActionBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapRequestPSTNNumber;
- (void)_didTapRequestEmail;
- (void)_didTapSeeMenu;
- (void)_didTapViewOwnSubscription;
- (void)_didTapViewSubscription;
- (void)_didTapSubscribe;
- (void)_didTapCapability;
- (void)_didTapDeliveryButton;
- (void)_didTapBuyButton;
- (void)_didTapFBEButton;
- (void)_didTapDonate;
- (void)_didTapShare;
- (void)_didTapAddShop;
- (void)_didTapShop;
- (void)_didTapMore;
- (void)_didTapEmail;
- (void)_didTapText;
- (void)_didTapCall;
- (void)_didTapWhatsApp;
- (void)_didTapInstantExperienceButton;
- (void)_addMoreActions;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 accessibilityIdentifier:(id)arg3;
- (void)_addActionsToView:(id)arg1 module:(id)arg2;
- (void)_addSeparators;
- (void)configWithViewModel:(id)arg1 desiredHeight:(double)arg2 module:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
