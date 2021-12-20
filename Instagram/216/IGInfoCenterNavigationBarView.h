//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStackLayout, IGTextButton, NSMutableArray, UIButton, UILabel;
@protocol IGInfoCenterNavigationBarViewDelegate;

@interface IGInfoCenterNavigationBarView : UIView
{
    UIView *_backgroundView;
    UIView *_borderView;
    UIButton *_closeButton;
    NSMutableArray *_rightButtons;
    UIButton *_infoButton;
    UIButton *_sendButton;
    UIButton *_moreButton;
    IGStackLayout *_rightButtonsLayout;
    IGStackLayout *_buttonsLayout;
    UILabel *_stateLabel;
    IGTextButton *_changeStateButton;
    IGStackLayout *_centerContentLayout;
    _Bool _opaque;
    _Bool _shouldUseDifferentTintWhileTransparent;
    _Bool _shouldShowStateSelector;
    _Bool _isSunset;
    id <IGInfoCenterNavigationBarViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSunset; // @synthesize isSunset=_isSunset;
@property(nonatomic) _Bool shouldShowStateSelector; // @synthesize shouldShowStateSelector=_shouldShowStateSelector;
@property(nonatomic) _Bool shouldUseDifferentTintWhileTransparent; // @synthesize shouldUseDifferentTintWhileTransparent=_shouldUseDifferentTintWhileTransparent;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) __weak id <IGInfoCenterNavigationBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_changeStateButtonSelected;
- (void)_moreButtonSelected;
- (void)_sendButtonSelected;
- (void)_infoButtonSelected;
- (void)_closeButtonSelected;
- (void)_updateButtonTint;
- (void)_updateRightButtonsLayout;
- (void)configureWithModel:(id)arg1;
@property(nonatomic) _Bool shouldShowSendButton;
@property(nonatomic) _Bool shouldShowMoreButton;
@property(nonatomic) _Bool shouldShowInfoButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 directShareEnabled:(_Bool)arg2;

@end

