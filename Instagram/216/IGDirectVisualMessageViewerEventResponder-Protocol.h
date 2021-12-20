//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectVisualMessage, IGDirectVisualMessageViewerController, IGImageRequestSummary, IGImageURL, IGStoryAttributionModel, NSError, NSString;

@protocol IGDirectVisualMessageViewerEventResponder <NSObject>
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didTapAttributionTooltipWithModel:(IGStoryAttributionModel *)arg2;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didTapAttributionWithModel:(IGStoryAttributionModel *)arg2;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didUnpausePlaybackForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didPausePlaybackForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 willLoadImageURL:(IGImageURL *)arg2 visualMessage:(IGDirectVisualMessage *)arg3;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 willDismissForNavType:(long long)arg2;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didEndPlaybackForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3 forNavType:(long long)arg4;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didDetectScreenshotForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didFailToLoadMediaForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3 error:(NSError *)arg4 networkRequestSummary:(IGImageRequestSummary *)arg5;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didBeginPlaybackForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didFinishLoadingForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3 loadSource:(NSString *)arg4 networkRequestSummary:(IGImageRequestSummary *)arg5;
- (void)visualMessageViewerController:(IGDirectVisualMessageViewerController *)arg1 didBeginLoadingForVisualMessage:(IGDirectVisualMessage *)arg2 atIndex:(long long)arg3;
@end
