//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGHighlightCoverModel, IGStoryHighlightsCreationController, IGStoryReel, NSSet, NSString;

@protocol IGStoryHighlightsCreationControllerDelegate <NSObject>
- (void)highlightsCreationController:(IGStoryHighlightsCreationController *)arg1 didPublishSuggestHighlightType:(long long)arg2;
- (void)highlightsCreationControllerDidEditSuggestedHighlight:(IGStoryHighlightsCreationController *)arg1 addedItems:(NSSet *)arg2 removedItems:(NSSet *)arg3 title:(NSString *)arg4 coverModel:(IGHighlightCoverModel *)arg5;
- (void)highlightsCreationControllerDidTapCancel:(IGStoryHighlightsCreationController *)arg1;
- (void)highlightsCreationControllerDidFinish:(IGStoryHighlightsCreationController *)arg1 mode:(long long)arg2 reel:(IGStoryReel *)arg3;
@end

