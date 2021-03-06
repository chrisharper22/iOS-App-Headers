//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGLiveBroadcastActionMenuView, IGStoryCameraGalleryButton;

@interface IGLiveBroadcastWidgetViewController : IGViewController
{
    IGLiveBroadcastActionMenuView *_actionMenuView;
    IGStoryCameraGalleryButton *_galleryView;
    CDUnknownBlockType _needLayoutBlock;
    CDUnknownBlockType _didTapButtonBlock;
    unsigned long long _layout;
    id _userKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id userKey; // @synthesize userKey=_userKey;
@property(readonly, nonatomic) unsigned long long layout; // @synthesize layout=_layout;
- (void)_didTapButtonWithButtonType:(unsigned long long)arg1;
- (void)updateButtonStatus:(unsigned long long)arg1 forButtonType:(unsigned long long)arg2;
- (void)setButtonAccessibilityValue:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)setButtonCoolDown:(double)arg1 buttonType:(unsigned long long)arg2;
- (void)setButtonDisabled:(_Bool)arg1 buttonType:(unsigned long long)arg2;
- (void)setButtonHidden:(_Bool)arg1 buttonType:(unsigned long long)arg2;
- (void)addButtonWithType:(unsigned long long)arg1;
- (id)buttonViewWithType:(unsigned long long)arg1;
- (_Bool)hasButtonWithType:(unsigned long long)arg1;
@property(nonatomic) long long widgetViewContentMode; // @dynamic widgetViewContentMode;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @dynamic contentInsets;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLayout:(unsigned long long)arg1 userKey:(id)arg2 needLayoutBlock:(CDUnknownBlockType)arg3 didTapButtonBlock:(CDUnknownBlockType)arg4 analyticsModule:(id)arg5;

@end

