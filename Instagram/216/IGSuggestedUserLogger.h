//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFollowPeopleLoggerProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableSet, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSuggestedUserLogger : NSObject <IGFollowPeopleLoggerProtocol, NSCopying>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_module;
    NSString *_view;
    NSMutableSet *_set;
    unsigned long long _offset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)logFollowWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logUnblockWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDeclineFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logAcceptFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logClickWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logViewpointImpressionWithUserInfo:(id)arg1;
- (void)logImpressionWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithModule:(id)arg1 view:(id)arg2 offset:(unsigned long long)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

