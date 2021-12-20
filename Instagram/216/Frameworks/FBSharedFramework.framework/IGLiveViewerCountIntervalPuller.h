//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGLiveIntervalPuller.h>

@class IGUserSession, NSString;
@protocol IGLiveLoggingContext, IGLiveViewerCountIntervalPullerDelegate;

@interface IGLiveViewerCountIntervalPuller : IGLiveIntervalPuller
{
    NSString *_broadcastId;
    id <IGLiveLoggingContext> _loggingContext;
    long long _lastBroadcastStatus;
    IGUserSession *_userSession;
    long long _mode;
    id <IGLiveViewerCountIntervalPullerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveViewerCountIntervalPullerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_publishBroadcastUpdate:(id)arg1;
- (CDUnknownBlockType)_successHandler;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 pullInterval:(double)arg3 networker:(id)arg4 loggingContext:(id)arg5 mode:(long long)arg6 surface:(long long)arg7 infoProvider:(id)arg8;

@end
