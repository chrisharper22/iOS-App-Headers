//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGLiveAddonUIConforming-Protocol.h"

@class IGTapButton, NSString, UIStackView, UIViewPropertyAnimator;
@protocol IGLiveAddonCoordinating, IGLiveGuestInteractionButtonsContainerViewDelegate;

@interface IGLiveGuestInteractionButtonsContainerView : UIView <IGLiveAddonUIConforming>
{
    CDStruct_eef638a9 _liveBroadcastConfig;
    UIStackView *_buttonStack;
    IGTapButton *_expansionButton;
    IGTapButton *_optionButton;
    IGTapButton *_viewerInviteButton;
    IGTapButton *_badgeButton;
    IGTapButton *_submitQuestionButton;
    UIViewPropertyAnimator *_expansionAnimator;
    _Bool _expanded;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
    id <IGLiveGuestInteractionButtonsContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveGuestInteractionButtonsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)unconfigurateCoordinator;
- (void)configurateCoordinator:(id)arg1;
- (void)_submitQuestionButtonTapped;
- (void)_badgeButtonTapped;
- (void)_viewerInviteButtonTapped;
- (void)_optionButtonTapped;
- (void)_expansionButtonTapped;
- (id)_availableButtons;
- (void)setSubmitQuestionButtonSelected:(_Bool)arg1;
- (void)showViewerInviteButton:(_Bool)arg1;
- (void)toggleButtonExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithLiveBroadcastConfig:(CDStruct_eef638a9)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 liveBroadcastConfig:(CDStruct_eef638a9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

