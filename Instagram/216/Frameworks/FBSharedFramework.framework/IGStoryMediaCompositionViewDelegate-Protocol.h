//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryMediaCompositionView, UIGestureRecognizer, UIView;
@protocol IGGLFFilterProtocol;

@protocol IGStoryMediaCompositionViewDelegate <NSObject>
- (void)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 didPlayVideoToTime:(double)arg2;
- (void)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 stickerWillBeRemovedFromComposition:(UIView *)arg2;
- (void)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 stickerWasAddedToComposition:(UIView *)arg2;
- (void)mediaCompositionViewDidFinishPositioningAndResizingMedia:(IGStoryMediaCompositionView *)arg1;
- (void)mediaCompositionViewWillBeginPositioningAndResizingMedia:(IGStoryMediaCompositionView *)arg1;
- (_Bool)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 shouldBeginPositioningAndResizingMediaWithGesture:(UIGestureRecognizer *)arg2;
- (void)mediaCompositionViewColorFilterDidFinishLoading:(IGStoryMediaCompositionView *)arg1;
- (void)mediaCompositionView:(IGStoryMediaCompositionView *)arg1 didSettleOnColorFilter:(id <IGGLFFilterProtocol>)arg2;
- (void)mediaCompositionViewWillSettleOnNewColorFilter:(IGStoryMediaCompositionView *)arg1;
@end
