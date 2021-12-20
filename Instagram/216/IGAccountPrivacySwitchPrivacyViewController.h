//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGCoreTextView, IGTapButton, NSString;

@interface IGAccountPrivacySwitchPrivacyViewController : IGViewController <IGGestureHandler>
{
    long long _privacyStatus;
    CDUnknownBlockType _updatePrivacyHandler;
    IGCoreTextView *_bodyTextView;
    IGTapButton *_button;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_buttonTapped;
- (id)_styledBodyString;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPrivacyStatus:(long long)arg1 updatePrivacyHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
