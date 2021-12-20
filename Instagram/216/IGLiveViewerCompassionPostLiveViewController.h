//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGLiveBroadcast, IGTapButton, IGUserSession, NSString, UILabel;

@interface IGLiveViewerCompassionPostLiveViewController : IGViewController <IGGestureHandler>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    IGLiveBroadcast *_broadcast;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGTapButton *_resourceButton;
}

- (void).cxx_destruct;
- (void)_openInAppBrowserWithURLString:(id)arg1 URLSource:(unsigned long long)arg2;
- (void)_resourceButtonTapped;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2 broadcast:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

