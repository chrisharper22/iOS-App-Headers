//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryLandscapeAdsView, IGStoryViewerTapTarget, NSDictionary, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol IGStoryLandscapeAdsViewDelegate <NSObject>
- (void)storyLandscapeAdsViewShowCaptionSheet:(IGStoryLandscapeAdsView *)arg1;
- (void)storyLandscapeAdsViewDidCloseInternalTool;
- (void)storyLandscapeAdsViewDidOpenInternalTool;
- (void)storyLandscapeAdsViewDidLaidOutWithFeedItemPK:(NSString *)arg1 layoutExtra:(NSDictionary *)arg2;
- (void)storyLandscapeAdsViewDidLongPressInCaptionTextView:(UILongPressGestureRecognizer *)arg1;
- (_Bool)storyLandscapeAdsViewTryRemoveTappableOverlayWithSuccess;
- (void)storyLandscapeAdsViewDidTapOnTappableOverlay:(IGStoryViewerTapTarget *)arg1 atPoint:(struct CGPoint)arg2;
- (void)storyLandscapeAdsViewDidTapInCaptionTextViewWithGestureRecognizer:(UITapGestureRecognizer *)arg1;
- (void)storyLandscapeAdsViewDidExpandCaption:(NSDictionary *)arg1;
- (void)storyLandscapeAdsViewDidCollapseCaption:(NSDictionary *)arg1;
@end

