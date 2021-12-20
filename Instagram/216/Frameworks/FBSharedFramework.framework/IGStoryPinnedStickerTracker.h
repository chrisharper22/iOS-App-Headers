//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGStoryStickerTracker-Protocol.h>

@class IGRegionTracker, IGUserSession, NSString, UIView;

@interface IGStoryPinnedStickerTracker : NSObject <IGStoryStickerTracker>
{
    IGRegionTracker *_regionTracker;
    CDStruct_1b6d18a9 _initialTime;
    _Bool _trackerSwapPending;
    _Bool _needsBeginTrackingRegion;
    struct IGRegion _stickerRegionInVideoFrame;
    struct CGSize _videoFrameSize;
    struct CGAffineTransform _videoFramePreferredTransform;
    IGUserSession *_userSession;
    _Bool _isApplyingTransformFix;
    _Bool _visibilityAdjustmentSuspended;
    _Bool _highlightStickerWhenOutsideOfVisibleRange;
    UIView *_sticker;
    struct IGRegion _mediaRegion;
    CDStruct_e83c9415 _visibleTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlightStickerWhenOutsideOfVisibleRange; // @synthesize highlightStickerWhenOutsideOfVisibleRange=_highlightStickerWhenOutsideOfVisibleRange;
@property(nonatomic) _Bool visibilityAdjustmentSuspended; // @synthesize visibilityAdjustmentSuspended=_visibilityAdjustmentSuspended;
@property(nonatomic) CDStruct_e83c9415 visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(nonatomic) struct IGRegion mediaRegion; // @synthesize mediaRegion=_mediaRegion;
@property(nonatomic) __weak UIView *sticker; // @synthesize sticker=_sticker;
- (id)dynamicOverlayModelForSceneOfSize:(struct CGSize)arg1;
- (struct IGRegion)_regionInSceneFromRegionInVideoFrame:(struct IGRegion)arg1;
- (struct IGRegion)_regionInVideoFrameForRegionInScene:(struct IGRegion)arg1;
- (void)_repositionSticker;
- (void)repositionStickerForVideoFrame:(struct __CVBuffer *)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)initWithBeginsWithReversePlayback:(_Bool)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

