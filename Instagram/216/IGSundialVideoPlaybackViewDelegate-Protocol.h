//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialVideoPlaybackView, NSError;

@protocol IGSundialVideoPlaybackViewDelegate <NSObject>
- (void)sundialVideoPlaybackViewDidFail:(IGSundialVideoPlaybackView *)arg1 withError:(NSError *)arg2;
- (void)sundialVideoPlaybackView:(IGSundialVideoPlaybackView *)arg1 didUpdatePlaybackState:(CDStruct_f53b2872)arg2;
- (void)sundialVideoPlaybackViewDidStartPlaying:(IGSundialVideoPlaybackView *)arg1;
- (void)sundialVideoPlaybackViewDidLoadPreviewImage:(IGSundialVideoPlaybackView *)arg1;
@end

