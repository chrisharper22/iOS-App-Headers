//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectAudio, IGDirectUIMessageMetadata;

@protocol IGDirectAudioMessagePlaybackServiceSeeking <NSObject>
- (void)finishAudioMessageSeekWithMetadata:(IGDirectUIMessageMetadata *)arg1 audio:(IGDirectAudio *)arg2 progress:(double)arg3 isShhMode:(_Bool)arg4;
- (void)updateAudioMessageSeekWithMetadata:(IGDirectUIMessageMetadata *)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
- (void)beginAudioMessageSeekWithMetadata:(IGDirectUIMessageMetadata *)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
@end
