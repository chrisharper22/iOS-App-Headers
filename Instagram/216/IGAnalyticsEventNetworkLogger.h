//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkingUserSessionAnalyticsLogger-Protocol.h"

@class NSString;

@interface IGAnalyticsEventNetworkLogger : NSObject <IGNetworkingUserSessionAnalyticsLogger>
{
}

- (void)logEventWithName:(id)arg1 module:(id)arg2 extraValues:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
