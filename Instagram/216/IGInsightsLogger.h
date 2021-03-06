//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGInsightsLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (id)viewPointActionsForUnit:(id)arg1 defaultLoggingData:(id)arg2;
- (void)logAction:(id)arg1 actionState:(id)arg2 component:(id)arg3 fbUserId:(double)arg4 mediaId:(id)arg5 igMediaOwnerId:(id)arg6 parentUnit:(id)arg7 unit:(id)arg8 unitState:(id)arg9 variation:(id)arg10;
- (void)logImpressionWithData:(id)arg1;
@property(readonly, nonatomic) NSString *analyticsModule;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

