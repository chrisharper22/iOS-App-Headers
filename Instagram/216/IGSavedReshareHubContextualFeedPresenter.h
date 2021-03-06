//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSavedMediaFeedContextualFeedPresenter-Protocol.h"

@class IGDirectShareRecipient, IGUserIntentHandler, NSString, UIViewController;
@protocol IGReshareHubDelegate;

@interface IGSavedReshareHubContextualFeedPresenter : NSObject <IGSavedMediaFeedContextualFeedPresenter>
{
    IGUserIntentHandler *_intentHandler;
    UIViewController *_controller;
    IGDirectShareRecipient *_directShareRecipient;
    NSString *_analyticsModule;
    id <IGReshareHubDelegate> _reshareHubDelegate;
}

- (void).cxx_destruct;
- (void)presentContextualFeedWithFeedNetworkSource:(id)arg1 media:(id)arg2 title:(id)arg3;
- (id)initWithIntentHandler:(id)arg1 controller:(id)arg2 directShareRecipient:(id)arg3 analyticsModule:(id)arg4 reshareHubDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

