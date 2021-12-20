//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedPlaybackCompatible-Protocol.h"
#import "IGPlaybackCoordinatorSession-Protocol.h"

@class MISSING_TYPE, UICollectionViewCell;

@interface IGFeedPhotoPlaybackSession : NSObject <IGFeedPlaybackCompatible, IGPlaybackCoordinatorSession>
{
    MISSING_TYPE *photoCell;
}

- (void).cxx_destruct;
- (id)init;
- (void)applyCoordinatedEvent:(long long)arg1 withContext:(id)arg2;
- (id)playbackEligibility;
- (void)willAttachToCoordinator:(id)arg1;
- (id)initWithPhotoCell:(id)arg1;
- (void)addVideoListener:(id)arg1;
@property(nonatomic, readonly) _Bool shouldRequireStricterPlaybackThreshold;
@property(nonatomic, readonly) UICollectionViewCell *managedFeedCell;

@end

