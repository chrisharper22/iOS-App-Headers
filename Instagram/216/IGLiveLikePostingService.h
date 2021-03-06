//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSNumber, NSString;
@protocol IGAPIClient, IGLiveLikePostingServiceDelegate;

@interface IGLiveLikePostingService : NSObject
{
    id <IGAPIClient> _networker;
    NSString *_broadcastId;
    FBTimer *_batchLikeTimer;
    long long _numLikesInBatch;
    long long _numBurstLikesInBatch;
    NSNumber *_secondsIntoVideoForBatch;
    id <IGLiveLikePostingServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveLikePostingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleFiredTimer;
- (void)postLikeWithBurst:(_Bool)arg1 secondsIntoVideo:(double)arg2;
- (id)initWithBroadcastId:(id)arg1 networker:(id)arg2;

@end

