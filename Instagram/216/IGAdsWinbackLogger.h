//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGAdsWinbackLogger : NSObject
{
    long long _triggerType;
    NSString *_adId;
    IGUserSession *_userSession;
    NSString *_waterfallID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
- (void)logEventName:(id)arg1 eventTarget:(id)arg2 eventLocation:(id)arg3 eventTargetInfo:(id)arg4;
- (id)initWithTriggerType:(long long)arg1 adId:(id)arg2 userSession:(id)arg3;

@end

