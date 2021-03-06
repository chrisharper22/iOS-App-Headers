//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol FBTTRCTrackerListener;

@interface BKBloksTTRCTracker : NSObject
{
    int _ttrcMarkerId;
    NSString *_ttrcInstanceId;
    NSString *_appID;
    NSObject<FBTTRCTrackerListener> *_listener;
    _Bool _isTTRCTracking;
    unsigned long long _contentSource;
    NSDictionary *_analyticsExtras;
}

- (void).cxx_destruct;
- (void)contentFetchedWithStatus:(id)arg1;
- (void)bloksPayloadParseEnd;
- (void)bloksPayloadParseStart;
- (void)expectContentFromSource:(unsigned long long)arg1;
- (void)contentDisplayed;
- (void)surfaceLeft;
- (void)failWithReason:(id)arg1;
- (void)startWithTimestamp:(long long)arg1;
- (void)start;
- (id)ttrcInstanceId;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 andContext:(const struct BKBloksTTRCContext *)arg2;

@end

