//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGNavigationController.h>

#import "IGAnalyticsModule-Protocol.h"

@class NSString;

@interface IGTVRotatableViewerNavigationController : IGNavigationController <IGAnalyticsModule>
{
}

- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)analyticsModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

