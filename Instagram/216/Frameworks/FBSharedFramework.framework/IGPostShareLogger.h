//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFBXPostingLogger, IGFacebookXPostingWaterfallLoggingManager, IGPostLoggingContext, IGXpostingToFbLogger, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGUserLauncherSet;

@interface IGPostShareLogger : NSObject
{
    long long _shareType;
    NSString *_shareId;
    IGFBXPostingLogger *_fbXPostingLogger;
    _Bool _shouldLogFBXPosting;
    _Bool _isIGFacebookStoryXPosting;
    _Bool _isIGFacebookFeedXPosting;
    id <IGAnalyticsEventLoggingProtocol> _logger;
    IGFacebookXPostingWaterfallLoggingManager *_fbXPostingWaterfallLoggingManager;
    IGXpostingToFbLogger *_feedXpostingLogger;
    id <IGUserLauncherSet> _launcherSet;
    IGPostLoggingContext *_loggingContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPostLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (void)_updateEvent:(id)arg1 retryCount:(long long)arg2;
- (void)_createEventWithName:(id)arg1 logger:(id)arg2 preLogggingEventModification:(CDUnknownBlockType)arg3;
- (void)logFailureWithError:(id)arg1 retryCount:(long long)arg2;
- (void)logSuccessWithRetryCount:(long long)arg1;
- (void)logAttemptWithPossibleFBXPostForMediaUploadConfig:(id)arg1 user:(id)arg2 facebookHelper:(id)arg3;
- (void)logAttempt;
- (id)initWithPostLoggingContext:(id)arg1 shareType:(long long)arg2 shareId:(id)arg3 logger:(id)arg4 launcherSet:(id)arg5;

@end
