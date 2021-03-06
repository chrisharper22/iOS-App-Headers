//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSError, NSString;

@interface MAIAppStoreDismissedAnalytics : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isPreloadingEnabled;
    _Bool _didLoadSucceed;
    double _timeSpent;
    double _tti;
    double _backgroundTime;
    double _loadDuration;
    NSError *_loadError;
    NSString *_iTunesIdentifier;
    NSString *_sessionID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(readonly, copy, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(readonly, nonatomic) double loadDuration; // @synthesize loadDuration=_loadDuration;
@property(readonly, nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(readonly, nonatomic) double tti; // @synthesize tti=_tti;
@property(readonly, nonatomic) double timeSpent; // @synthesize timeSpent=_timeSpent;
@property(readonly, nonatomic) _Bool didLoadSucceed; // @synthesize didLoadSucceed=_didLoadSucceed;
@property(readonly, nonatomic) _Bool isPreloadingEnabled; // @synthesize isPreloadingEnabled=_isPreloadingEnabled;
- (id)initWithIsPreloadingEnabled:(_Bool)arg1 didLoadSucceed:(_Bool)arg2 timeSpent:(double)arg3 tti:(double)arg4 backgroundTime:(double)arg5 loadDuration:(double)arg6 loadError:(id)arg7 iTunesIdentifier:(id)arg8 sessionID:(id)arg9;

@end

