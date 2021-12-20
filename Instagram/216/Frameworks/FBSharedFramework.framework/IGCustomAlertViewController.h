//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGCustomAlertViewDelegate-Protocol.h>

@class IGPopoverStyle, NSString, UIView;
@protocol IGCustomAlertView;

@interface IGCustomAlertViewController : IGViewController <IGCustomAlertViewDelegate>
{
    IGPopoverStyle *_popoverStyle;
    _Bool _disableAnimationForDismissal;
    UIView<IGCustomAlertView> *_alertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<IGCustomAlertView> *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool disableAnimationForDismissal; // @synthesize disableAnimationForDismissal=_disableAnimationForDismissal;
- (void)customAlertViewDidTapFooter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)customAlertViewDidCancel:(id)arg1;
- (void)customAlertView:(id)arg1 didTapAction:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAlertView:(id)arg1 popoverStyle:(id)arg2;
- (id)initWithAlertView:(id)arg1;
- (_Bool)prefersNavigationBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

