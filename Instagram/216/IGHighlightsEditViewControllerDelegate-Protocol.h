//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGHighlightCoverModel, IGHighlightsEditViewController, NSSet, NSString;

@protocol IGHighlightsEditViewControllerDelegate <NSObject>
- (void)editHighlightsVC:(IGHighlightsEditViewController *)arg1 didUpdateCover:(IGHighlightCoverModel *)arg2;
- (void)editHighlightsVCDidTapCover:(IGHighlightsEditViewController *)arg1;
- (void)editHighlightsVC:(IGHighlightsEditViewController *)arg1 didTapDoneWithAddedItems:(NSSet *)arg2 removedItems:(NSSet *)arg3 title:(NSString *)arg4;
- (void)editHighlightsVCDidTapCancel:(IGHighlightsEditViewController *)arg1 didChangeSelection:(_Bool)arg2;
@end

