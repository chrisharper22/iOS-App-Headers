//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGUnfollowReciprocalLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_module;
}

- (void).cxx_destruct;
- (void)logUnfollowReciprocalToastTap;
- (void)logUnfollowReciprocalToastImpression;
- (id)initWithAnalyticsLogger:(id)arg1 module:(id)arg2;

@end

