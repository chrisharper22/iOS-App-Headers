//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPSelfieCaptureViewController.h"

#import "IGAnalyticsModule-Protocol.h"

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSCPSelfieCaptureViewController : SCPSelfieCaptureViewController <IGAnalyticsModule>
{
    NSString *_product;
    NSString *_instanceID;
    NSString *_userID;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_setPanGestureEnabled:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 product:(id)arg2 instanceID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

