//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore, NSString;
@protocol IGAPIClient, IGLiveCommentPostingServiceDelegate, IGLiveLoggingContext;

@interface IGLiveCommentPostingService : NSObject
{
    IGUserStore *_userStore;
    id <IGAPIClient> _networker;
    NSString *_broadcastId;
    id <IGLiveLoggingContext> _loggingContext;
    id <IGLiveCommentPostingServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveCommentPostingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)postCommentText:(id)arg1 fromUser:(id)arg2 secondsIntoVideo:(double)arg3 supportTier:(long long)arg4 badgeCount:(long long)arg5 shouldProfilePictureGlow:(_Bool)arg6 forceCreate:(_Bool)arg7 failureHandler:(CDUnknownBlockType)arg8;
- (id)initWithBroadcastId:(id)arg1 networker:(id)arg2 loggingContext:(id)arg3 userStore:(id)arg4;

@end

