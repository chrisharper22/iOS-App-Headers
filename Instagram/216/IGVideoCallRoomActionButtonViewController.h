//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGGradientView, UIButton, UIStackView, UIView;

@interface IGVideoCallRoomActionButtonViewController : IGViewController
{
    IGGradientView *_bottomActionBackgroundView;
    UIView *_bottomFloatingActionContainerView;
    UIStackView *_buttonStackView;
    _Bool _shouldShowSecondaryButton;
    _Bool _childControllerPresentedModally;
    UIView *_contentView;
    UIButton *_actionButton;
    UIButton *_secondaryButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool childControllerPresentedModally; // @synthesize childControllerPresentedModally=_childControllerPresentedModally;
@property(readonly, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool shouldShowSecondaryButton; // @synthesize shouldShowSecondaryButton=_shouldShowSecondaryButton;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_setupBottomSecondaryButton;
- (void)_setupBottomActionButton;
- (double)buttonsSectionHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

